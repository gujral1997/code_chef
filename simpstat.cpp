#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b;
		cin>>a>>b;	
		vector <double> v;
		double n,sum=0;
		for(int i=0;i<a;++i)
		{
			cin>>n;
			v.push_back(n);
		}
		sort(v.begin(),v.end());
		for(int i=b;i<v.size()-b;++i)
		{
			sum+=v[i];
		}
		double c=a-2*b;
		sum=sum/c;
		cout<<sum<<endl;
	}
	return 0;
}