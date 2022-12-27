/*
a) Explain 5 types of Errors in C with Example (You have to write program)

There are five types of error 
  i) Syntax error  occur when i violate the rules of writing C syntax is said to be Syntax errors.  This compiler error indicates that this must be fixed before the code will be compiled.

  example : 
   int main(){
    int a  // not added semicolon 

     add(a  // function closing parenthesis not added  
   }

  ii) Logical error occur that program is compile successfully but can not get the require output .
    int main(){

        // see the output a =  5 

        int a = 6,b=5;
        printf("%d",a); but see the output 6 

        // see the addition of a and b output  

        int sum = a -b ;  //  but get substraction in the sum
 

    }

   iii) Runtime Error  which are occurred after a successful compilation of program is said to be “run-time errors”. Number divisible by zero, array index out of bounds, string index out of bound.

     int main(){
        int a[2]={1,2,4};
        int infi = 1/0; 
        
        printf("%d",a[6]); // array index out of element 
     }

   iv) Sematic Errors this error generated if and only if written code is not understandable format to the C compiler . 

   int main(){
    int a,b,c;
    b+c = a; // c complier is not understand this code 
   }


   v) Linker Error This may be due occurred because of wrong function declaration, importing incorrect header files, etc. Most frequent linkererror is writing Main() instead of a main() method.

     void Main(){}  // linker error 
 
*/