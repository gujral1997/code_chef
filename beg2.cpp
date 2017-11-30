#include <bits/stdc++>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c,counter=0;
	cin>>a>>b;
	while(a--)
	{
		cin>>c;
		if(c%b==0)
		{
			counter++;
		}
	}
	cout<<counter;
	return 0;
}