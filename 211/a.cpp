//2021-0824-1730

#include<iostream>
using namespace std;

signed main(){
    double a, b, c; //最初floatでやったらあまり正確な値でなかったのでdoubleのほうがいい
    cin >> a >> b;

    c = (a-b)/3 + b;
    printf("%.10f", c);
}