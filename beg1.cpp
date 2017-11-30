#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	if(a>b||a%5!=0)
	{
		cout<<b;
	}
	else
	{
		cout<<(b-a-0.5);
	}
	return 0;
}