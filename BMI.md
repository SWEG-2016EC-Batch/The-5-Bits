1.Make a program that calculates the body mass index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight.
BMI is calculated as (BMI = weight/(height*height)).Make the program to work for multiple person before terminated.  
***SOLUTION*** 

***Problem analysis***

          Input => weihgt in kilogram(kg), height in meter(m).
          
	       Output  => Body Mass Index (BMI)in kg/m^2. 
        
	       Process => BMI = weight / (height * height).
***Psuedocode***

>Step 1: start

>Step 2: read weight in kg
              
   >>2.1: if weight is less than 0 go to Step 2
                   
   >>2.2: else go to step 3

>Step 3: read height in m	
             
   >>3.1: if height less than or equal to 0 go to Step 3
            
   >>3.2: else go to Step 4
            
>Step 4: calculate BMI as BMI = weight / (height * height)	

>Step 5: print BMI
              
   >>5.1: if BMI is less than 18.5 go to Step 6
                    
   >>5.2: if BMI is greater than or equal to 25 go to step 7 
                    
   >>5.3: else go to Step 8
                    
>Step 6: print " under weight "
              
>Step 7: print " over weight "
              
>Step 8: print " normal weight " 

>Step 9: stop
