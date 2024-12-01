> **Problem Description**: A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
> it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may take days.

**Problem Analysis**:  
*Input*: file_size in bytes (int)  
*Output*: sending_time in days,hours,minutes,seconds (int)  
*Process*:
- input file_size
- calculate sending_time_seconds as file_size/960
- calculate sending_time_days as sending_time_seconds/86400 rounded down to the nearest integer
- calculate sending_time_seconds as sending_time_seconds % 86400
- calculate sending_time_hours as sending_time_seconds/3600 rounded down to the nearest integer
- calculate sending_time_seconds as sending_time_seconds % 3600
- calculate sending_time_minutes as sending_time_seconds/60 rounded down to the nearest integer
- calculate sending_time_seconds as sending_time_seconds % 60
- print sending_time_days, sending_time_hours, sending_time_minutes, and sending_time_seconds

**Flowchart**:

```mermaid
flowchart TD
    start([start]) --> input[/input file_size/]
    input --> process[sending_time_seconds = file_size/960]
    process --> process1[sending_time_days = sending_time_seconds/86400 rounded down to the nearest integer]
    process1 --> process2[sending_time_seconds = sending_time_seconds % 86400]
    process2 --> process3[sending_time_hours = sending_time_seconds/3600 rounded down to the nearest integer]
    process3 --> process4[sending_time_seconds = sending_time_seconds % 3600]
    process4 --> process5[sending_time_minutes = sending_time_seconds/60 rounded down to the nearest integer]
    process5 --> process6[sending_time_seconds = sending_time_seconds % 60]
    process6 --> print[/print sending_time_days, sending_time_hours, sending_time_minutes, and sending_time_seconds/]
    print --> stop([stop])
```

**Pseudocode**:  
1. START
2. READ file_size
3. CALCULATE sending_time_seconds as file_size/960
4. CALCULATE sending_time_days as sending_time_seconds/86400 rounded down to the nearest integer
5. CALCULATE sending_time_seconds as sending_time_seconds % 86400
6. CALCULATE sending_time_hours as sending_time_seconds/3600 rounded down to the nearest integer
7. CALCULATE sending_time_seconds as sending_time_seconds % 3600
8. CALCULATE sending_time_minutes as sending_time_seconds/60 rounded down to the nearest integer
9. CALCULATE sending_time_seconds as sending_time_seconds % 60
10. PRINT sending_time_days, sending_time_hours, sending_time_minutes, and sending_time_seconds
11. STOP