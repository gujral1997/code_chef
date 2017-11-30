#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c,d=0;
	cin>>a>>b;
	c=a+b;
	int array1[a],array2[b],array3[c];
	for(int i=0;i<a;++i)
	{
		cin>>array1[i];
		array3[d]=array1[i];
		d++;
	}
	for(int i=0;i<b;++i)
	{
		cin>>array2[i];
		array3[d]=array2[i];
		d++;
	}
	for(int i=0;i<c;++i)
	{
		cout<<array3[i]<<" ";
	}
	return 0;
}