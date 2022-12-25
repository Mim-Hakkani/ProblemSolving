#include<stdio.h>

struct mDistance
{
    int x;
    int y;
};

int ManhattanDistance(struct mDistance p1,struct mDistance p2){
   
   int distance = abs(p1.x-p2.x) +  abs(p1.y-p2.y);
   return distance ;
}

int main(){
  struct mDistance p1,p2;
  scanf("(%d,%d)\n",&p1.x,&p1.y);
  scanf("(%d,%d)",&p2.x,&p2.y);

  int Distance = ManhattanDistance(p1,p2);
  printf("Distance is : %d\n",Distance);
  return 0;

}