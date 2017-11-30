#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n; 
	int array[n];
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
		}
		qsort(array,n,sizeof(int),compare);
		for(int i=0;i<n;++i)
		{
			cout<<array[i];
			cout<<endl;
		}
	return 0;
}