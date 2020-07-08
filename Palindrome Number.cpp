#include<iostream>
using namespace std;

int main()
{
    int a,num,lst_dig,rev=0;
    cin>>a;
    num=a;
    while(num!=0)
    {
        lst_dig=num%10;
        num=num/10;
        rev=rev*10 + lst_dig;
    }
    cout<<rev<<endl;
    if(a==rev)
    	cout<<"True";
    else
    	cout<<"False";

    return 0;
}
