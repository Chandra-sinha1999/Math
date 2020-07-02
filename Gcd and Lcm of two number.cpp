#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b == 0?a:gcd(b,a%b);
}
int lcm(int a,int b){
    int val = __gcd(a,b);
    //gcd(a,b) * lcm(a,b)  = a * b, this is a formula
    return (a*b)/val;
}
int main() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	cout <<__gcd(a,b)<< endl;//using function
	cout << lcm(a,b) << endl;
	return 0;
}
