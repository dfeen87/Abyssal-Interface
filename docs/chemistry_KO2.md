# The Metabolic Engine: Potassium Superoxide (KO₂) Stoichiometry

## 1. Overview
The Abyssal Interface relies on a solid-state demand-driven chemical loop utilizing Potassium Superoxide (KO₂). This single-cartridge system serves as both the oxygen (O₂) generator and the carbon dioxide (CO₂) scrubber. The reaction rate is strictly governed by the diver's metabolic output (respiratory rate).

## 2. Chemical Mechanisms

### 2.1 Oxygen Generation Phase
As the diver exhales into the breathing loop, moisture (water vapor, H₂O) in the exhaled breath passes through the KO₂ chemical bed. This initiates the primary exothermic reaction, generating oxygen and producing potassium hydroxide (KOH):

$$ 4\text{KO}_2 + 2\text{H}_2\text{O} \rightarrow 4\text{KOH} + 3\text{O}_2 + \Delta H $$

*   **Yield:** For every 4 moles of KO₂ reacted, 3 moles of breathable O₂ are produced.
*   **Trigger:** The reaction is strictly demand-driven; the higher the physical exertion, the more moisture is exhaled, increasing the O₂ generation rate.

### 2.2 Carbon Dioxide Scrubbing Phase
The secondary reaction utilizes the potassium hydroxide (KOH) generated in the first phase. The KOH immediately acts as a highly efficient scrubber for the exhaled carbon dioxide (CO₂):

$$ 2\text{KOH} + \text{CO}_2 \rightarrow \text{K}_2\text{CO}_3 + \text{H}_2\text{O} + \Delta H $$

*   **Sequestration:** CO₂ is safely bound as solid potassium carbonate (K₂CO₃).
*   **Water Recycling:** This scrubbing phase releases water, which feeds back into the primary oxygen generation phase, sustaining the loop.

### 2.3 Net Metabolic Loop
The overall stoichiometric balance of the solid-state rebreather system is:

$$ 4\text{KO}_2 + 2\text{CO}_2 \rightarrow 2\text{K}_2\text{CO}_3 + 3\text{O}_2 $$

## 3. Exothermic Heat Management
Both the primary O₂ generation and the secondary CO₂ scrubbing reactions are highly exothermic. The generated heat ($\Delta H$) must be carefully managed to prevent the internal breathing gas and the chemical bed from reaching dangerous temperatures.

*   **Optimal Temperature:** ~22°C (baseline operation)
*   **Maximum Safe Temperature:** 45°C (thermal threshold before performance degrades and breathing gas becomes hazardous).
*   **Thermal Routing:** The excess heat is routed out of the primary breathing loop via a dedicated thermal wicking capillary system (see `hardware/fluid_dynamics.md`). This heat serves a secondary purpose: it warms the zwitterionic hydrogel matrix within the helmet's shell, increasing its structural stiffness and reactivity to the oceanic salinity.
