#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long a, b, c, d, e, f;
    long long x = 998244353;
    cin >> a >> b >> c >> d >> e >> f;

    long long ab = (a % x) * (b % x);
    long long abc = (ab % x) * (c % x);

    long long de = (d % x) * (e % x);
    long long def = (de % x) * (f % x);

    long long abcdef = (abc % x) - (def % x);

    long long answer = abs(abcdef) % x;

    cout << answer;


    
}

