#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c,count=0;
		cin>>n>>m>>c;
		for(int i=1;i<=c;++i)
		{
			if(i<=n&&c%i==0&&c/i<=m)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}