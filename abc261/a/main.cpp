#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

// 問題URL：

// ！型は適切に変えること！
int solver(int l1, int r1, int l2, int r2){
    int A[100], B[100];
    int count = 0;
    for(int i=0; i<100; ++i){
        if(l1 <= i && i < r1){
            A[i] = 1;
        }else{
            A[i] = 0;
        }
        if(l2 <= i && i < r2){
            B[i] = 1;
        }else{
            B[i] = 0;
        }
    }
    for(int i=0; i<100; ++i){
        if(A[i]*B[i]==1){
            count++;
        }
    }

    return count;

    
}

int main(){
    //入力
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    //出力
    cout << solver(l1, r1, l2, r2) << endl;
}