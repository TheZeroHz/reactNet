#include "rewardDB.h"

void rewardDB::load(LoadFrom loader) {
switch(loader) { 
 case _FLASH_: ///////////// for _achiever_ /////////////////
  reward_DB[_achiever_].val[_superanger_] = -0.95;
  reward_DB[_achiever_].val[_supersad_] = -0.90;
  reward_DB[_achiever_].val[_scared_] = -0.85;
  reward_DB[_achiever_].val[_frustrated_] = -0.75;
  reward_DB[_achiever_].val[_anger_] = -0.70;
  reward_DB[_achiever_].val[_annoyed_] = -0.55;
  reward_DB[_achiever_].val[_sad_] = -0.45;
  reward_DB[_achiever_].val[_confused_] = -0.25;
  reward_DB[_achiever_].val[_shy_] = 0.15;
  reward_DB[_achiever_].val[_calm_] = 0.25; 
  reward_DB[_achiever_].val[_curious_] = 0.60; 
  reward_DB[_achiever_].val[_affectionate_] = 0.65; 
  reward_DB[_achiever_].val[_surprised_] = 0.75; 
  reward_DB[_achiever_].val[_excited_] = 0.85; 
  reward_DB[_achiever_].val[_happy_] = 0.85; 
  reward_DB[_achiever_].val[_playful_] = 0.90; 
  reward_DB[_achiever_].val[_superhappy_] = 0.95;

  ////////////// for _balanced_ ///////////////
  reward_DB[_balanced_].val[_superanger_] = -0.85;
  reward_DB[_balanced_].val[_supersad_] = -0.75;
  reward_DB[_balanced_].val[_scared_] = -0.70;
  reward_DB[_balanced_].val[_frustrated_] = -0.55;
  reward_DB[_balanced_].val[_anger_] = -0.50;
  reward_DB[_balanced_].val[_annoyed_] = -0.40;
  reward_DB[_balanced_].val[_sad_] = -0.35;
  reward_DB[_balanced_].val[_confused_] = -0.20;
  reward_DB[_balanced_].val[_shy_] = 0.25;
  reward_DB[_balanced_].val[_calm_] = 0.35;
  reward_DB[_balanced_].val[_curious_] = 0.50;
  reward_DB[_balanced_].val[_affectionate_] = 0.55;
  reward_DB[_balanced_].val[_surprised_] = 0.65;
  reward_DB[_balanced_].val[_excited_] = 0.70;
  reward_DB[_balanced_].val[_happy_] = 0.75;
  reward_DB[_balanced_].val[_playful_] = 0.80;
  reward_DB[_balanced_].val[_superhappy_] = 0.85;
  
  //////////////// for _creative_ //////////////
  reward_DB[_creative_].val[_superanger_] = -0.65;
  reward_DB[_creative_].val[_supersad_] = -0.55;
  reward_DB[_creative_].val[_scared_] = -0.50;
  reward_DB[_creative_].val[_frustrated_] = -0.40;
  reward_DB[_creative_].val[_anger_] = -0.35;
  reward_DB[_creative_].val[_annoyed_] = -0.25;
  reward_DB[_creative_].val[_sad_] = -0.20;
  reward_DB[_creative_].val[_confused_] = 0.10;  // Positive for creativity
  reward_DB[_creative_].val[_shy_] = 0.35;
  reward_DB[_creative_].val[_calm_] = 0.45;
  reward_DB[_creative_].val[_curious_] = 0.80;
  reward_DB[_creative_].val[_affectionate_] = 0.75;
  reward_DB[_creative_].val[_surprised_] = 0.85;
  reward_DB[_creative_].val[_excited_] = 0.90;
  reward_DB[_creative_].val[_happy_] = 0.90;
  reward_DB[_creative_].val[_playful_] = 0.95;
  reward_DB[_creative_].val[_superhappy_] = 0.95;
  
  ////////////// for _distressed_ /////////////
  reward_DB[_distressed_].val[_superanger_] = -1.00;
  reward_DB[_distressed_].val[_supersad_] = -0.95;
  reward_DB[_distressed_].val[_scared_] = -0.90;
  reward_DB[_distressed_].val[_frustrated_] = -0.85;
  reward_DB[_distressed_].val[_anger_] = -0.80;
  reward_DB[_distressed_].val[_annoyed_] = -0.70;
  reward_DB[_distressed_].val[_sad_] = -0.60;
  reward_DB[_distressed_].val[_confused_] = -0.35;
  reward_DB[_distressed_].val[_shy_] = 0.05;
  reward_DB[_distressed_].val[_calm_] = 0.20;      // Enhanced recovery
  reward_DB[_distressed_].val[_curious_] = 0.35;   // Enhanced recovery
  reward_DB[_distressed_].val[_affectionate_] = 0.45;
  reward_DB[_distressed_].val[_surprised_] = 0.55;
  reward_DB[_distressed_].val[_excited_] = 0.60;
  reward_DB[_distressed_].val[_happy_] = 0.65;
  reward_DB[_distressed_].val[_playful_] = 0.75;
  reward_DB[_distressed_].val[_superhappy_] = 0.85;
  break;
  
default:
  break;
} }

//////// Agreed range: -1.0 to +0.95 (_superhappy_ capped at 0.95)

