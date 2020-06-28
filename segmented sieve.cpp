#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> primes;
bitset<100000> b;

void sieve(){
    b.set();
    for(ll i = 2; i < 100000; i+=2){
        b[i] = 0;
    }
    primes.push_back(2);
    for(ll i = 3; i < 100000; i+=2){
        if(b[i]){
             primes.push_back(i);
             for(ll j = i*i; j < 100000; j+=i){
                 b[j] = 0;
             }
        }
    }
}

void segmented(ll m,ll n){
    ll a[n - m + 1];
    for(int i = 0; i < (n - m + 1); i++) a[i] = 1;
    for(auto x: primes){
        if(x * x > n) break;
        int start = (m/x)*m;
        if(start >= m){
            start = 2*x;
        }
        
        if(start < m) start += x;
        for(int i = start; i <= n;i += x) {
            a[i - m] = 0;
        }
    }
    
    for(int i = 0; i < (n - m + 1); i++){
        if(a[i]) cout<< i + m<<" ";
    }
}


int main() {
	sieve();
	segmented(5,35);
	return 0;
}
