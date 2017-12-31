#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	vector <int> v;
	int a,sum=0,counter=0;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		v.push_back(a);
		if(v[i]==0)
		{
			counter++;
			sum+=1100;
		}
		else
		{
			if(counter>0)
			{
				sum+=100;
			}
		}
	}
	cout<<sum<<endl;
	}
	return 0;
}