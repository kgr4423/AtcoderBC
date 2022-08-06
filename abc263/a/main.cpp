#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int card[5];
    for(int i=0; i<5; ++i){
        cin >> card[i];
    }

    //主処理
    string answer="Yes";
    int num[14];
    for(int i=0; i<14; ++i){
        num[i] = 0;
    }

    for(int i=0; i<5; ++i){
        num[card[i]] += 1;
    }

    for(int i=0; i<14; ++i){
        if(!(num[i]==0 || num[i]==2 || num[i]==3)){
            answer = "No";
        }
    }

    //出力
    cout << answer << endl;
}

