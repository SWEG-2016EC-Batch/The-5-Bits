3.Write a code program that find the result of x^y .Where the value of x and y are entered by the user.

## ***SOLUTION***

### **Problem analysis**

**Input** = base,exponent 

**Output** = the result of base raise exponent 

**Process** = base^exponent

### **Psuedocode**

Step 1: start

Step 2: declare and initialize  result = 1

Step 3: read base 

Step 4: read exponent

- 4.1 if both base and exponent are 0 go to Step 5
  
- 4.2 if the base is negative and the exponent is fraction go to Step 6
- 4.3 if either base or exponent are inapproapriate input go to Step 7
- 4.4 else go to Step 8
  
Step 5:print "undefined!" and exit

Step 6:Print "It's an imaginary number and it doesn't work under real number" and exit

Step 7: Print "Error" andd exit

Step 8:execute result =  pow(base,exponent)
  
Step 9:print result 

Step 10:stop 

### **FLOW CHART**

[![](https://mermaid.ink/img/pako:eNplkt9v0zAQx_-Vwy_bpE2B10qAtqVbuwEPMB7AKdI1vrQWybm6OBul7f-OYzehiDzF1uf7Q3feqdIZUhNV1e6lXKN4eMoLhvBdn-vWh4vFBVxdvYMbnVNZoxAgG7BsvcXa_iYQarvaw1t4s0jCm8jf6uwzoYEltklCvzaOiX12xG4jlu-ug-XS-fX_JLyG94cE5z28_0btfqqzr2yoskzm1eA1jV4fTljYf3J7uNvNW_BrSt5MK_T2OYX0t2NQJVh663jMu0sefSDc62zuz9qgAtvgyjLKFrhrliRpFh6Mo5bPPLw4-QldqCdhLFgfqaHl_WnLmBBLzvqSZEMhAVf9revk35LhHOdk-TlMvt_BpvNj41n02_aF5zqbirgxd36aOxtzH_S4uj7vxxB0VD1E1aPOEjWYPSazc01sFhfqUjUkDVoT3tCuJwoVSjdUqEn4DXvCoC1UwYeAYufdly2XauKlo0slrlut1aTCug2nbmPQU25xJdgMyAb5u3PNCJGx3snH9Gjj2z38AT7r4Zs?type=png)](https://mermaid.live/edit#pako:eNplkt9v0zAQx_-Vwy_bpE2B10qAtqVbuwEPMB7AKdI1vrQWybm6OBul7f-OYzehiDzF1uf7Q3feqdIZUhNV1e6lXKN4eMoLhvBdn-vWh4vFBVxdvYMbnVNZoxAgG7BsvcXa_iYQarvaw1t4s0jCm8jf6uwzoYEltklCvzaOiX12xG4jlu-ug-XS-fX_JLyG94cE5z28_0btfqqzr2yoskzm1eA1jV4fTljYf3J7uNvNW_BrSt5MK_T2OYX0t2NQJVh663jMu0sefSDc62zuz9qgAtvgyjLKFrhrliRpFh6Mo5bPPLw4-QldqCdhLFgfqaHl_WnLmBBLzvqSZEMhAVf9revk35LhHOdk-TlMvt_BpvNj41n02_aF5zqbirgxd36aOxtzH_S4uj7vxxB0VD1E1aPOEjWYPSazc01sFhfqUjUkDVoT3tCuJwoVSjdUqEn4DXvCoC1UwYeAYufdly2XauKlo0slrlut1aTCug2nbmPQU25xJdgMyAb5u3PNCJGx3snH9Gjj2z38AT7r4Zs)
