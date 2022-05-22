#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *x, *y, *count;
    x = new int[n];
    y = new int[n];
    count = new int[n];

    for(int i=0; i<n; ++i){
        cin >> x[i] >> y[i];
        count[i] = 0;
    }

    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(x[i]==x[j]){
                
            }
        }
    }

    delete[] x;
    delete[] y;
}