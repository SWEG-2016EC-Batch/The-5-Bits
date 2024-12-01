2.Write a program that prompts the capacity in gallons of an automobile  fuel tank and the miles per gallons that an automobile can be driven.The 
program outputs the number of miles the automobile can be without refuling.

## **SOLUTION**

### **Problem analsis**

Input   => capacity of fuel tank in gallon (cap_fuel), the miles per one gallon an automobile can be driven (mile_perGallon)

Output  => the miles the automobile can driven be (num_miles)

Process => num_miles = cap_fuel * mile_perGallon  

### **Pseudocode**

Step 1: start

Step 2: declare capacity of fuel tank in gallon as cap_fuel,the miles per one gallon an automobile can be driven as mile_perGallon and 
                    the miles the automobile can driven as num_miles. 
                    
Step 3: read cap_fuel in gallon  

- 3.1: if cap_fuel <= 0 or any other inappropriate input go to Step 4 
 
- 3.2: else go to Step 5
  
Step 4: print "Invalid input"
 
Step 5: read mile_perGallon 
 
- 5.1: if mile_perGallon <= 0 or any other in approapriate input go to Step 4 
  
- 5.2: else go to Step 6

Step 6: calculate num_miles as num_miles = cap_fuel * mile_perGallon 

Step 7: print num_miles 

Step 8: stop

### **FLOW CHART**

[![](https://mermaid.ink/img/pako:eNp1kl1LwzAUhv_KIVebdOy-oOJWNrahiHqjbRmH5nQL5KOkiSLr_rtpu0_F3CQ573POe_KxY4XhxGJWSvNVbNE6eEsyDWE8DNLahUA-hNHoDiZpQoVES1BgtS49yQiUkLSuyM5RSqMj0F6t21gNeV9j0qVO0_ELIT8ljg_qtFOT3aI-SSD0J0rBw1x5B_f7nkxasnmnuoHVRQSaJ9PA7FD-upujyawD563JNfCP1fyPVR9pnRbp-YS3555vflU-OC8652U6frZCu_PlHDtbdvpqkJLm-ZBFTJFVKHh4jV1LZMxtSVHG4rDkVKKXLmOZ3gcUvTOv37pgsbOeImaN32xZXKKsw85XHB0lAjcW1RGpUH8Yo04QceGMfeyfv_sF-x--xqjk?type=png)](https://mermaid.live/edit#pako:eNp1kl1LwzAUhv_KIVebdOy-oOJWNrahiHqjbRmH5nQL5KOkiSLr_rtpu0_F3CQ573POe_KxY4XhxGJWSvNVbNE6eEsyDWE8DNLahUA-hNHoDiZpQoVES1BgtS49yQiUkLSuyM5RSqMj0F6t21gNeV9j0qVO0_ELIT8ljg_qtFOT3aI-SSD0J0rBw1x5B_f7nkxasnmnuoHVRQSaJ9PA7FD-upujyawD563JNfCP1fyPVR9pnRbp-YS3555vflU-OC8652U6frZCu_PlHDtbdvpqkJLm-ZBFTJFVKHh4jV1LZMxtSVHG4rDkVKKXLmOZ3gcUvTOv37pgsbOeImaN32xZXKKsw85XHB0lAjcW1RGpUH8Yo04QceGMfeyfv_sF-x--xqjk)
