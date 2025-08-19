#include "EmotionRating.h"
#include <cmath>
#include <algorithm>

EmotionRating::EmotionRating(int numClasses) : R(numClasses) {
    c.resize(R);
    u.resize(R);
    S.resize(R);
}

void EmotionRating::compute(double P, double N) {
    (void)N; // N is not directly used in formula, but kept for symmetry

    computeDelta(P);
    computeNormalizedIntensity();
    computeClassCenters();
    computeScores();
    computeSoftmax();
    selectClassAndPolarity();
}

void EmotionRating::computeDelta(double P) {
    delta = 2 * P - 100;
}

void EmotionRating::computeNormalizedIntensity() {
    t = std::fabs(delta) / 100.0;
    if (t > 1.0) t = 1.0; // clamp just in case
}

void EmotionRating::computeClassCenters() {
    for (int k = 0; k < R; k++) {
        c[k] = static_cast<double>(k) / (R - 1);
    }
}

void EmotionRating::computeScores() {
    double sigma = 0.5 / (R - 1);
    for (int k = 0; k < R; k++) {
        u[k] = - ( (t - c[k]) * (t - c[k]) ) / (2 * sigma * sigma);
    }
}

void EmotionRating::computeSoftmax() {
    double sumExp = 0.0;
    for (int k = 0; k < R; k++) {
        S[k] = std::exp(u[k]);
        sumExp += S[k];
    }
    for (int k = 0; k < R; k++) {
        S[k] /= sumExp;
    }
}

void EmotionRating::selectClassAndPolarity() {
    auto maxIt = std::max_element(S.begin(), S.end());
    k_star = std::distance(S.begin(), maxIt) + 1; // +1 as in formula
    if (delta > 0) s = 1;
    else if (delta < 0) s = -1;
    else s = 0;
}

int EmotionRating::getSelectedClass() const {
    return k_star;
}

int EmotionRating::getPolarity() const {
    return s;
}

std::vector<double> EmotionRating::getSoftmax() const {
    return S;
}
