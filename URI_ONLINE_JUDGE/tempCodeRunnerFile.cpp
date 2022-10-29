/*
Write an program to read two scores of a student. Calculate and print the semester average. The program must accept only valid scores (a score must fit in the range [0.10]). Each score must be validated separately.

The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2). 1 means a new calculation, 2 means that the execution must be finished.

Input
The input file contains several positive or negative floating-point (double) values​. After the input of 2 valid scores, an integer number X will be read. Your program must stop when X = 2.

Output
If an invalid score is read, must be printed the message "nota invalida". When two valid scores are read, the message "media = " must be printed folowed by the average between these 2 scores. The message "novo calculo (1-sim 2-nao)" must be printed after reading X. This message should be displayed again if the standard input number for X is less than 1 or greater than 2, as example below.

The output average must be printed with 2 digits after the decimal point.



Input Sample	

-3.5
3.5
11.0
10.0
4
1
8.0
9.0
2

Output Sample : 
nota invalida
nota invalida
media = 6.75
novo calculo (1-sim 2-nao)
novo calculo (1-sim 2-nao)
media = 8.50
novo calculo
*/

#include<iostream>
using namespace std;
int main(){
    float a,b,media,x;

    cin>>a;
    while(a<0 || a>10){
        cout<<"nota invalida"<<"\n";
     cin>>a;
    }

    cin>>b;
    while(b<0 || b>10){
        cout<<"nota invalida"<<"\n";
     cin>>b;
    }

    media = (a+b)/2;
    printf("media = %0.2f\n",media);

    cin>>x;
    while(x<1 || x>2) {
        cout<<"novo calculo (1-sim 2-nao)"<<"\n";
        cin>>x;
          if(x==2){
            cout<<"novo calculo"<<"\n";
        break;
    }
    }

    while(x==1){
      cout<<"novo calculo (1-sim 2-nao)"<<"\n";

       if(x==2){
            cout<<"novo calculo"<<"\n";
        break;}

    }

  


   

}