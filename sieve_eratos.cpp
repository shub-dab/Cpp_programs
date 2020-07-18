#include<bits/stdc++.h>

using namespace std;

void sieve(int n)
{
    bool primes[1000];

    primes[0] = primes[1] = false;

    for(int i=2; i<=n; i++) primes[i] = true;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(primes[i])
        {
            for(int j=2; i*j<=n; j++) primes[i*j] = false;
        }
    }

    for(int i=0; i<=n; i++)
    if(primes[i]) 
    cout<<i<<" ";
}

int main()
{
    cout<<"Enter a number (less than 1000): ";
    int n; 
    cin>>n;

    sieve(n);
    
    return 0;
}