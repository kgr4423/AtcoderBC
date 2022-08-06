#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a<=b && b<=a*6){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

//コンパイル
//$ g++ main.cpp

//テスト
//$ oj t -d tests

//提出
//$acc submit main.cpp