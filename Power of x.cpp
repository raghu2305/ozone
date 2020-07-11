#include<iostream>
using namespace std;

int main()
{
	int x,n,a=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
		a=a*x;
	cout<<a;
	return 0;
}
