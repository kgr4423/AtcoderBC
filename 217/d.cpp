#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    long long l, q;
    cin >> l >> q;

    long long *c, *x, *h;
    c = new long long[q];
    x = new long long[q];
    h = new long long[l+1]; //先頭線保存配列
    
    h[0] = 0;
    h[1] = l;
    long long count=2;

    for(long long i=0; i<q; ++i){
        cin >> c[i] >> x[i];
    }

    for(long long i=0; i<q; ++i){
        if(c[i]==1){
            //線x[i]がある地点で木材を2つに切る
            h[count] = x[i];
            ++count;
        }else{
            //線x[i]を含む木材を選びその長さを出力する
            long long mind = 1000000000, minu = 1000000000;
            long long mindn = -1, minun = -1;
            for(long long j=0; j<count; ++j){
                long long temp = x[i] - h[j];
                if(temp > 0){
                    if(temp < mind){
                        mind = temp;
                        mindn = h[j];
                    }
                } else{
                    if(abs(temp) < minu){
                        minu = abs(temp);
                        minun = h[j];
                    }
                }
            }
            cout << minun - mindn << endl;
        }
    }

    delete[] c;
    delete[] x;
    delete[] h;
}