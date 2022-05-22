#include<iostream>
using namespace std;

int main(){
    int S, T, count=0;
    cin >> S >> T;

    for(int i=0; i<=S; i++){
        for(int j=0; j<=S-i; j++){
            for(int k=0; k<=S-i-j; k++){
                if(i*j*k<=T){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}