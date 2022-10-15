#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int answer = 0;
    int temp;
    for(int i=1; i<n+1; ++i){
        cin >> temp;
        answer += temp;
    }

    cout << answer;

    
}

