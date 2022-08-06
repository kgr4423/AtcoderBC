//2022-0717-2100

#include <algorithm>
#include<string>
#include<iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    long long *red, *blue;
    red = new long long[n];
    blue = new long long[n];

    for(int i=0; i<n; ++i){
        red[i] = 0;
        blue[i] = 0;
    }
    red[n-1] = 1;

    for(int i=n-1; 0<i; --i){
        blue[i] += red[i]*x;
        red[i-1] += red[i];
        blue[i-1] += blue[i]*y;
        red[i-1] += blue[i];
    }

    cout << blue[0];



  
}