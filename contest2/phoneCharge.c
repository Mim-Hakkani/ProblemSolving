#include <stdio.h>
int main()
{
    int i, j, T,charge[101],charges[101];
    scanf("%d", &T);

    if(T>=1 && T<=101){



        for (i = 0; i <T; i++)
        {
            scanf("%d %c", &charge[i],&j);

            if(j=='%' && charge[i]>=0 && charge[i]<=100) {
                //  printf("mim test : %d",charge[i]);
                if(charge[i] <60){
                   
                    charges[i] = ( (60-charge[i])+(2*20)+(3*20));
                }

                else if( (charge[i] >60 && charge[i] <80)){
                    
                    charges[i] = (( (80-charge[i])*2)+(3*20));
                }
                else{
                    charges[i] = ((100-charge[i])*3);
                }

            }

            else{
                break;
            }
       
        }

        for(i=0;i<T;i++){
           
            if(j=='%' && charge[i]>=0 && charge[i]<=100)
            {
             printf("%d minutes\n",charges[i]);
            }
            else{
                break;

            }
             
            
        }


            }
    return 0;
}