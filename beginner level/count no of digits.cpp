#include <iostream>
using namespace std;
int main() {
int no,n=0;
cin>>no;
while(no>0)
{
no=no/10;
n++;
}
cout<<n;
    return 0;
}
