#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,i=4,counter=2;
		cin>>a;
		if(a>=2)
		{
			cout<<1<<" "<<2<<" ";
		}
		else
		{
			cout<<1<<" ";
		}
		while(counter<a)
		{
			cout<<i<<" ";
			i+=3;
			counter++;
		}
		cout<<endl;
	}
	return 0;
}