//2021-0821-1700

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x[5];
    int r1=1;
    int r2=1;
    cin >> x[0];
    x[4] = x[0] % 10;
    x[3] = (x[0]/10) % 10;
    x[2] = (x[0]/100) % 10;
    x[1] = (x[0]/1000) % 10;

    if(x[1]==x[2] && x[1]==x[3] && x[1]==x[4]
        && x[2]==x[3] && x[2]==x[4] && x[3]==x[4]){
            r1=false;
        }
    
    if((x[1]+1)%10==x[2] && (x[2]+1)%10==x[3] && (x[3]+1)%10==x[4]){
        r2=false;
    }

    if(r1 && r2){
        cout << "Strong" << endl;
    }else{
        cout << "Weak" << endl;
    }
}