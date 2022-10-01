#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int sign(int n) {
    if(n > 0) return 1;
    else if(n < 0) return -1;
    else return 0;
}

int main(){
    //入力
    int x, y, z;
    cin >> x >> y >> z;

    int answer;
    if(sign(x) != sign(y)){
        answer = abs(x);//
    }else{

        if(abs(x) > abs(y)){

            if(sign(y) != sign(z)){
                answer = abs(z)*2 + abs(x);//
            }else{

                if(abs(z) < abs(y)){
                    answer = abs(x);//
                }else{
                    answer = -1;
                }

            }

        }else{
            answer = abs(x);
        }


    }

    cout << answer << endl;
}



