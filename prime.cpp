#include<iostream>
using namespace std;
int prime(int n)
{
	int i,isp=1;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			isp=0;
			break;
		}
	}
	return isp;
}
int main()
{
	int i,num;
	cout<<"Enter a number:";
	cin>>num;
	for(i=2;i<=num/2;++i)
	{
		if(prime(i)==1)
		{
			if(prime(num-i)==1)
			{
				cout<<"The number "<<num<<" can be written as "<<i<<"+"<<num-i;
				cout<<"\n";
			}
		}
	}
}
