#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll bigmod(ll b,ll p,ll m){
    ll res=1;
    while (p)
    {
        if(p%2){
            res=(res*b)%m;
            p--;
        }
        else{
            b=(b*b)%m;
            p/=2;
        }
    }
    return res;
}
int main(){
    ll b,p,m;
    cin>>b>>p>>m;
    cout<<bigmod(b,p,m)<<endl;
    return 0;
}
