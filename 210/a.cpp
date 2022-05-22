//2021-0825-1800

#include<iostream>
using namespace std;

int main(){
    int n, a, x, y; //doubleにするとうまくいかない　常に桁数に注意
    cin >> n >> a >> x >> y;

    if(n>a){
        cout << (x*a + y*(n-a)) << endl; 
    }else{
        cout << x*n << endl;
    }
  
}