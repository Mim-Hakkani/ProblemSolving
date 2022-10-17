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

   i)  squre root of number
   ii)  then floor the number 
   iii) check the reminder from 2 to n where  n = floor(sqrt(number))
   iv)  then calculate the divisor 


  72 divisor is  :  1 2 3 4 6 8 9 12 18 24 36 72 

  132 divisor is :1 2 3 4 6 11 12 22 33 44 66 132

*/

/*
Build a sieve of Eratosthenes to determine if 19 is a prime number. Show the state of the table at each step.

answer : we khonw that 19 is the prime number because it is divisible by 19 and 1 .

table :

 step 1 : draw a table from 2 to 19
 step 2:  2 is the number and  delete its Multiple such as 4 6 8 10 12 14 16 18 
 step 3 : same calculation in 3 the  remaining number is 9 15 deleted 

 step 4 : the remaing prime number is : 2,3,5,7,11,13,17,19
 step 5:  by calculating Eratosthenes laws we get 19 is the prime number 

************************************

 prime number ranges from 50 to 100:

 A prime number is a whole number greater than 1 with only two factors – themselves and 1.A prime number cannot be divided by any other positive integers without leaving a remainder, decimal or fraction.

 ranges from 50-100 is :
 
 P =  53, 59, 61, 67, 71, 73, 79, 83, 89, 97  



 ****************************

 binary Number is the number that represents the 0 or 1. it's base is 2 . 

 let p = (1010)2 is the binary number 

 if convert the binary number to Deciamal number then : 

 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8 + 0 + 2 +0  = 10 is the decimal number

Algorithms :

1.Find the largest power of 2 that lies within the given number

2.Subtract that value from the given number

3.Find the largest power of 2 within the remainder found in step 2

4.Repeat until there is no remainder

5.Enter a 1 for each binary place value that was found, and a 0 for the rest


 if convert decimal to binary then : 
  10/2 = 5 - 0
  5/2  = 2 - 1 
  2/2  = 1 - 0 
  1/2  = 0 - 1

  then go to the LSB to MSB  ,, in this case we get (1010)2 

***********************************************************

You and your friends in class might be choosing different values for P. Can anybody choose a P that is an odd number? Explain your answer.

Answer : Yes can anybody choose an odd number . and its probality is 1/2 . because there are two number is even and odd . and the probability odd is 1/2 or 50% .

and another case is odd number :

1. if add two number one is even and another is  odd in that case this number is odd
(ex : 5+2 = 7 , 1+2 = 3) that is the odd number  

2. formula is odd is 2n+1 is always odd 

3. if multiply two odd number that is always odd  5*3 =15 , 7*1 =7
 



*/