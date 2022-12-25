#include<stdio.h>
#include<math.h>
 struct Coordinator
 {
  int x;
  int y;
 };

double Distance(struct Coordinator p1,struct Coordinator p2){
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}

int main(){

     struct Coordinator p1,p2;
     scanf("%d %d",&p1.x,&p1.y);
     scanf("%d %d",&p2.x,&p2.y);
    
    double distance = Distance(p1,p2);
    
    printf("Distance Between Two co-ordinator is : %0.3lf\n",distance);
    return 0;
}