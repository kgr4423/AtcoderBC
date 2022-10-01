#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    vector<string> s(10);
    for(int i=0; i<10; ++i){
        string temp;
        cin >> temp;
        s[i] = temp;
    }

    int a, b, c, d;
    bool isFirstSharp = true;
    bool canStartWidthCount = false;
    int widthCount = 0;
    int hightCount = 0;
    bool isFirstSharpInLine = true;
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            if(s[i][j] == '#'){
                if(isFirstSharpInLine){
                    isFirstSharpInLine = false;
                    hightCount += 1;
                }
                if(isFirstSharp){
                    isFirstSharp = false;
                    a = i + 1;
                    c = j + 1;
                    canStartWidthCount = true;
                }
                if(canStartWidthCount){
                    widthCount += 1;
                }
            }else{
                canStartWidthCount = false;
            }
        }
        isFirstSharpInLine = true;
    }
    b = a + hightCount - 1;
    d = c + widthCount - 1;
    if(d > 10){
        d = 10;
    }

    //出力
    cout << a << ' ' << b << endl;
    cout << c << ' ' << d << endl;
}

