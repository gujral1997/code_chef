#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int b;
	cin>>n;
	while(n--)
	{
	int a,b,c,sum=0;
	cin>>a;
	for(int i=0;i<3;++i)
	{
		cin>>b>>c;
		sum+=abs(b-c)
	}	
	if(sum<=a)
	{
		cout<<"yes"<<endl;
		sum=0;
	}
	else
	{
		cout<<"no"<<endl;
	}
	}
	return 0;
}