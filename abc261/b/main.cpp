#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

// 問題URL：
int main(){
    //入力
    int n;
    cin >> n;

    string *A;
    A = new string[n];
    for(int i=0; i<n; ++i){
        cin >> A[i] ;
    }

    string ans = "correct";

    for(int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            if(A[i][j]=='W'){
                if(A[j][i] != 'L'){
                    ans = "incorrect";
                    break;
                }
            }else if(A[i][j]=='L'){
                if(A[j][i] != 'W'){
                    ans = "incorrect";
                    break;
                }
            }else{
                if(A[j][i] != 'D'){
                    ans = "incorrect";
                    break;
                }
            }
        }
        if(ans == "incorrect"){
            break;
        }
    }

    cout << ans << endl;
}