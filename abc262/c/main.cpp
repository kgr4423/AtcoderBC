#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    long long n;
    cin >> n;
    long long *a, *a_num;
    long long same=0;
    a = new long long[n+1];
    a_num = new long long[n+1];
    for(int i=1; i<n+1; ++i){
        cin >> a[i];
        a_num[i] = i;

        if(a[i]==i){
            same += 1;
        }
    }

    //
    long long answer = 0;

    answer += same*(same-1)/2;

    for(int i=1; i<n+1; ++i){
        if(a[i]>i && a[a[i]]==i){
            answer += 1;
        }
    }

    //出力
    cout << answer << endl;
}