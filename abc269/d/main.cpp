#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int N;
    vector<int> X(N+1);
    vector<int> Y(N+1);
    vector<int> group(N+1);

    X[0] = 0; 
    Y[0] = 0; 
    group[0] = 0;
    for(int i=1; i<=N; ++i){
        cin >> X[i] >> Y[i];
        group[i] = 0;
    }

    int deltaX[7] = {-1, -1, -1, 0, 1, 1, 1};
    int deltaY[7] = {-1, 0, 1, 0, -1, 0, 1};

    int groupNum = 1;
    for(int i=1; i<=N; ++i){
        for(int j=0; j<7; ++j){
            for(int k=i+1; k<=N; ++k){
                if(X[i+deltaX[j]]==X[k] && Y[i+deltaY[j]]==Y[k]){
                    group[k] = groupNum;
                }
            }
        }
    }
}

