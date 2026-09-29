# OOP vs Procedural Programming

## The Paradigm Shift
Procedural programming focuses on **verbs** (functions/actions) and treats data as passive entities that are passed around. Object-Oriented Programming (OOP) focuses on **nouns** (objects) that encapsulate both state (data) and behavior (functions).

## Procedural Programming
- **Focus**: Algorithmic steps to solve a problem.
- **Data Flow**: Global data is openly accessible or passed sequentially through functions.
- **Drawbacks**: As systems scale, managing state becomes complex. A change in a data structure requires updating every function that interacts with it (fragility).
- **Use Case**: Simple scripts, low-level system programming where hardware interaction is linear.

## Object-Oriented Programming
- **Focus**: Modeling the problem domain into interacting entities (Objects).
- **Data Flow**: Data is hidden (encapsulated) within objects. Objects interact by sending messages (calling methods) to each other.
- **Benefits**: Modular architecture, easier maintenance, code reuse, and natural conceptual mapping to real-world domains.
- **Use Case**: Complex enterprise software, GUI applications, simulation systems.

## Key Differences for Exam Prep
| Feature | Procedural | OOP |
| :--- | :--- | :--- |
| **Approach** | Top-Down (Algorithm first) | Bottom-Up (Data entities first) |
| **Data Security** | Weak (Global variables common) | Strong (Encapsulation) |
| **Code Reusability**| Functions only | Inheritance & Composition |
| **Extensibility** | Difficult (Modifying existing code) | Easier (Adding new classes) |

*Why does this matter?* In modern software engineering, requirements change constantly. OOP minimizes the ripple effect of changes by localizing data and the logic that operates on it.
