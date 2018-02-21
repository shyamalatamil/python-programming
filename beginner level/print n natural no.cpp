#include <iostream>
using namespace std;
int main() {
int no,i;
int sum=0;
    cin >> no;
    if(no<=0)
    {
    	cout<<"invalid no";
    }
    else
    {
    	int i=1;
    while(i<=no) {
        sum=sum+i;
        i++;
    }	
    cout<<sum;
    return 0;
}
}
