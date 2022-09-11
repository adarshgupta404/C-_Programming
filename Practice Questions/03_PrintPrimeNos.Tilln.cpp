#include <iostream>
#include <limits.h>
using namespace std;

 void sieve(int m,int n)
{
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = m; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<endl;
	}
}
int main() {
    
    int low,high;
    cin>>low>>high;
    sieve(low, high);
}