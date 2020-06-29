#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
void sieve(){
    bitset<100000> b;
    b.set();
    for(long long int i = 2; i < 100000; i+= 2) b[i] = 0;
    primes.push_back(2);
    for(long long int i = 3; i < 100000; i+= 2){
        if(b[i] == 1){
            primes.push_back(i);
            for(long long int j = i * i; j < 100000; j += i){
                b[j] = 0;
            }
        }
    }
}
void primefactors(int n){
    int i = 0;
    int p = primes[i];
    while(p * p <= n){
        if(n%p == 0){
            cout << p << endl;
            while(n % p == 0){
                n = n/p;
            }
        }
        i++;
        p = primes[i];
    }
    if(n > 1){
        cout << n << endl;
    }
    
}
int main() {
	int n;
	sieve();
	cin >> n;
	primefactors(n);
	return 0;
}
