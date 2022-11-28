#include<stdio.h>
int main()
{
   float a,sal,ing;
   char c='%';
   scanf("%f",&a);
   if(a>=0 && a<=400)
   {
      sal=a+a*.15;
      ing=a*.15;
      printf("Novo salario: %0.2f\n",sal);
      printf("Reajuste ganho: %0.2f\n",ing);
      printf("Em percentual: 15 %c\n",c);
   }
   else if(a>400 && a<=800)
       {
      sal=a+a*.12;
      ing=a*.12;
      printf("Novo salario: %0.2f\n",sal);
      printf("Reajuste ganho: %0.2f\n",ing);
      printf("Em percentual: 12 %c\n",c);
       }
   else if(a>800 && a<=1200)
       {
      sal=a+a*.10;
      ing=a*.10;
      printf("Novo salario: %0.2f\n",sal);
      printf("Reajuste ganho: %0.2f\n",ing);
      printf("Em percentual: 10 %c\n",c);
       }
       else if(a>1200 && a<=2000)
       {
      sal=a+a*.07;
      ing=a*.07;
      printf("Novo salario: %0.2f\n",sal);
      printf("Reajuste ganho: %0.2f\n",ing);
      printf("Em percentual: 7 %c\n",c);
       }
       else
       {
      sal=a+a*.04;
      ing=a*.04;
      printf("Novo salario: %0.2f\n",sal);
      printf("Reajuste ganho: %0.2f\n",ing);
      printf("Em percentual: 4 %c\n",c);
       }
}
