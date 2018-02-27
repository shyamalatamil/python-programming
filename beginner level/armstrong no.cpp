#include <iostream>
using namespace std;

int main() {
	int no,num,rem,sum;
	cin>>no;
	num=no;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==no)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	return 0;
}
