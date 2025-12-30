#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll N=2e5+1,mod=1e9+7;
ll fact[N],invfact[N];
ll modpow(ll b,ll p){
    ll res=1;
    while(p){
        if(p&1)res=(res*b)%mod;
        b=(b*b)%mod;
        p>>=1;
    }
    return res;
}
ll nCr(ll n,ll r){
    if(r<0 || r>n)return 0;
    return ((fact[n]*invfact[r])%mod *invfact[n-r])%mod;
}
int main(){
    int n;
    cin>>n;
    fact[0]=1;
    for(int i=1;i<=2*n;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    invfact[2*n]=modpow(fact[2*n],mod-2);
    for(int i=2*n;i>0;i--){
        invfact[i-1]=(invfact[i]*i)%mod;
    }
    //catalan number =(1/(n+1))*nCr(2n,n)
    ll catalan=(nCr(2*n,n)*modpow(n+1,mod-2))%mod;
    cout<<catalan<<endl;
    return 0;
}
