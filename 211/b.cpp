#include<iostream>
#include<string>
using namespace std;

int main(){
    string t[4] = {"H", "2B", "3B", "HR"};
    string s[4];
    string check = "Yes";
    for(int i=0; i<4; ++i){
        cin >> s[i];
    }
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(t[i]==s[j]){
                goto exit;
            }
        }
        check = "No";
        break;

        exit:
        ;
    }

    cout << check << endl;
}