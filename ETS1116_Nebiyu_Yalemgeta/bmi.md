**Problem Description**:  
The program calculates the Body Mass Index (BMI) of a person based on their weight, height, age, and gender. The BMI is calculated using the formula:  
`BMI = weight / (height * height)`  
The program determines if the person is underweight, normal weight, or overweight based on their BMI. It also adjusts the BMI categories based on the person's age and gender. The program works for multiple persons and continues until the user decides to stop.

**Problem Analysis**:  

*Input*:  
- weight in kilograms (float)
- height in meters (float)
- age (integer)
- gender ('M' or 'F' as a character)

*Output*:  
- Body Mass Index/BMI (float)
- BMI category (underweight, normal weight, overweight) based on age and gender

*Process*:
1. The user is prompted to input their weight, height, age, and gender.
2. If any input is invalid (e.g., negative values or incorrect gender), the program will ask for a valid input until it receives one.
3. The BMI is calculated using the formula: `BMI = weight / (height * height)`.
4. The program then classifies the BMI into one of three categories:
   - Underweight: BMI < 18.5
   - Normal weight: BMI between 18.5 and 25 (inclusive)
   - Overweight: BMI > 25
5. Age and gender influence the BMI categories:
   - For males and females under 20 years, different BMI thresholds are applied.
   - For males and females between 20-40 years, different thresholds are used.
   - For males and females above 40 years, a slightly higher BMI is considered normal.
6. The program then asks if the user wants to calculate for another person. If they answer 'Y' or 'y', the program repeats; otherwise, it terminates.

```mermaid
flowchart TD
    start([start]) --> input_weight[/"Enter weight (kg)"/]
    input_weight --> validate_weight{"Is weight > 0?"}
    validate_weight -- no --> invalid_weight[/"Invalid input. Please enter a valid weight"/]
    validate_weight -- yes --> input_height[/"Enter height (m)"/]
    invalid_weight --> input_weight
    input_height --> validate_height{"Is height > 0?"}
    validate_height -- no --> invalid_height[/"Invalid input. Please enter a valid height"/]
    validate_height -- yes --> input_age[/"Enter age"/]
    invalid_height --> input_height
    input_age --> validate_age{"Is age > 0?"}
    validate_age -- no --> invalid_age[/"Invalid input. Please enter a valid age"/]
    validate_age -- yes --> input_gender[/"Enter gender (M/F)"/]
    invalid_age --> input_age
    input_gender --> validate_gender{"Is gender M/F?"}
    validate_gender -- no --> invalid_gender[/"Invalid input. Please enter 'M' or 'F'"/]
    validate_gender -- yes --> process_bmi[/"BMI = weight / (height * height)"/]
    invalid_gender --> input_gender
    process_bmi --> print_bmi[/"Print BMI"/]
    print_bmi --> check_bmi{"Is gender M/F?"}
    check_bmi -- M --> male_age_check
    check_bmi -- F --> female_age_check

    male_age_check --> check_age_male{"Is age < 20?"}
    check_age_male -- yes --> bmi_underweight_male[/"BMI < 18.5, Underweight"/]
    check_age_male -- no --> check_age_male_2{"Is age <= 40?"}
    check_age_male_2 -- yes --> bmi_normal_male[/"BMI < 25, Normal weight"/]
    check_age_male_2 -- no --> bmi_overweight_male[/"BMI >= 25, Overweight"/]
    bmi_underweight_male & bmi_normal_male & bmi_overweight_male --> ask_continue_male

    female_age_check --> check_age_female{"Is age < 20?"}
    check_age_female -- yes --> bmi_underweight_female[/"BMI < 18.5, Underweight"/]
    check_age_female -- no --> check_age_female_2{"Is age <= 40?"}
    check_age_female_2 -- yes --> bmi_normal_female[/"BMI < 24, Normal weight"/]
    check_age_female_2 -- no --> bmi_overweight_female[/"BMI >= 24, Overweight"/]
    bmi_underweight_female & bmi_normal_female & bmi_overweight_female --> ask_continue_female

    ask_continue_male --> ask_continue{"Do you want to continue?"}
    ask_continue_female --> ask_continue
    ask_continue -- yes --> input_weight
    ask_continue -- no --> stop([stop])
```
**Pseudocode**:

1. START
2. REPEAT
   1. READ the user's weight (kg)
   2. WHILE weight <= 0, prompt for a valid weight
   3. READ the user's height (m)
   4. WHILE height <= 0, prompt for a valid height
   5. READ the user's age
   6. WHILE age <= 0, prompt for a valid age
   7. READ the user's gender (M/F)
   8. WHILE gender is not 'M' or 'F', prompt for a valid gender
   9. CALCULATE BMI: BMI = weight / (height * height)
   10. PRINT the BMI
   11. IF gender is 'M' or 'm' THEN
       1. IF age < 20 THEN
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 24.9 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
       2. ELSE IF age <= 40 THEN
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 25 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
       3. ELSE
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 26 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
   12. ELSE IF gender is 'F' or 'f' THEN
       1. IF age < 20 THEN
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 23.5 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
       2. ELSE IF age <= 40 THEN
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 24 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
       3. ELSE
           1. IF BMI < 18.5 THEN PRINT "Underweight"
           2. ELSE IF BMI < 25 THEN PRINT "Normal weight"
           3. ELSE PRINT "Overweight"
   13. ASK user if they want to calculate for another person (Y/N)
   14. IF user enters 'Y' or 'y', repeat from step 1
   15. IF user enters 'N' or 'n', STOP
3. END
