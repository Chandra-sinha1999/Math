#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void prime(int *p){
    for(ll i = 3; i < 1000000; i+=2) p[i] = 1;
        for(ll i = 3;i < 1000000; i+=2){
            if(p[i] == 1){
                for(ll j = i * i; j <= 1000000; j += i){
                    p[j] = 0;
                }
            }
    }
    p[2] = 1;
}
int main() {
	int n;
	cin >> n;
	int p[1000000] = {0};
	prime(p);
	for(int i = 2; i <= n; i++){
	    if(p[i]) cout <<i<<" ";
	}
	cout << endl;
	return 0;
}
//we can also use bitset 
//bitset<1000000> b;
//b.set() it will set all bits as 1
//rest will be same
//it will be space optimization
