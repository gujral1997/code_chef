#include <bits/stdc++.h>
using namespace std;
int power(int a)
{
	int counter=0;
	while(a>0)
	{
	    while(a%2==0)
	    {
	        a/=2;
	    }
		a=a^1;
		counter++;
	}
	return counter;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
	while(n--)
	{
		int a,sum=0;
		cin>>a;
		if(a<=2048)
		{
			cout<<power(a)<<endl;
		}
		else
		{
			while(a>2048)
			{
				sum=a/2048;
				a=a%2048;
			}
			sum+=power(a);
			cout<<sum<<endl;
		}

	}
	return 0;
}
