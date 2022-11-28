#include<stdio.h>
int main()
{
   int a,c,b;
   scanf("%d %d %d",&a,&b,&c);
   if(a<b&&a<c)
   {
      if(b<c)
      {
         printf("%d\n%d\n%d\n",a,b,c);
      }
      else
      {
         printf("%d\n%d\n%d\n",a,c,b);
      }
   }
   if(b<c&&b<a)
   {
      if(c<a)
      {
         printf("%d\n%d\n%d\n",b,c,a);
      }
      else
      {
         printf("%d\n%d\n%d\n",b,a,c);
      }
   }
   if(c<a&&c<b)
   {
      if(a<b)
      {
         printf("%d\n%d\n%d\n",c,a,b);
      }
      else
      {
         printf("%d\n%d\n%d\n",c,b,a);
      }
   }
    printf("\n%d\n%d\n%d\n",a,b,c);


}
