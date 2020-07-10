#include<iostream>
using namespace std;

int main()
{
	long n;
	int a,ev=0,od=0;
	
	cin>>n;
	
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		if(a%2==0)
			ev=ev+a;
		else
			od=od+a;
	}
	
	cout<<ev<<' '<<od;
	
	return 0;
}
