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
        
        intt res=0;
        
        while(k<n){
            if(n&1){
                n=(n+1)/2;
            }else
            n/=2;
            
            res++;
            }
            if(n==k)
            cout <<res <<endl;
            else
            cout << -1 << endl;
    }
    return 0;
}