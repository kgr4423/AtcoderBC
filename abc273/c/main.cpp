#include<bits/stdc++.h>
using namespace std;

struct foo
{
        long     a;
        long     num;

};


int main(){
    
    long n;
    cin >> n;

    vector<foo> v(n+1);
    vector<long> answer(n+1);

    for(int i=1; i<=n; ++i){
        cin >> v[i].a;
        v[i].num = i;
        answer[i] = 0;
    }

    sort(v.begin(), v.end(), greater<long>{});

    //sort(a.begin()+1, a.end(), greater<int>{});
    //a.erase(unique(a.begin(), a.end()), a.end());

    // cout << endl;
    // for(int i=1; i<=n; ++i){
    //     cout <<  a[i] << ' ';
    // }

    
    for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; ++j){
            if(b[i] == a[j]){
                answer[j-1] +=1;
                break;
            }
        }
    }


    // for(int k=0; k<n; ++k){
    //     for(int i=1; i<=n; ++i){
    //         if(c[i] == k){
    //             answer[k] += 1;
    //         }
    //     }
    // }

    //

    for(int k=0; k<n; ++k){
        cout << answer[k] << endl;
    }



    
}

