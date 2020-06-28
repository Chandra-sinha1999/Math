#include<bits/stdc++.h>
using namespace std;

void primefactors(int n){
    
    vector<pair<int,int> > v;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n % i == 0){
                cnt++;
                n = n/i;
            }
            v.push_back(make_pair(i,cnt));
        }
    }
    if(n != 1) v.push_back(make_pair(n,1));
    for(auto x: v){
        cout << x.first <<" "<< x.second<<endl;
    }
}



int main(void){
    int n;
    cin >> n;
    primefactors(n);
}
