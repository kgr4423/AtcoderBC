#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

// 問題URL：

int main(){
    //入力
    int y;
    cin >> y;

    // 
    int answer;
    if(y%4 == 2){
        answer = y;
    }else if(y%4 == 1){
        answer = y+1;
    }else if(y%4 == 0){
        answer = y+2;
    }else if(y%4 == 3){
        answer = y+3;
    }

    //出力
    cout << answer;
}