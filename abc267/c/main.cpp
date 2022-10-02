#include <bits/stdc++.h>
using namespace std;

int main(){
    //実行時間たりず
    //入力
    int N, M;
    cin >> N >> M;

    vector<int> A(N+1);
    A[0] = 0;
    for(int i=1; i<=N; ++i){
        cin >> A[i];
    }

    long long answer = -1000000000000000000ll;
    for(int i=1; i<=N-M+1; ++i){
        long long temp = 0;
        int count = 1;
        for(int j=i; j<i+M; ++j){
            temp += count * A[j];
            count += 1;
        }
        if(temp > answer){
            answer = temp;
        }
    }

    cout << answer;

    

}


