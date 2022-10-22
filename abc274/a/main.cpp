#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float A, B;
    cin >> A >> B;

    float temp = B / A;

    if((int)(B * 10000 / A) % 10 < 5){
        printf("%01.3f", temp);
        
    }else{
        temp = temp + (10-((int)(temp * 10000) % 10)) / 10000.0;
        printf("%01.3f", temp);
    }

    
}

