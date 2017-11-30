#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,flag=0,sum=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		for(int i=0;i<=a;i++)
		{
		    if(i%2!=0)
			{sum+=flag;
			flag++;}
		}
		cout<<sum<<endl;
		flag=sum=0;
	}
	return 0;
}