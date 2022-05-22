#include<iostream>
using namespace std;

//このプログラムだと、正しい実行結果はでるが、実行時間が間に合わない

int main(){
    int N;
    int ans=0;
    cin >> N;
    int *S, *T, *record;
    S = new int[N];
    T = new int[N];
    record = new int[N];

    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    for(int i=0; i<N; i++){
        cin >> T[i];
        record[i] = 0; 
    }

    for(int t=1; ans==0; t++){
        for(int i=0; i<N; ++i){
            if(record[i]==0 && T[i]==t){
                record[i] = t;
            }
            if(record[i]!=0 && record[i+1]==0 && record[i]+S[i]==t){
                if(i!=N-1){
                    record[i+1] = t;
                }else if(record[0]==0){
                    record[0] = t;
                }
            }
        }
        for(int i=0; i<N; ++i){
            if(record[i]==0){
                break;
            }else if(i==N-1){
                ans=1;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << record[i] << endl;
    }

    delete[] S;
    delete[] T;
    delete[] record;

}