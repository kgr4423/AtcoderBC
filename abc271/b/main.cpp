#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int sign(int n) {
    if(n > 0) return 1;
    else if(n < 0) return -1;
    else return 0;
}

int main(){
    //入力
    int N, Q;
    cin >> N >> Q;

    vector<int> L(N+1);
    vector<vector<int>> a(N+1);
    L[0] = 0;
    for(int i=1; i<=N; ++i){
        cin >> L[i];

        a[i].push_back(0);
        for(int j=1; j<=L[i]; ++j){
            int temp;
            cin >> temp;  
            a[i].push_back(temp);
        }

    }

    vector<int> s(Q+1);
    vector<int> t(Q+1);
    s[0] = 0;
    t[0] = 0;
    for(int i=1; i<=Q; ++i){
        cin >> s[i] >> t[i];
    }


    for(int i=1; i<=Q; ++i){
        cout << a[s[i]][t[i]] << endl;
    }



    //入力確認用
    // for(int i=1; i<=N; ++i){
    //     for(int j=1; j<=L[i]; ++j){
    //         cout << a[i][j] << ' ' << flush;
    //     }
    //     cout << endl;
    // }
    // for(int i=1; i<=Q; ++i){
    //     cout << s[i] << ' ' << t[i] << endl;
    // }

}



