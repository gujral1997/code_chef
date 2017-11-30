#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		lint n,count=0,sum=0,product=1;
		cin>>n;
		lint array[n];
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
		}
		for(int i=0;i<n;++i)
		{
			for(int j=i;j<n;++j)
			{
				for(int k=i;k<=j;++k)
				{
					sum+=array[k];
					product*=array[k];
				}
				if(sum==product)
				{
					count++;
					sum=0;
					product=1;
				}
				else
				{
					sum=0;
					product=1;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
