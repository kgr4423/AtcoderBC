#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int k;
    cin >> k;

    //主処理
    int hh, mm;
    hh = 21 + k/60;
    mm = k%60;

    //出力
    printf("%02d:%02d\n", hh, mm);
}

