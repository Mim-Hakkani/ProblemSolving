// #include<stdio.h>
// int main()
// {


// int n = 10;
// int x = 5;
// int index = 0;
// int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
// int b[n];
// for (int i=0; i<n; i++) {
//  	//Write Code Here
    
//    b[i] = a[i]+x;

//   //  printf("%d ",b[i]);

// }
// }

// for(j=1;j<=index;j++){
//   printf("%d ",b[j]);
// }

// printf("\n");

// }

/*****************************************/

// char s[] = "america" ;
// printf("%s",s);



/*******************************************
int a[15],i,k;

for(i=1,k=0;k<=15;i*=2){                                                                     a[k] = i;  

  printf("m %d= %d\n",k,a[k]);
  k++;
  if(k==15) break;
}

}

**********************************************/

// {
//  	char a[10];
// 	a[0] = 98;
// 	a[1] = 97;
// 	a[2] = 'n';
// 	a[3] = 'a';
// 	a[4] = 'n';
// 	a[5] = 'a';
// 	a[6] = '\0';

//   printf("%c",a[1]);
//   printf("%c\n",a[2]);


//   return 0;
// }


/**************************************************/

	// {							       
  // char a[10];
	// 	char ch = 'a'; 
	// 	for(int i = 0; i<8;i++)
	// 	{
	// 		a[i] = ch+8-i;
                                            
	// 	}
	// 	a[8] = '\0';

    //  int j = 0 ;
    //  while(a[j]!='\0'){
    //   printf("%d ",a[j]);
    //   printf("%c ",a[j]);
    //   j++;
    //  }

    // }

  // after execution in code we see that the stored value is :
   
   //  105 104 103 102 101 100 99 98  if we print the integer value  

    //  i h g f e d c b   if we print the %c the chracter type  value 

 // we added some extra code to print this int and chracter type value 

// *********************************************************
// There are 48 byte in the int type array with 12 elements in memory.

/*****************************************************************/

// What does lexicographical comparison mean? Explain with examples. How can we order strings in lexicographic order in C? 	   


 
// What does ASCII value of a character mean? How can you print the ASCII value of a character in C language? 

// ASCII means 

// (American Standard Code for Information Interchange) is the most common character encoding format for text data in computers and on the internet. In standard ASCII-encoded data, there are unique values for 128 alphabetic, numeric or special additional characters and control codes.









//  In c program, 'a' is used instead of 97 and 'z' is used instead of 122 . Similarly, 'A' is used instead of 65 and 'Z' is used instead of 90 
 
//  if we print ascii to chracter then : 
   
//    printf("%c",97);


// else if we print chracter to ascii then :

// printf("%d",a);


// c code to convert :  


// #include<stdio.h>
// int main(){
//   int asci =97;
//   char crac = 'A';

//   printf("%c\n",asci);
//   printf("%d\n",crac);
// }


 










// ****************************************************************

// Explain Bubble Sorting. Suppose you are given an array of integers 12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4. What will be the sequence of these integers if we run Bubble sort for only 5 iterations? 

// Bubble sort is a basic algorithm for arranging a string of numbers or other elements in the correct order. The method works by examining each set of adjacent elements in the string, from left to right, switching their positions if they are out of order. The algorithm then repeats this process until it can run through the entire string and find no two elements that need to be swapped.

// array list : 12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4.

// lteration 1 result :  7 9 1 3 12 11 15 62 19 4 73 
// lteration 2 result :  7 1 3 9 11 12 15 19 4 62 73
// lteration 3 result :  1 3 7 9 11 12 15 4 19 62 73
// lteration 4 result :  1 3 7 9 11 12 4 15 19 62 73 
// lteration 5 result :  1 3 7 9 11 4 12 15 19 62 73
// ***************************************************************     

// How can you find the sum of digits of a number? Write a C program that will extract the digits of the given integer number as input and add them to find the required output. For example, if the input is 1235623, then the output will be 22. Because, 1+2+3+5+6+2+3 = 22.        


// #include<stdio.h>
// int main(){
//   int num,sum=0,reminder;
//   scanf("%d",&num);
  
//   while(num!=0){
//     reminder =  num%10;
//     sum =sum+reminder;
//     num/=10;
//   }

//   printf("%d\n",sum);

// return 0;
// }




#include<stdio.h>
int main(){
  int a[3][3],i,j,k,sumc=0,sumr=0,s1=0,s2=0,f=0;
 

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&a[i][j]);
     
    }

  }


// for diagonal check 


  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(i==j){
         s1 =s1 +a[i][j] ;   
      }
      if(i+j==3-1){
         s2 =s2 +a[i][j] ;   

      }
     
    }

  }

if(s1!=s2){f=1;}
else{


  for(i=0;i<3;i++){
    sumc=0,sumr=0;
    for(j=0;j<3;j++){
      sumr=sumr + a[i][j];
      sumc=sumc + a[j][i];
    }

    if(sumc!=s1){
      f=1;
      }
    else if(sumr!=s1){
      f=1;
      }
    else{
      f =0;
    }
}
}

if(f==0){
  printf("Yes\n");
}

else{
  printf("No\n");
}

  return 0;
}





