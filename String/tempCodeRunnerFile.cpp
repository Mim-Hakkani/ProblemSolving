/*
Write a program in C to find maximum occurring character in a string. 

Test Data :
Input the string : Welcome to w3resource.com.

Expected Output :

The Highest frequency of character 'e' 
appears number of times : 4 

*/

#include<iostream>
using namespace std;
int main(){
    char companyName[100];
    cout<<"Input the string: ";
    fgets(companyName,sizeof(companyName),stdin);

    cout<<"output :: ";
    
    puts(companyName);
    // printf("one value is : %d",companyName[0]);
    int i =1;
    int count =1;
    int max =(int)companyName[0];

    cout<<"value : "<<max<<"\n";


    while(companyName[i]!='\0'){

        // printf("%d value is : %d\n",i,companyName[i]);

        for(int j =65;j<=122;j++){
            if(max==(int)companyName[i]){
                count++;
            }
        }
        i++;
    }
    cout<<"Max Character Count : "<<count<<"\n";
    // printf("%c",)

    return 0 ;
}