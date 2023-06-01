#include <bits/stdc++.h>
using namespace std;
int sieve(int n) {
        bool primes[n+1];   
        fill(primes, primes+n+1, true);    
        primes[0] = primes[1] = false;    
        for (int i = 2; i*i <= n; i++) {        
            if (primes[i])         
            for (int j = i*i; j <= n; j += i)               
            primes[j] = false;    
        }
        for(int i=2;i<=n;i++)
            for(int j=2;j<=n;j++)
                if((!primes[i]&&!primes[j]) && i+j==n){
                    std::cout<<i<<" "<<j;
                    return 0;
                }
    }

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    long long n;
    cin>>n;
    sieve(n);
}