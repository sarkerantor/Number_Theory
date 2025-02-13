#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
using namespace std;
ll fact(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=(ans*i)%mod;
    }
    return ans%mod;
}
ll power(ll b,ll p){
    ll res=1;
    while(p){
        if(p%2){
            res=(res*b)%mod;
            p--;
        }
        else{
            b=(b*b)%mod;
            p/=2;
        }
    }
    return res%mod;
}
ll ncr(ll n,ll r,ll k){
    ll ans=1;
    ll ans1=power(r,mod-2);
    ll ans2=power(k,mod-2);
    ans=(ans*n)%mod;
    ans=(ans*ans1)%mod;
    ans=(ans*ans2)%mod;
    return ans%mod;
}
int main(){
    ll n,r;
    cin>>n>>r;
    ll n1=fact(n);
    ll r1=fact(r);
    ll k=fact(n-r);
    ll ans=ncr(n1,r1,k);
    cout<<ans<<endl;
    return 0;
}
