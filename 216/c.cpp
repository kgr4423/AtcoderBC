#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    char s[120];
    int count=0;

    while(n!=0){
        if(n%2 == 0){
            s[count] = 'B';
            n = n/2;
        }else{
            s[count] = 'A';
            n = n-1;
        }
        ++count;
    }

    for(int i=count-1; 0<=i; --i){
        cout << s[i] << flush;
    }
}