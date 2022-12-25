/*
 
 (1,1) (2,4) (3,8)

  x = (1+2+3 ) / 3

  y = (1+4+8) /3 

*/

// #include<stdio.h>
// struct Point
// {
//    float x;
//    float y;
// };

// struct Triangle{
//     struct Point A;
//     struct Point B;
//     struct Point C;
// };

// struct Point Centroied(struct Point p1,struct Point p2,struct Point p3){
   
//    struct Point answer ;
//     answer.x =( p1.x+p2.x+p3.x)/3;
//     answer.y =( p1.y+p2.y+p3.y)/3;

//     return answer;
// };

// int main(){

//     struct Point p1 ={1,1};
//     struct Point p2 ={2,3};
//     struct Point p3 ={4,6};

//     struct Triangle t = {p1,p2,p3};

//    struct Point dp =  Centroied(p1,p2,p3);
//    printf("x = %0.1f\n",dp.x);
//    printf("y = %0.1f\n",dp.y);


//     return 0 ;
// }


/*
 
 (1,1) (2,4) (3,8)

  x = (1+2+3 ) / 3

  y = (1+4+8) /3 

*/

#include<stdio.h>
struct Point
{
   float x;
   float y;
};

struct Triangle{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point Centroied( struct Triangle t){
   
   struct Point answer ;
    answer.x =(t.A.x+t.B.x+t.C.x)/3;
    answer.y =(t.A.y+t.B.y+t.C.y)/3;

    return answer;
};

int main(){

    struct Point p1 ={1,1};
    struct Point p2 ={2,3};
    struct Point p3 ={4,6};

    struct Triangle t = {p1,p2,p3};

   struct Point dp =  Centroied(t);
   printf("x = %0.1f\n",dp.x);
   printf("y = %0.1f\n",dp.y);


    return 0 ;
}
