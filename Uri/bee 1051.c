#include<stdio.h>
int main()
{
   float a,val,val1,val2,val3,val4,val5;
   scanf("%f",&a);
   if(a>0)
   {
      if(a>=0.0 && a<=2000.00)
      {
         printf("Isento\n");
      }
      else if(a>2000.00 && a<=3000.00)
      {
         val1=a-2000.00;
         val=val1*0.08;
       printf("R$ %.2f\n",val);
      }
      else if(a>3000 && a<=4500)
      {
         val1=a-3000;17.0;
         val2=a-2000-val1;
         val3=val2*.08;
         val=val3+(.18*val1);
        printf("R$ %.2f\n",val);
      }
      else
      {
         val1=a-4500;
         val2=a-3000-val1;
         val3=a-2000-val2-val1;

         val=(val1*.28)+(val2*.18)+(val3*.08);
          printf("R$ %.2f\n",val);
      }
   }
}
