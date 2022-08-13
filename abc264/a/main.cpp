#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int L, R;
    cin >> L >> R;

    //主処理
    string answer;

    string A = "atcoder";

    for(int i=L-1; i<R; ++i){
        cout << A[i];
    }
    cout << endl;
}

