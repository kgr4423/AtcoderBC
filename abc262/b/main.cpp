#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

// 問題URL：
int main(){
    //入力
    int n, m;
    cin >> n >> m;
    int *u, *v;
    u = new int[m];
    v = new int[m];
    for(int i=0; i<m; ++i){
        cin >> u[i] >> v[i];
    }

    //
    int answer = 0;

    for(int i=0; i<m; ++i){
        for(int j=0; j<m; ++j){
            if(v[i] == u[j]){
                for(int k=0; k<m; ++k){
                    if(v[j] == v[k] && u[k] == u[i]){
                        answer += 1;
                    }
                }
            }
        }
    }

    //出力
    cout << answer << endl;
}