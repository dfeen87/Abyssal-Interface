/**
 * Abyssal Interface - HUD Telemetry Monitor
 * Architect: Don M. Feeney Jr.
 * License: MIT
 * * Description: Diagnostic state machine to monitor the KO2 exothermic 
 * reaction temperatures and osmotic hydrogel depth pressure ratings.
 */

#include <iostream>
#include <string>

// --- Safety Thresholds ---
const float MAX_SAFE_TEMP_C = 45.0;     // Max allowable internal shell temp
const float OPTIMAL_TEMP_C = 22.0;      // Baseline KO2 operating temp
const float MAX_DEPTH_METERS = 50.0;    // Structural limit of osmotic armor
const float WARNING_DEPTH_METERS = 40.0; 

class AbyssalHUD {
private:
    float currentTemp;
    float currentDepth;
    bool systemCritical;

public:
    AbyssalHUD() : currentTemp(OPTIMAL_TEMP_C), currentDepth(0.0), systemCritical(false) {}

    // Simulating sensor data ingestion
    void updateTelemetry(float temp, float depth) {
        currentTemp = temp;
        currentDepth = depth;
        analyzeState();
    }

    void analyzeState() {
        std::cout << "\n--- Abyssal Interface Telemetry ---" << std::endl;
        std::cout << "Depth: " << currentDepth << "m | KO2 Core Temp: " << currentTemp << "°C" << std::endl;

        // Thermal Logic Loop
        if (currentTemp > MAX_SAFE_TEMP_C) {
            std::cout << "[CRITICAL] KO2 Exothermic Overload. Venting required." << std::endl;
            systemCritical = true;
        } else if (currentTemp > (MAX_SAFE_TEMP_C * 0.8)) {
            std::cout << "[WARNING] Elevated Thermal Output. Monitor respiratory rate." << std::endl;
        } else {
            std::cout << "[OK] Thermal regulation stable." << std::endl;
        }

        // Osmotic Armor / Depth Logic Loop
        if (currentDepth > MAX_DEPTH_METERS) {
            std::cout << "[CRITICAL] Osmotic Hydrogel saturated. Structural failure imminent. ASCEND." << std::endl;
            systemCritical = true;
        } else if (currentDepth > WARNING_DEPTH_METERS) {
            std::cout << "[WARNING] Approaching maximum hydraulic counter-pressure limits." << std::endl;
        } else {
            std::cout << "[OK] Osmotic armor integrity nominal." << std::endl;
        }
        
        if (systemCritical) {
            triggerHapticAlarm();
        }
    }

private:
    void triggerHapticAlarm() {
        // Logic to trigger physical vibration in the helmet's inner shell
        std::cout << ">> ACTIVATING HAPTIC FEEDBACK ALARM <<" << std::endl;
    }
};

int main() {
    AbyssalHUD helmetMonitor;

    // Simulating a dive sequence
    std::cout << "\nInitiating Abyssal Interface..." << std::endl;
    helmetMonitor.updateTelemetry(22.5, 5.0);   // Shallow, resting
    
    std::cout << "\nDiver exerting effort at depth..." << std::endl;
    helmetMonitor.updateTelemetry(38.0, 42.0);  // High respiration (KO2 heat up), deep water
    
    std::cout << "\nDiver breaching limits..." << std::endl;
    helmetMonitor.updateTelemetry(47.5, 52.0);  // Critical system failure

    return 0;
}
