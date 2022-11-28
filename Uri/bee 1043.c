#include<stdio.h>
int main()
{

   float a,c,b,area,min,sum;
   scanf("%f %f %f",&a,&b,&c);
   min=b+c;
  if(a<b+c &&b<a+c&&c<a+b)
  {   sum=a+b+c;
     printf("Perimetro = %0.1f\n",sum);

  }
  else
   {
     area=((a+b)/2)*c;
    printf("Area = %0.1f\n",area);
  }
  return 0;
}