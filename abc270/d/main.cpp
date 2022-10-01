#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int n, k;
    vector<int> a(k);

    cin >> n >> k;
    for(int i=0; i<k; ++i){
        cin >> a[i];
    }


    //主処理
    int answer = 0;
    int gameCount = 0;

    while(n > 0){
        gameCount += 1;

        int removeNum;
        for(int i=0; i<k; ++i){
            if(n >= a[k-1-i]){
                removeNum = a[k-1-i];
                break;
            }
        }

        n = n - removeNum;

        if(gameCount % 2 == 1){
            answer += removeNum;
        } 
    }

    //出力
    cout << answer << endl;
}

