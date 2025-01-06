```mermaid
flowchart TD
    start([Start]) --> title[/Display Game Title/]
    title --> menuOptions[/Display Menu Options/]
    
    menuOptions --> checkOption1{Option == 1?}
    checkOption1 -->|Yes| playGame[Play the Game]
    checkOption1 -->|No| checkOption2{Option == 2?}
    
    checkOption2 -->|Yes| viewHistory[/View History/]
    checkOption2 -->|No| checkOption3{Option == 3?}
    
    checkOption3 -->|Yes| howToPlay[/Read How to Play/]
    checkOption3 -->|No| checkOption4{Option == 0?}
    
    checkOption4 -->|Yes| finish([End])
    checkOption4 -->|No| invalidOption[Go Back to Menu]
    
    howToPlay --> backToMenu1[Go Back to Menu]
    backToMenu1 --> menuOptions
    
    viewHistory --> backToMenu2[Go Back to Menu]
    backToMenu2 --> menuOptions
    
    playGame --> rollDice[Generate Random Numbers and Roll Dice]
    rollDice --> checkSum1{Sum == 7 or 11?}
    checkSum1 -->|Yes| win1[/You Win!/] --> incrementWon[Increment Won]
    checkSum1 -->|No| checkSum2{Sum == 2, 3, or 12?}
    
    checkSum2 -->|Yes| lose1[/You Lose!/] --> incrementLost[Increment Lost]
    checkSum2 -->|No| setPoint[Set Point]
    
    setPoint --> rollAgain[Roll Dice Again]
    rollAgain --> checkPoint{Sum == Point or 7?}
    
    checkPoint -->|Point| win2[/You Made Your Point, You Win!/] --> incrementWon2[Increment Won]
    checkPoint -->|7| lose2[/You Rolled a 7, You Lose!/] --> incrementLost2[Increment Lost]
    
    incrementWon --> backToMenu3[Go Back to Menu]
    incrementLost --> backToMenu4[Go Back to Menu]
    incrementWon2 --> backToMenu5[Go Back to Menu]
    incrementLost2 --> backToMenu5
    backToMenu3 --> menuOptions
    backToMenu4 --> menuOptions
    backToMenu5 --> menuOptions
    
    invalidOption --> menuOptions
```

