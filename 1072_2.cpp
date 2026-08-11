#include <iostream>
using namespace std;
using intt = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        intt n,k;
        cin >> n >> k;
        if(k>n) {
            cout << -1 << endl;
            continue;
        }
        if(k==n){
            cout << 0 << endl;
            continue;
        }
        intt res=0;
        bool b =false;
        while(n>0){
            if(n==k){
                b=true;
                break;
            }
            intt x = n/2; intt y = n-x;
            if(k<= x) 
                n=x;
            else if(k <= y)
            n=y;
            else{
                b=false;
                break;
            }
            res++;
            if(n==k){
                b=true; break;            }
                if(n<k){
                    b=false;
                    break;
                }
        }
        if(b){
            cout << res << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}