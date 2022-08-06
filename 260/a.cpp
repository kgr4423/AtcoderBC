//2022-0717-2100

/*
問題文
長さ 3 の文字列 S が与えられます。
S に 1 度だけ含まれる文字を 1 つ出力してください。
但し、そのような文字が存在しない場合は代わりに -1 と出力してください。

制約
S は英小文字のみからなる 3 文字の文字列
入力
入力は以下の形式で標準入力から与えられる。

S
出力
答えを出力せよ。正解が複数ある場合、どれを出力してもよい。
*/

#include<string>
#include<iostream>
using namespace std;

int main(){
    string S;
    cin >> S;

    if(S[0] == S[1] && S[0] == S[2]){
        cout << "-1" << endl;
    }else if(S[0] == S[1]){
        cout << S[2] << endl;
    }else if(S[0] == S[2]){
        cout << S[1] << endl;
    }else if(S[1] == S[2]){
        cout << S[0] << endl;
    }else{
        cout << S[0] << endl;
    }
  
}