#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *p, *q;
    p = new int[n];
    q = new int[n];

    for(int i=0; i<n; ++i){
        cin >> p[i];
    }

    for(int i=0; i<n; ++i){
        q[p[i]-1] = i+1;
    }

    for(int i=0; i<n; ++i){
        cout << q[i] << ' ' << flush;
    }
}