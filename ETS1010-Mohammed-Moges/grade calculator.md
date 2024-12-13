## **Problem description**

Write a program that read the various assessments, compute the total mark and print the corresponding letter-grade based on the following scales.

**Assessments**

➢ Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%


##**poblem analysis**

**Input** = mark of test,quiz,project, assignment and final

**Output** = total mark out of 100 and grade;

**Process** =
> total mark = mark of quiz + mark of test + mark of project + mark of assignment + mark of final test

> assign grade

## ***FLOW CHART***

``` mermaid
flowchart TD
    A([start]) --> B[/Read mark of test /]
    B --> C{Is 0 <= mark of test <= 15 ?}
    C-->|YES| D[/Read mark of quiz/]
    C -->|NO| E[/print "Invalid input!"/]
    D --> F{Is 0 <= mark of quiz <= 5 ?}
    F -->|YES| G[/Read mark of project/]
    F -->|NO| E
    G --> H{Is 0 <= mark of project <= 20 ?}
    H -->|YES| I[/Read mark of assignment/]
    H -->|NO| E
    I --> J{Is 0 <= mark of assignment <= 10 ?}
    J -->|YES| K[/Read mark of final test/]
    J -->|NO| E
    K --> L{Is 0 <= mark of final test <= 50 ?}
    L -->|YES| M[total mark = mark of test + mark of quiz + mark of project + mark of assignment + mark of final test]
    L -->|NO| E
    E --> d
    M --> m[/print total mark/]
    m -->N{Is total mark >= 90 ?}
    N -->|YES| O[grade = A+ ]
    O --> c
    N -->|NO| P{Is total mark >= 80 ?}
    P -->|YES| Q[grade A]
    Q --> c
    P -->|NO| R{Is total mark >= 75 ?}
    R -->|YES| S[grade = B+]
    S --> c
    R -->|NO| T{Is total mark >= 60 ?}
    T -->|YES| U[garde = B]
    U --> c
    T -->|NO| V{Is total mark >= 55 ?}
    V -->|YES| W[grade = C+]
    W --> c
    V -->|NO| X{Is total mark >= 45 ?}
    X -->|YES| Y[grade = C]
    Y --> c
    X -->|NO| Z{Is total mark >= 30 ?}
    Z -->|YES| a[grade = D]
    a --> c
    Z -->|NO| b[grade = F]
    b --> c[/print grade/]
    c --> d([End])



```
                
