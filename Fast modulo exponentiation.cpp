#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 10000
ll fastModulo(ll a,ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a)%m;
        }
        a = (a*a)%m;
        b = b >> 1;
    }
    return res;
}


int main() {
	ll a,b;
	cin >> a >> b;
	cout<<fastModulo(a,b);
	return 0;
}
