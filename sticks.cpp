#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,state;
		cin>>n;
		int array[n];
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
		}
		qsort (array, n, sizeof(int), compare);
		int num1=0,num2=0;
		for(int i=n-1;i>0;--i)
		{
			if(array[i]==array[i-1])
			{
				num1=array[i-1];
				state=i-1;
				break;
			}
		}
		for(int i=state-1;i>0;--i)
		{
			if(array[i]==array[i-1])
			{
				num2=array[i-1];
				break;
			}
		}
		if(num1==0||num2==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<num1*num2<<endl;
		}
	}
	return 0;
}