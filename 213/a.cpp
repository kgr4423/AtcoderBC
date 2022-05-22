#include<iostream>
using namespace std;

//atcoder abc213a
//入力A,Bに対して A XOR C = B となるようなCを求める
// 

int main(){
    int a, b;
    int A, B, C;
    int X;
    int modA, modB, modC;
    int ans = -1;
    cin >> a >> b;

    for(int c=0; c<256; c++){
        A = a;
        B = b;
        C = c;
        while(ans==-1){
            modA = A%2;
            modB = B%2;
            modC = C%2;

            if(modA!=modB){
                X = 1;
            }else{
                X = 0;
            }
            
            if(A==0 && B==0 && C==0){
                ans = c;
            }else if(X==modC){
                A = A/2;
                B = B/2;
                C = C/2;
            }else{
                break;
            }
  
        }
    }
    cout << ans << endl;

}