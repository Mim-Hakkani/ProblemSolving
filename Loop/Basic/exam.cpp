/*

Q6 [15 marks]


Take two natural numbers X and Y. If X * Y = Z, is Z even or odd when X and Y -


(Case 1) both are even: even / odd

(Case 2) both are odd: even / odd

(Case 3) One of them is odd, the other one is even: even / odd




For Case 1 : 

       if both are even 

       let x = 10
           y = 4

           x*y = z

           z = x*y
           z = 10*4 
           z = 40 

           we know that a number or z is even when z%2 = 0

           in this equation , see that  z = 40 is 40%2 = 0 so 
           z is even number always 

           so finally we say that ,

            even * even = even 



Case 2 : 

 if both are odd 

       let x = 3
           y = 5

           x*y = z

           z = x*y
           z = 3*5 
           z = 15

           we know that a number or z is odd when z%2 = 1

           in this equation , see that  z = 15 is 15%2 = 1 so 
           z is odd number always 

          so we say that odd * odd = odd 


Case 3: 
  One of them is odd, the other one is even: even / odd


       let x = 4
           y = 5

           x*y = z

           z = x*y
           z = 4*5 
           z = 40

           we know that a number or z is odd when z%2 = 1 or a number or z is even when z%2 = 0

           in this case we see that 
            
            even * odd  = even  => 5 * 4 = 40 that is even 
            odd * even  = even  => 4 * 5 = 40 that is even

           in this equation , see that  z = 40 is 40%2 = 0 so 
           z is even number always 

final Case 
  
   one is odd and another is odd  that the number is = odd 

   5 * 5 = 25 is odd 
   3 * 7  = 21 is odd 
                  
*/


/* 

Find out all the divisors of 72 and 132 separately. What are the numbers that appear in both of the divisor lists?

 Answer : 

step 1 :  first check the number is prime or composite  if prime  then i has two divisor (1 and this number ) if composite number then i has more than 2 or 2 plus divisor 

step 2 : if number % n = 0 then n is the divisor of this number. (n is the natural number )

 72%2 = 0 divisor is 2   132%2 = 0 divisor is 2 
 72%3 = 0 divisor is 3   132%3 = 0 divisor is 3
 72%4 = 0 divisor is 4   132%4 = 0 divisor is 2 
 .....................   .....................
 72%72 = 0 divisor is 72  132%132 = 0 divisor is 132  

  but in this case there are lot of memory and time and it works slowly  so it is more efficient in step 3

step 3 : 
   
   number is divisible in n = number/2  go to the another step 

   in this case  72 is the main number and n = number(72)/2 =36

   and go to the step 2 ....
    72%2 = 0     132%2 = 0   
    72%3 = 0     132%3 = 0  
    72%4 = 0     132%4 = 0   
    72%6 = 0     132%6 = 0   
    72%8 = 0     132%11 = 0   
    72%9 = 0     132%12 = 0  
    72%12 = 0    132%22 = 0 
    72%18 = 0    132%33 = 0 
    72%18 = 0    132%44 = 0 
    72%24 = 0    132%66 = 0 
    72%36 = 0   

    and 1 and 72 is always divisible 
    and 1 and 132 is always divisible 


step 4 :  See The another solution 

   i) squre root of number
   ii) then floor the number 
   iii) check the reminder from 2 to n where  n = floor(sqrt(number))
   iv)




  72 divisor is  :  1 2 3 4 6 8 9 12 18 24 36 72 

  132 divisor is :1 2 3 4 6 11 12 22 33 44 66 132

*/