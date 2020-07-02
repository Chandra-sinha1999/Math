#include <bits/stdc++.h>
using namespace std;
int x,y,gcd;
void extendedEculuid(int a,int b){
    if(b == 0){
        x = 1;
        y = 0;
        gcd = a;
        return;
    }
    extendedEculuid(b,a%b);
    int cx = y;
    int cy = x - (a/b)*y;
    x = cx;
    y = cy;
}
int main() {
	int a,b;
	cin >> a >> b;
	//if x,y find krna hai 18x + 30y = gcd(18,30) me toh pass 18 and 30 as a and b
	extendedEculuid(a,b);
	cout << x << " " << y << endl;
	return 0;
}
