# 🧪 Chemistry Element Quiz (Group D Edition)

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus)
![Topic](https://img.shields.io/badge/Topic-Chemistry-FF69B4?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Wael-orange?style=for-the-badge)

An interactive terminal-based guessing game where players identify chemical elements from the **Transition Metals (Group D)** using logical hints.

---

## 🎮 Game Rules
* The system selects a random element from a curated list (Fe, Cu, Au, Ag, Hg, Pt, Ti, Cr, Mo, V).
* You have a maximum of **5 progressive hints** per element.
* Hints range from atomic numbers and electron configurations to real-world applications.
* After each hint, you can choose to guess or move to the next hint.
* **Win Condition:** Correctly guess the element before running out of hints!

---

## ✨ Features
* **Randomized Gameplay:** Every session starts with a different element using `srand(time(0))`.
* **Color-Coded Feedback:** Uses ANSI escape sequences to provide a vibrant and clear terminal experience.
* **Educational Content:** Includes detailed scientific data like:
  - Atomic numbers.
  - Electron configurations (e.g., $4s^2 3d^6$).
  - Common oxidation states.
  - Biological and industrial uses.

---

## 🛠️ Technical Details
* **Language:** C++
* **Key Libraries:** `<bits/stdc++.h>`, `<vector>`, `<ctime>`.
* **Logic:** Implemented using a robust `switch-case` and `if-else` structure for hint management and validation.

---

## 📂 Architecture Overview
The game logic is structured to provide an educational yet challenging experience:
1. **Element Selection:** Randomly fetches an element from a pre-defined vector.
2. **Hint System:** A tiered switch-case structure that delivers increasingly specific information.
3. **Validation Engine:** Checks player input against the selected element and manages the hint counter.

---

## 👤 Author
**Wael**
* GitHub: [@waelalsharea](https://github.com/waelalsharea)

---
*If you find this project helpful, please consider giving it a ⭐!*
