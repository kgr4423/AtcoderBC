#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

const double PI=3.14159265358979323846;

int main(){
    //入力
    double a, b, d;
    cin >> a >> b >> d;

    //主処理
    double x, y;
    double e, r;

    r = hypot(a, b);

    e = atan2(b, a);
    d = (d / 180.0) * PI;

    x = r * cos(e+d);
    y = r * sin(e+d);

    //出力
    printf("%.20f %.20f\n", x, y);
}