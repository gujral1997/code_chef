#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int min=(a>b)?b:a;
	int max=(a>b)?a:b;
	while(max%min!=0)
	{
		int min1=min;
		min=max%min;
		max=min1;
	}
	return min;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,gcd1;
		cin>>a;
		int array[a];
		for(int i=0;i<a;++i)
		{
			cin>>array[i];
		}
		gcd1=array[0];
		for(int i=1;i<a;++i)
		{
			gcd1=gcd(gcd1,array[i]);
		}
		for(int i=0;i<a;++i)
		{
			cout<<array[i]/gcd1<<" ";
		}
		cout<<endl;
	}
	return 0;
}