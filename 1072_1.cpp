#include <iostream>
using namespace std;
using intt = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        intt s,k,m;
        cin >> s >> k >> m;
        intt count = m/k;
        intt end = count*k;
        intt res;
        if(count ==0)
        res=s;
        else{
            if(s<= k) res=s;
            else{
                res = (count % 2 == 1) ? k : s;
            }
        }
        long long tri = m - end;
        long long ans = res - tri;
        if(ans < 0) ans=0;
        cout << ans << endl;
    }

    return 0;
}