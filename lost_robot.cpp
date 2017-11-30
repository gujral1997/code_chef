#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x2-x1==0||y2-y1==0)
		{
			if(x2-x1>0)
			{
				cout<<"right"<<endl;
			}
			if(x2-x1<0)
			{
				cout<<"left"<<endl;
			}
			if(y2-y1>0)
			{
				cout<<"up"<<endl;
			}
			if(y2-y1<0)
			{
				cout<<"down"<<endl;
			}
		}
		else
		{
			cout<<"sad"<<endl;
		}
	}
	return 0;
}