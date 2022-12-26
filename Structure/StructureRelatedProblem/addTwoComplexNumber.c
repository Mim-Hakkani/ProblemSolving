#include<stdio.h>
struct Complex{
    double real;
    double img;
};

struct Complex additon(struct Complex a,struct Complex b){
  struct Complex ans;
  
  ans.real = a.real+b.real;
  ans.img = a.img+b.img;
 
  return ans;
}

int main(){

   struct Complex a ={5,5};
   struct Complex b ={3,4};

   // print real and complex number

     struct Complex add = additon(a,b);

     printf("%0.1lf + %0.1lfi\n",add.real,add.img);
 

    return 0;
}