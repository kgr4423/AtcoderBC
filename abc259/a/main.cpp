#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main(){
    //入力
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;

    //
    int answer;
    if(x <= m){
        answer = t;
    }else{
        answer = t - d * (x - m);
    }

    //出力
    cout << answer << endl;
}