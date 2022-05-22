#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n;
    n = s.length();

    int x, y;
    y = int(s[n-1]-'0');
    
    for(int i=0; i<n-2; ++i){
        cout << s[i];
    }

    if(y<=2){
        cout << '-' << endl;
    }else if(7<=y){
        cout << '+' << endl;
    }


}