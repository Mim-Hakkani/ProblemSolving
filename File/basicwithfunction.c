#include<stdio.h>
int main(){
    FILE *inputfile;
    inputfile = ("input2.txt","r");
    if(inputfile==NULL){
        printf("File is not found");
        return 0;
    }
    FILE *outputflle;
    outputflle =("output2.txt","w");

    while (1)
    {
        /* code */

        char ch =fgetc(inputfile);
        if(ch==EOF){
            break;
        }

        fputc(ch,"outputflle");
    }
    
}