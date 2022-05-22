#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int N;
    cin >> N;

    int *A;
    A = new int[N];
    for(int i=0; i<N; ++i){
        cin >> A[i];
    }

    int a1=-1, a2=-1;
    for(int i=0; i<N; ++i){
        if(A[i] > a1){
            a1 = A[i];
        }
    }
    for(int i=0; i<N; ++i){
        if(A[i] > a2 && A[i] != a1){
            a2 = A[i];
        }
    }
    
    for(int i=0; i<N; ++i){
        if(A[i] == a2){
            cout << (i+1) << endl;
            break;
        }
    }

    delete[] A;
  
}