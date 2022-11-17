#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char a[101],b[101];
	gets(a);
	gets(b);
	cout<<strcmp(strlwr(a),strlwr(b));
	return 0;
}