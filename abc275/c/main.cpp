#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> s(9);
    for(int i=0; i<9; ++i){
        cin >> s[i];
    }
    int answer = 0;

    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            if(s[i][j] == '#'){
                for(int m=i+1; m<9; ++m){
                    for(int n=j+1; n<9; ++n){
                        if(s[i][j] == '#'){
                            if(s[i][j] == '#' && s[i][j] == '#'){
                                answer += 1;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << answer;

    
}

