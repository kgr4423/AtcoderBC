#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> s, t;

    s.resize(2*n);
    t.resize(n);

    for(int i=0; i<n; ++i){
        cin >> s[i];
        s[i+n] = s[i];
    }
    for(int i=0; i<n; ++i){
        cin >> t[i];
        t[i] = t[i] + t[i];
    }

    int count = 0;

    for(int i=0; i<2*n; ++i){
        for(int j=0; j<2*n; ++j){
            for(int k=0; k<n; ++k){
                if(count==n*n){
                    if(s[j+i][k]==t[j+i][k]){
                        ++count;
                    }else{
                        count = 0;
                    }
                }
            }
        }
    }

    
}