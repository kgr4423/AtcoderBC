#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int N, S;
    cin >> N >> S;

    vector<int> a(N+1);
    vector<int> b(N+1);
    vector<bool> isFront(N+1);
    a.push_back(0);
    b.push_back(0);
    isFront.push_back(true);
    for(int i=1; i<=N; ++i){
        int tmpa, tmpb;
        cin >> tmpa >> tmpb;
        a.push_back(tmpa);
        b.push_back(tmpb);
        isFront.push_back(true);
    }
}

