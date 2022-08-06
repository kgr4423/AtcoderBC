#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //入力
    int n;
    cin >> n;

    int *p;
    p = new int[n+1];
    for(int i=2; i<n+1; ++i){
        cin >> p[i];
    }

    //主処理
    int answer=0;
    int child=n;

    
    do{
        for(int i=child; 1<i; --i){
            if(i==child){
                child=p[i];
                answer+=1;
            }  
        }
    }while(child!=1);

    

    //出力
    cout << answer << endl;
}

