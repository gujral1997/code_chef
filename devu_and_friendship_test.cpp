#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		int count=0,flag=0;
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
			for(int j=0;j<i;++j)
			{
				if(array[i]==array[j])
				{
					flag=1;
				}
			}
			if(flag==0)
			{count++;
			}
			else
			{
			    flag=0;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}