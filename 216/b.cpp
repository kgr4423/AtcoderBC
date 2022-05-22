#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string *s, *t;
    s = new string[n];
    t = new string[n];

    for(int i=0; i<n; ++i){
        cin >> s[i] >> t[i];
    }

    for(int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            if(s[i]==s[j]){
                if(t[i]==t[j]){
                    cout << "Yes" << endl;
                    goto exit;
                }
            }

        }
    }

    cout << "No" << endl;

    exit:
    ;



}