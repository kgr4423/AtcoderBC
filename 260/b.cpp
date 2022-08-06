//2022-0717-2100

#include <algorithm>
#include<string>
#include<iostream>
using namespace std;

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int *a, *b, *c, *pass;
    int count = 0;
    a = new int[n];
    b = new int[n];
    c = new int[n];
    pass = new int[n];

    
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int i=0; i<n; ++i){
        cin >> b[i];
    }
    for(int i=0; i<n; ++i){
        c[i] = a[i] + b[i];
    }
    for(int i=0; i<n; ++i){
        pass[i] == 0;
    }
  
    for(int i=0; i<x; ++i){
        for(int j=0; j<n; ++j){
            if(&a[j] == max_element(a, a+n)){
                pass[count] = j+1;
                ++count;
                a[j] = -1;
                b[j] = -1;
                c[j] = -1;
                break;
            }
        }
    }
    for(int i=0; i<y; ++i){
        for(int j=0; j<n; ++j){
            if(&b[j] == max_element(b, b+n)){
                pass[count] = j+1;
                ++count;
                b[j] = -1;
                c[j] = -1;
                break;
            }
        }
    }
    for(int i=0; i<z; ++i){
        for(int j=0; j<n; ++j){
            if(&c[j] == max_element(c, c+n)){
                pass[count] = j+1;
                ++count;
                c[j] = -1;
                break;
            }
        }
    }
    sort(pass, pass+n);
    for(int i=0; i<count; ++i){
        cout << pass[i] << endl;
    }

    delete[] a;
    delete[] b;
    delete[] c; 
    delete[] pass;
}