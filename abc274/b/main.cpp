#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int H, W;
    cin >> H >> W;


    vector<int> X(W+1);
    for(int i=1; i<=W; ++i){
        X[i] = 0;
    }

    char read;
    for(int i=1; i<=H; ++i){
        for(int j=1; j<=W; ++j){
            cin >> read;
            if(read == '#'){
                X[j] += 1;
            }
        }
    }

    for(int i=1; i<=W; ++i){
        cout << X[i] << ' ';
    }



    
}

