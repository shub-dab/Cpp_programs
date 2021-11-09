#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
	if(n<2) return false;

	for(int i=2; i<=sqrt(n); i++)
	if(n%i == 0)
	return false; // false value

	return true;
}

int main()
{   
	cout<<"Enter number: ";
	int n;
	cin>>n;
	
    
    if(isprime(n))
    cout<<"Prime";
    
    else
    cout<<"Not prime";
    
    return 0;
}
