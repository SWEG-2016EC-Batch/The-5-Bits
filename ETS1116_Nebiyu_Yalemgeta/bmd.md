```mermaid
graph TD
    A[Start] --> B[Input height and weight]
    B --> C[Calculate BMI = weight / (height * height)]
    C --> D{BMI < 18.5?}
    D -->|Yes| E[Print "Underweight"]
    D -->|No| F{BMI < 24.9?}
    F -->|Yes| G[Print "Normal weight"]
    F -->|No| H[Print "Overweight"]
    E --> I[End]
    G --> I
    H --> I

