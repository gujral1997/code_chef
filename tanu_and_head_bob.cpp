#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		char array[n];
		for(int i=0;i<n;i++)
		{
			if(array[i]=='I')
			{
				flag=1;
			}
			if(arr[i]=='Y')
			{
				flag=2;
			}
		}
		if(flag==1)
		{
			cout<<"INDIAN"<<endl;
		}
		if(flag==2)
		{
			cout<<"NOT INDIAN"<<endl;
		}
		else
		{
			cout<<"NOT SURE"<<endl;
		}
	}
	return 0;
}