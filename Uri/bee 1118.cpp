#include<iostream>
using namespace std;
int main(){
    double media,a,b,c;
    while (1)
    {
        cin>>a;
        int flag;
         if(a<0 || a>10) {
            cout<<"nota invalida\n";
            flag=0;
         }
         else flag =1;
         while(flag==0){
            cin>>a;
             if(a<0 || a>10) {
              cout<<"nota invalida\n";
               flag =0 ;
             }
             else{
                flag ==1;
                break;
             }

         }
         
         cin>>b;
          int flag2;
         if(b<0 || b>10) {
            cout<<"nota invalida\n";
            flag2=0;
         }
         else flag2 =1;
         while(flag2==0){
            cin>>b;
             if(b<0 || b>10) {
              cout<<"nota invalida\n";
               flag2 =0 ;
             }
             else{
                flag2 ==1;
                break;
             }

         }

            if((a>=0 && a<=10) && (b>=0 && b<=10)){
            media = (a+b)/2;
            printf("media = %0.2lf\n",media);

            cout<<"novo calculo (1-sim 2-nao)"<<"\n";
            cin>>c;
            if(c==2) break;
            while(c!=1){
              cout<<"novo calculo (1-sim 2-nao)"<<"\n";
               cin>>c;
            }
            if(c==1) continue;
            

            }
      
        
       
    }
    
    return 0;
}