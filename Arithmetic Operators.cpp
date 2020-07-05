#include<iostream>
using namespace std;

int main()
{
	float n=5.35;
	int m=10;

	cout<<"n+m : "<<n+m<<endl;
	cout<<"n-m : "<<n-m<<endl;
	cout<<"n*m : "<<n*m<<endl;
	cout<<"n/m : "<<n/m<<endl;
	cout<<"n%m : There is no logic of using modulo fun. b/w float and int."<<endl;
	cout<<"++n : "<<++n<<endl;
	cout<<"n-- : "<<n--<<endl;

	int c=n++;
	cout<<"\nc : "<<c<<endl;
	n++;
	cout<<"n++ : "<<n;

	return 0;
}
