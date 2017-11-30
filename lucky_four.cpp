#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,flag=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		while(a!=0)
		{
			if(a%10==4)
			{
				flag++;
			}
			a/=10;
		}
		cout<<flag<<endl;
		flag=0;
	}
	return 0;
}