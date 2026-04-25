# Materials Specification: Rigid Shell and Polymer Matrix

## 1. Overview
The structural integrity of the Abyssal Interface relies on the precise material specifications of two interacting components: the rigid inner polycarbonate shell and the encapsulated zwitterionic hydrogel matrix. This document outlines the physical tolerances and synthesis parameters required to achieve dynamic osmotic armor.

## 2. Rigid Inner Shell: Polycarbonate Specifications
The inner shell serves as the primary barrier between the diver and the high-pressure hydrogel matrix. It must be strong enough to withstand the generated internal hydraulic pressure ($P_{\text{int}}$) but thin enough to maintain the project's lightweight mandate.

### 2.1 Material Selection
*   **Base Material:** High-Impact Polycarbonate (PC)
*   **Grade:** Optical or Aerospace grade (to minimize micro-fracture propagation points).
*   **Thermal Tolerance:** Must maintain structural integrity up to 60°C to accommodate thermal routing from the KO₂ metabolic engine.

### 2.2 Structural Limits
*   **Thickness:** 4.5 mm to 6.0 mm (varies based on the topographic stress distribution of the helmet geometry).
*   **Yield Strength:** $\ge 60 \text{ MPa}$
*   **Tensile Modulus:** $\ge 2.3 \text{ GPa}$
*   **Max Allowable Differential Pressure:** The polycarbonate shell is designed to withstand the *differential* between $P_{\text{int}}$ (the swelling hydrogel) and the internal breathing loop pressure ($1 \text{ atm}$). The external hydrostatic pressure ($P_{\text{ext}}$) is neutralized by the hydrogel, meaning the primary stress on the shell is expansionary, not compressive.

### 2.3 Manufacturing Tolerances
*   **Injection Molding:** Requires precision injection molding with multi-point stress annealing to eliminate internal manufacturing stresses.

## 3. Zwitterionic Polymer Matrix Specifications
The active component of the osmotic armor is the zwitterionic hydrogel. Its ability to swell aggressively in saline environments and generate the necessary counter-pressure depends heavily on its molecular architecture.

### 3.1 Monomer Selection
*   **Primary Monomer:** Poly(sulfobetaine methacrylate) (pSBMA) or Poly(carboxybetaine methacrylate) (pCBMA). These exhibit a strong anti-polyelectrolyte effect in $\text{NaCl}$-rich environments (seawater).

### 3.2 Cross-Linking Density ($\nu_e$)
The cross-linking density is the critical variable. If it is too low, the hydrogel will turn into a viscous fluid under pressure and fail to exert force. If it is too high, the polymer network will be too rigid to swell sufficiently and match the external hydrostatic pressure.

*   **Target Cross-Linker:** N,N'-Methylenebisacrylamide (MBAA).
*   **Optimal Cross-Linking Ratio:** $1.5 \text{ mol}\%$ to $2.5 \text{ mol}\%$ relative to the primary monomer.
*   **Elastic Modulus Target:** The resulting hydrogel must achieve an elastic modulus capable of translating swelling force into at least $6 \times 10^5 \text{ Pa}$ ($\approx 6 \text{ atm}$) of hydraulic pressure when confined.

### 3.3 Encapsulation Protocol
*   **Pre-Polymerization Placement:** The monomer/cross-linker solution is injected into the cavity between the inner polycarbonate shell and the outer semi-permeable membrane.
*   **In-Situ Polymerization:** UV or thermal initiation is used to polymerize the matrix *in situ*, ensuring perfect geometric conformity to the helmet shell without voids.
