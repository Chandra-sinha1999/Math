ll  stringToint(string a,ll mod){
ll  ans = 0;
for(ll i = 0; i < a.size(); i++){
ans  = (ans * 10)%mod + (a[i] - ‘0’);
ans %= mod;
}
return ans;
}
