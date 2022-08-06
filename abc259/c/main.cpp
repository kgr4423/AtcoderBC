#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    string s,t;
    cin >> s >> t;

    //1
    string s_ex, t_ex;

    //1-1
    int count = 1;
    for(int i=1; i<(int)s.size(); ++i){
        if(s[i-1] != s[i]){
            s_ex += s[i-1];
            s_ex += count;
            count = 0;
        }
        count += 1;
    }
    s_ex += s[s.size() - 1];
    s_ex += count;
    
    //1-2
    count = 1;
    for(int i=1; i<(int)t.size(); ++i){
        if(t[i-1] != t[i]){
            t_ex += t[i-1];
            t_ex += count;
            count = 0;
        }
        count += 1;
    }
    t_ex += t[t.size() - 1];
    t_ex += count;

    //2
    string answer = "Yes";

    //2-1
    if(s_ex.size() != t_ex.size()){
        answer = "No";
    }

    //2-2
    for(int i=0; i<(int)s_ex.size(); ++i){
        if(i%2 == 0){
            if(s_ex[i] != t_ex[i]){
                answer = "No";
                break;
            }
        }else{
            if(!(s_ex[i] == t_ex[i] || (s_ex[i] < t_ex[i] && s_ex[i] >= 2))){
                answer = "No";
                break;
            }
        }
    }

    //出力
    cout << answer << endl;
}