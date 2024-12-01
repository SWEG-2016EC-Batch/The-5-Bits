
1.Make a program that calculates the body mass index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight.
BMI is calculated as (BMI = weight/(height*height)).Make the program to work for multiple person before terminated.

## ***SOLUTION***

### *Problem analysis*

 **Input**   => weihgt in kilogram(kg), height in meter(m).
 
 **Output**  => Body Mass Index (BMI)in kg/m^2. 
 
 **Process** => BMI = weight / (height * height).
 

### *Psuedocode*
Step 1: start

Step 2: read weight in kg
          
- 2.1: if weight is less than or equal to 0, or other inapproapriate input go to Step 3
               
- 2.2: else go to step 4
        
Step 3: print "invalid input"

Step 4: read height in m		
         
- 4.1: if height less than or equal to 0, or other inapproapriate input go to Step 3
              
- 4.2: else go to Step 5
              
Step 5: calculate BMI as BMI = weight / (height * height)	
         
Step 6: print BMI
          
- 6.1: if BMI is less than 18.5 and greater than 0 go to Step 7 and break
                
- 6.2: if BMI is greater than or equal to 25 go to step 8 and break
                
- 6.3: else go to Step 9
                
Step 7: print " under weight "
          
Step 8: print " over weight "	
          
Step 9: print " normal weight " 
         
Step 10: stop
### *FLOW CHART*
[![](https://mermaid.ink/img/pako:eNp9k1tvgjAYhv9K0ytNdDqTJYtRlyGoqKDZ4WIDljS2SjOgphTNov73tZRTsmRcFPr16fs9EHqBO4YJHMJ9xM67EHEB3kw_AfJ6bnmpkIWgDbrdCTC83gtBGJwJPYQC0AR8H3qBRo2cmF5oWi-fUESxvB8z8XTT2FRh1w-SXoGpWMEpigDbl5smoA9K1qxZo1lx2RW4zThVsAq3sHKLSzUrV5upduE_arO63fxiN9TCv2rzmrWaFXdTqc0qta1nODYYl6_Y03lfg0Jvm-stvB7YcpoIIOHSfJEv2cqmD0ZqRY73j3cPlYhdiyyrhPcEE160K6PsSmel4vKQ0biIHNSBqzpw7RV5LuOx_BQ6MGhyKs_xNLU5VU0LZp3ruy3PSnDQ1rWlrumJ05zUI-zAmMiWFMu_8qIqPhQhiYkPh_IRkz3KIuFDP7lJFGWCvf4kOzgUPCMdyFl2COFwj6JUzrIjRoKYFB04ikvkiJJPxuIKIpgKxh19DPLTcPsFzSbrLg?type=png)](https://mermaid.live/edit#pako:eNp9k1tvgjAYhv9K0ytNdDqTJYtRlyGoqKDZ4WIDljS2SjOgphTNov73tZRTsmRcFPr16fs9EHqBO4YJHMJ9xM67EHEB3kw_AfJ6bnmpkIWgDbrdCTC83gtBGJwJPYQC0AR8H3qBRo2cmF5oWi-fUESxvB8z8XTT2FRh1w-SXoGpWMEpigDbl5smoA9K1qxZo1lx2RW4zThVsAq3sHKLSzUrV5upduE_arO63fxiN9TCv2rzmrWaFXdTqc0qta1nODYYl6_Y03lfg0Jvm-stvB7YcpoIIOHSfJEv2cqmD0ZqRY73j3cPlYhdiyyrhPcEE160K6PsSmel4vKQ0biIHNSBqzpw7RV5LuOx_BQ6MGhyKs_xNLU5VU0LZp3ruy3PSnDQ1rWlrumJ05zUI-zAmMiWFMu_8qIqPhQhiYkPh_IRkz3KIuFDP7lJFGWCvf4kOzgUPCMdyFl2COFwj6JUzrIjRoKYFB04ikvkiJJPxuIKIpgKxh19DPLTcPsFzSbrLg)

