#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }

    vector<int> answer(n+1);
    answer[1] = 0;
    for(int i=1; i<=n; ++i){
        answer[i*2] = answer[i]+1;
        answer[i*2+1] = answer[i]+1;
    }

    for(int i=1; i<=2*n+1; ++i){
        cout << answer[i] << endl;
    }
    
}

