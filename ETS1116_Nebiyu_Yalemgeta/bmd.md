```mermaid
graph TD;
    A[Start] --> B{Do I want something healthy?};
    B -->|Yes| C[Pick a healthy meal];
    B -->|No| D[Pick something tasty];
    C --> E[End];
    D --> E[End];
