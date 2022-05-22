#include<iostream>
#include<string>
using namespace std;

int main(){
    string s[3];
    cin >> s[0] >> s[1] >> s[2];

    string t[4] = {"ABC", "ARC", "AGC", "AHC"};
    int check[4] = {0, 0, 0, 0};

    for(int i=0; i<4; ++i){
        for(int j=0; j<3; ++j){
            if(t[i] == s[j]){
                check[i] = 1;
            }
        }
    }

    for(int i=0; i<4; ++i){
        if(check[i] == 0){
            cout << t[i] << endl;
            break;
        }
    }


}