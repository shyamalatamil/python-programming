#include <iostream>
using namespace std;

int main() {
 int n1, n2, i, temp, num, rem;
 cin>>n1>>n2;
 for(i=n1+1; i<n2; ++i)
 {
 temp=i;
 num=0;
 while(temp!=0)
  {
  rem=(temp%10);
 num+=rem*rem*rem;
  temp/=10;
 }
 if(i==num)
      {
          cout<<i;
           cout<<"\n";
      }
  }
	return 0;
}
