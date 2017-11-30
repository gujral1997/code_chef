#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0;
		cin>>n>>k;
		int array[n];
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
			int x=array[i]%k;
			int y=k-x;
			if(x<y)
			{
				sum+=x;
			}
			else
			{
				sum+=y;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}