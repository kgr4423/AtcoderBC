#include <bits/stdc++.h>
using namespace std;

int main(){
    //入力
    long long N;
    cin >> N;

    //主処理
    for(long long i=0; i<=N; i++){
        if((N&i) == i){
            cout << i << endl;
        }
    }
    // vector<int> group(18);    
    // for(int i=0; i<=18; ++i){
    //     if(((N >> i) & 1) == 1){
    //         group.push_back(i);
    //     }
    // }

    // int output;
    // for(int i=0; i<=18; i++){
    //     output = 0;
    //     for(int j=0; j<group.size(); j++){
    //         if(((group[j] >> i) & 1) == 1){
    //             output += pow(2 ,i);
    //         }
    //     }
    //     cout << output << endl;
    // }

}


