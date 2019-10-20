#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if(n == 0) return 1;
  int ans = 1;
  for(int i = 1;i <= n; i++)
  {
    ans = ans*i;
  }
  return ans;
}

int main()
{
  cout<<fact(9)<<endl;
  
  cout<<fact(5)<<endl;
  
  cout<<fact(6)<<endl;
  return 0;
}
