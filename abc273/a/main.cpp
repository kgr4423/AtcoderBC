#include<bits/stdc++.h>
using namespace std;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main(){
    
    int n;
    cin >> n;

    int answer;

    if(n==0){
        answer = 1;
    }else{
        answer = facctorialMethod(n);
    }

    cout << answer;
}




