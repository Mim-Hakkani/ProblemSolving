/*
Update the following code so that the values in array b is ‘x’ more than the corresponding values in array a. You can only write only one line of code inside the loop (in the comment section mark
“Write Code Here”). Do not modify anything else.  	

int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++) {
	//Write Code Here
    
   if(a[i]>5) b[i] = a[i];


********************************************************************

char s = “america”
What is wrong with this C statement. Mark the errors and fix them. 

1.No semicolon added to break this statements 
2.if this is the type of character then only one charcter in this statement but we declare more chracter and also not declare the the array because of more character 

solution : 
char s[] = "america" ;
********************************************************************
3.
Suppose you want to declare an array of size 15 and the elements of the array will be in a geometric progression, the first one starting with 1 and the common ratio being 2. For example, the first few elements of that array will be 1, 2, 4, 8, 16 , … and so on. Write a for loop to initialize the array with the  required progression.

*****************************************************************

Access to fetch at 'https://embackend.com/graphql/' from origin 'https://www.ehsanmarketing.com' has been blocked by CORS policy: No 'Access-Control-Allow-Origin' header is present on the requested resource. If an opaque response serves your needs, set the request's mode to 'no-cors' to fetch the resource with CORS disabled.


******************************************************************

To declare a string, Fahim uses the following code. What will happen in the second and the third statement. Explain.	(10)						         
	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = ‘\0’;


 firstly declare the chracter type a ,which has taken 10 character  value . we see that a[1] is the 2nd statement in c chracter type . if it is the chracter type sothat 97 is the chracter of a. 97 is the ascii value of 'a'. but we see that a[2] is the 3rd statement which is already declare the character of 'n' . 

 if we translate the total value of 
   a[10] ={98,97,'n','a','n','a','\0'} 
   a[10] = "banana"  is the final string 

*/