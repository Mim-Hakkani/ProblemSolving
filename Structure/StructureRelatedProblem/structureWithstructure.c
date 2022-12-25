#include<stdio.h>

struct point
{
    float x;
    float y;
};

struct point Mid(struct point p1,struct point p2){
   struct point ans;
   ans.x = (p1.x+p2.x)/2;
   ans.y = (p1.y+p2.y)/2;
   return ans ;
}

int main(){
  struct point p1,p2;
  scanf("%f %f",&p1.x,&p1.y);
  scanf("%f %f",&p2.x,&p2.y);

  struct point p3;

  p3 = Mid(p1,p2);

  printf("x is : %0.2f\n",p3.x);
  printf("y is : %0.2f\n",p3.y);

  return 0;

}