/**
 * The sieve of Eratosthenes is one of the most efficient ways to
 * find all primes smaller than n when n is smaller than 10 million
 */
#include <iostream>
using namespace std;

void seiveOfErathones(int n){
// Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime,true, sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]){

            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for(int i=p*p;i<=n;i=i+p){
                prime[i]= false;
            }
        }
    }
    for(int i=2;i<n+1;i++){
        if(prime[i]){
            cout<<" "<<i;
        }
    }

    
}

int main() {
    int n;
    cin>>n;
    seiveOfErathones(n);
    return 0;
}
