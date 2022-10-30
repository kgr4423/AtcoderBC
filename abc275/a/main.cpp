#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> H(n+1);
    int max = -1;
    int temp;
    int maxNum = -1;

    for(int i=1; i<=n; ++i){
        cin >> temp;
        if(temp > max){
            max = temp;
            maxNum = i;
        }
    }

    cout << maxNum;



    
}

