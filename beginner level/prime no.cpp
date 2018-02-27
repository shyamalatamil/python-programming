#include <iostream>
using namespace std;

int main() {
	 int n, i, c = 0;
             cin>>n;
for (i = 1; i <= n; i++)
{
      if (n % i == 0)
      {
         c++;
      }
  }

  if (c == 2)
  {
  cout<<" a Prime number";
  }
  else
  {
  cout<<" not a Prime number";
  }
	return 0;
}
