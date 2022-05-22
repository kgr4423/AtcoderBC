#include<iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int *a;
    a = new int[n];

    int total=0;

    for(int i=0; i<n; ++i){
        cin >> a[i];
        if(i%2 == 0){
            total = total + a[i];
        }else{
            total = total + a[i] -1;
        }
    }

    if(total <= x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}