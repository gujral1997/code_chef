#include <bits/stdc++.h>
using namespace std;
int add(int a)
{
	int sum=0;
	for(int i=1;i<=a;++i)
	{
		sum+=i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int sum=0;
		int a,b;
		cin>>a>>b;
		while(a--)
		{
			sum=add(b);
			b=sum;
		}
		cout<<sum<<endl;
	}
	return 0;
}