#include<iostream>
using namespace std;

int main()
{
	int a,c,sum=0,prd=1;
	cin>>a>>c;
	if(c==1)
	{
		for(int i=1;i<=a;i++)
			sum=sum+i;
		cout<<sum;
	}
	else if(c==2)
	{
		for(int i=1;i<=a;i++)
			prd=prd*i;
		cout<<prd;
	}
	else
		cout<<-1;
	return 0;
}
