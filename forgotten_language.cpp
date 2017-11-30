#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s[n];
		string array[n];
		for(int i=0;i<n;++i)
		{
			cin>>s[i];
			array[i]="NO";
		}
		while(k--)
		{
			int a;
			cin>>a;
			while(a--)
			{
				string s1;
				cin>>s1;
				for(int i=0;i<n;++i)
				{
					if(s1.compare(s[i])==0)
					{
						array[i]="YES";
					}
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}