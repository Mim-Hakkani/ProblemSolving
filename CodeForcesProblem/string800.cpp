#include <iostream>
#include<string.h>
using namespace std;

int
main ()
{
  char string1[101], string2[101];
//   fgets (string1, sizeof (string1), stdin);
//   fgets (string2, sizeof (string2), stdin);

cin>>string1>>string2;
  int i = 0, j = 0;

  // convert first string in lowercase 

  while (string1[i] != '\0')
    {
      if (string1[i] >= 'A' && string1[i] <= 'Z')
	{
	  string1[i] = string1[i] + 32;
	}
      i++;
    }

  // convert first string in lowercase 

  while (string2[j] != '\0')
    {
      if (string2[j] >= 'A' && string2[j] <= 'Z')
	{
	  string2[j] = string2[j] + 32;
	}

      j++;
    }
    
if(strcmp(string1,string2)<0){
    cout<<-1<<"\n";
}
else if(strcmp(string1,string2)>0){
    cout<<1<<"\n";
}
else{
    cout<<0<<"\n";
}
 

  return 0;
}