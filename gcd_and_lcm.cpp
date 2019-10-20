#include <bits/stdc++.h> 
using namespace std; 

int lcm(int a, int b) 
{ 
	return (a*b)/__gcd(a, b); 
} 
} ; 
int main() 
{ 
	int a = 15, b = 20; 
  
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<__gcd(a, b);
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a, b); 
	return 0; 
} 
