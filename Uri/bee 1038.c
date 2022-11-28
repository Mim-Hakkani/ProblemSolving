#include<stdio.h>
int main()
{
   int x,y;
   float v;
   scanf("%d %d",&x,&y);
   if(x==1)
   {
      v=4.0*y;
      printf("Total: R$ %.2f\n",v);
   }
   else if(x==2)
   {
      v=4.5*y;
       printf("Total: R$ %.2f\n",v);;
   }
   else if(x==3)
   {
      v=5.0*y;
    printf("Total: R$ %.2f\n",v);
   }
   else if(x==4)
   {
      v=2.0*y;
       printf("Total: R$ %.2f\n",v);
   }
   else if(x==5)
   {
      v=1.5*y;
       printf("Total: R$ %.2f\n",v);
   }
   else{printf("wrong input");}



}
