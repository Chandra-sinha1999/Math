
//we have to compute value of b in (a*b)%m = 1;
//a and m are given a solution exist only if gcd(a,m) == 1
//we will turn this eqn in the form ab + m(k') = gcd(a,m)
//and now compute value of b using extended eculudian method


#include <bits/stdc++.h>
using namespace std;
int x,y,gcd;
void extendedEculudian(int a, int b){
    if(b == 0){
        x = 1;
        y = 0;
        gcd = a;
        return;
    }
    extendedEculudian(b,a%b);
    int curx = y;
    int cury = x -(a/b)*y;
    x = curx;
    y = cury;
}

int multiplicativeModuloInverse(int a,int m){
    extendedEculudian(a,m);
    return (x + m)%m;
}
int main(void){
    int a,m;
    cin >> a >> m;
    cout << multiplicativeModuloInverse(a,m);
    return 0;
}
