/////// THIS IS FAR ACCURATE /////

#include "VADCoreESP32.h"
// Define your I2S pin configuration
#define I2S_PORT I2S_NUM_0
#define I2S_WS 16
#define I2S_SD 7
#define I2S_SCK 15

VADCoreESP32 vad;
    
void setup() {
    Serial.begin(115200);
    vad.i2sInit(I2S_PORT,I2S_SCK, I2S_WS, I2S_SD);
    vad.setCore(0); // Uncomment if your board has 2 cores
    vad.setPriority(1); // Uncomment if your board has 2 cores
    vad.start(); // Start VAD task
}
void loop() {
  delay(6000);
    
}