#include<bits/stdc++.h>
using namespace std;
class Area{
    public:

    int height;
    int width;

    int rectangleArea(){
        return height*width;
    };

    int calculateParemeter(){
        return (2*(height+width));
    };
};



int main(){
   
   Area rec;
   rec.height = 20;
   rec.width = 40;
   cout<<"Area : "<<rec.rectangleArea()<<"\n";
   cout<<"Premeter : "<<rec.calculateParemeter()<<"\n";
}