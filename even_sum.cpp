#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter limit: ";
  cin>>n;
  int even = 0;
  for(int i=2; i<=n; i+=2)
  {
    even+=i;
  }
  cout<<even;
  return 0;
}
