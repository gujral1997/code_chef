#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,count=1;
		cin>>a>>b;
		while(a>=0&&b>=0)
		{
			if(count%2==1)
			{
				a-=count;
				count++;
			}
			if(count%2==0)
			{
				b-=count;
				count++;
			}
		}
		if(a<0)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Limak"<<endl;
		}
	}
	return 0;
}
