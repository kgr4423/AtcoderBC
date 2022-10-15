#include<bits/stdc++.h>
using namespace std;

long long func(long long x, int i){
    long long num = (x / (long long)pow(10, i)) % 10;

    if(num < 5){
        x -= num * pow(10, i);
    }else{
        x += (10 - num) * pow(10, i);
    }

    return x;
}

int main(){
    
    long long x;
    int k;
    cin >> x >> k;

    for(int i=0; i<k; ++i){
        x = func(x, i);
    }

    cout << x;

    
}

