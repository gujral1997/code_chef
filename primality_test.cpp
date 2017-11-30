#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		for(int i=2;i<n;++i)
		{
			if(n%i==0)
					{
						flag=1;
						break;
					}
		}
		if(n==1)
		{
			cout<<"no"<<endl;
		}
		else
		{
			if(flag==1)
			{
				cout<<"no"<<endl;
			}
			else
			{
				cout<<"yes"<<endl;
			}
		}
	}
	return 0;
}