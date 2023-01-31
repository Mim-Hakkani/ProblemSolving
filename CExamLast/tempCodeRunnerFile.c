// #include<stdio.h>
// #include<string.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     char letter[n];
// //     char letteremp[n];
// //     for(int i = 0;i<n;i++){
// //      letteremp[i] = 0;
// //     }

// //     for(int i = 0;i<n;i++){
// //      printf("%d",letteremp[i]);
// //     }
// //     // fgets(letter,sizeof(letter),stdin);
// //     scanf("%s",letter);

// //     int count = 0;
// //     printf("%c",letter[0]);

// //     // for(int i=0;i<n;i++)
// //     // {
// //         // printf("%c",letter[j]);

// //         // for(int j=i+1;j<n;j++){
// //         //     if(letter[i]==letter[j]){
                 
// //         //         ++count;
// //         //           printf("ami mimci vai : %d %c\n",count,letter[i]);
// //         //     }
// //         // }
          

// //     // }
  
 
// // }


// // #include <stdio.h>
// // #include <string.h>

// int main()
// {
//     int n, i, j, count = 0;
//     char s[101];
//     scanf("%d", &n);
//     scanf("%s", s);
//     for (i = 0; i < n; i++)
//     {
//         int flag = 0;
//         for (j = 0; j < i; j++)
//         {
//             if (s[i] == s[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int counts[26] = {0}; // Initialize all counts to 0
    for (int i = 0; i < n; i++) {
        int index = s[i] - 'a'; // Get the index of the current character in the counts array
       
        
        counts[index]++;
       printf("%d %d\n",index,counts[index]);
    }

    int unique_count = 0;
    for (int i = 0; i < 26; i++) {
        if (counts[i] == 1) {
            unique_count++;
        }
    }

    printf("%d", unique_count);

    return 0;
}
