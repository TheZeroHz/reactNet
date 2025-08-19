#ifndef EMOTION_RATING_H
#define EMOTION_RATING_H

#include <vector>

class EmotionRating {
public:
    // Constructor: number of classes R
    EmotionRating(int numClasses);

    // Compute rating based on P (positivity) and N (negativity)
    void compute(double P, double N);

    // Get results
    int getSelectedClass() const;   // k*
    int getPolarity() const;        // s = sign(Δ)
    std::vector<double> getSoftmax() const; // probability distribution

private:
    int R;                  // number of classes
    double delta;           // Δ
    double t;               // normalized intensity
    std::vector<double> c;  // class centers
    std::vector<double> u;  // scores
    std::vector<double> S;  // softmax

    int k_star;             // selected class
    int s;                  // polarity sign

    // internal helpers
    void computeDelta(double P);
    void computeNormalizedIntensity();
    void computeClassCenters();
    void computeScores();
    void computeSoftmax();
    void selectClassAndPolarity();
};

#endif
