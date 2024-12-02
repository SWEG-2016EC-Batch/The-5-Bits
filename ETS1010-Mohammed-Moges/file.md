5.A serial transmission line can transmit 960 characters in a second. Write a program that will calculate how long it will take to send a file, given the file size. Test your program with 400MB (419,430,400 bytes) file which may take days.

## ***SOLUTION***

### **Problem analysis**

**Input** = size

**Output** = total second

**process** = total second = size * 960


### **Pseudocode**

Step 1: start

Step 2: read size of the file

- 2.1: If the size < 0 or invalid input go to Step 3

- 2.2: else go to Step 4

Step 3: Print "invalid input!" and exit

Step 4: calculate total second as = size *960

Step 5: Change total in to days, hours, minutes and seconds as follows

- total seconds = size /960
		
- days =  total seconds /(24*3600)
		
- hours =  (total seconds %(24*3600))/3600
		
- minutes = ((total seconds %(24*3600))%3600)/60
		
- seconds = ((total seconds %(24*3600))%3600)%60

Step 6: print days, hours, minutes and seconds

Step 7:end

### **FLOW CHART**
' ' ' mermaid
flowchart TD
    A([start]) --> B[/Read size/]
    B --> C{Is size < 0 or invalid input ?}
    C --> |YES| D[/Invalid input!/]
    D --> G
    C -->|No| E[total seconds = size / 960]
    E --> K[change the total second in to days , hours, minutes and seconds]
    K --> F[/days, hours, minutes and seconds/]
    F --> G([end])
