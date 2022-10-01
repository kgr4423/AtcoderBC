#include <bits/stdc++.h>
using namespace std;

int main(){
    //入力
    int h1, w1;
    cin >> h1, w1;

    vector<vector<long long> > A(h1, vector<long long>(w1));
    for(int i=0; i<h1; ++i){
        for(int j=0; j<w1; ++j){
            cin >> A.at(i).at(j);
        }
    }

    int h2, w2;
    cin >> h2, w2;

    vector<vector<long long> > B(h2, vector<long long>(w2));
    for(int i=0; i<h2; ++i){
        for(int j=0; j<w2; ++j){
            cin >> B.at(i).at(j);
        }
    }

    //主処理
    vector<int> record(w2);
    for(int i=0; i<w1-w2+1; ++i){
        for(int j=0; j<h1-h2+1; ++j){
            if(A.at(i).at(j) == B.at(0).at(0)){
                record.at(0) = j;
                for(int k=1; k<w2; ++k){
                    for(int l=j+1; l<h1-h2+2; ++l){
                        if(A.at(i).at(l) == B.at(0).at(k)){
                            record.at(k) = l;
                            break;
                        }
                    }
                }
                for(int m=1; m<w2; ++m){
                    for(int n=0; n<w2; ++n){
                        if(A.at(m).at(record.at(n)) == B.at(m).at(record.at(n)))
                    }
                }
            }
        }
    }
    


}


