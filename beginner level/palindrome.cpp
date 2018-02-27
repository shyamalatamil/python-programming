#include <iostream>
using namespace std;

int main() {
	int n,rem,sum,num;
	cin>>n;
	num=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==num)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	return 0;
}
