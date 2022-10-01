#include <bits/stdc++.h>
using namespace std;

int main(){
    //入力
    int N;
    cin >> N;

    vector<int> a(N+1);
    a[0] = 0;
    for(int i=1; i<=N; ++i){
        cin >> a[i];
    }

    
    bool canEnd = (N == 0 || N == 1);
    int roopNum = N-1;
    while(!canEnd){
        int insertPoint;
        for(int i=1; i<=roopNum; ++i){
            if(a[i] != i){
                insertPoint = i;
                break;
            }
            if(i == roopNum){
                canEnd = true;
            }
        }
        a.pop_back();
        a.pop_back();
        a.insert(a.begin() + insertPoint, insertPoint);
        roopNum -= 1;
    }

    int answer;
    for(int i=1; i<=N; ++i){
        if(a[i] != i){
            answer = i-1;
            break;
        }
    }

    for(int i=1; i<=N; ++i){
        cout << a[i] << ' ' << flush;
    }
    cout << endl;


    cout << answer << endl;
}


