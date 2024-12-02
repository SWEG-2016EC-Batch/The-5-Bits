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

[![](https://mermaid.ink/img/pako:eNp9kU1vwjAMhv-KlxNIReU0adU-NChMCG2HscuW9mA1gUZqE5SPTYzy32dS2DgtUpTYfl7bifesMkKyjK0b81XVaD285YUGWo8D7jw5yiGMRvcw4emrRAFOfcu07JFJjEz3CxfdcAtjMBaU_sRGCTq3wcPDoYenEe7eZ6sOcp4uLqGrc8Y8Qk8Xiu7FdDDj3nhswMnKaOHgrq-Xws31-KScReWS0yP0RoKvaV9oqA7ZIHDnIIHaBOsSaJUOXjpAip9Sn7ItY7Y5T4-C__hz4_O-8QGXWpTDQrOEtdK2qAR97v7IFIx6amXBMroKucbQ-IIV-kAoBm9WO12xzNsgE2ZN2NQsW2PjyApbgV7mCjcW21_vFvWHMX-2FMob-9yPM0718AM9uJce?type=png)](https://mermaid.live/edit#pako:eNp9kU1vwjAMhv-KlxNIReU0adU-NChMCG2HscuW9mA1gUZqE5SPTYzy32dS2DgtUpTYfl7bifesMkKyjK0b81XVaD285YUGWo8D7jw5yiGMRvcw4emrRAFOfcu07JFJjEz3CxfdcAtjMBaU_sRGCTq3wcPDoYenEe7eZ6sOcp4uLqGrc8Y8Qk8Xiu7FdDDj3nhswMnKaOHgrq-Xws31-KScReWS0yP0RoKvaV9oqA7ZIHDnIIHaBOsSaJUOXjpAip9Sn7ItY7Y5T4-C__hz4_O-8QGXWpTDQrOEtdK2qAR97v7IFIx6amXBMroKucbQ-IIV-kAoBm9WO12xzNsgE2ZN2NQsW2PjyApbgV7mCjcW21_vFvWHMX-2FMob-9yPM0718AM9uJce)

