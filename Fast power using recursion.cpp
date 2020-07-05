ll power(ll x,ll y,ll mod){
    if(y == 0) return 1;
    
    ll cur = power(x,y/2,mod);
    cur %= mod;
    
    cur = (cur * cur)%mod;
    if(y&1){
        return (x * cur)%mod;
    }
    return cur;
}
