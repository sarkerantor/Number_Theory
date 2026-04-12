#include<bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
using namespace std;
const int N=1e6+5;
ll fact[N],invFact[N];
ll power(ll b,ll p){
    ll res=1;
    while(p){
        if(p&1)res=(res*b)%mod;
        b=(b*b)%mod;
        p>>=1;
    }
    return res;
}
void precompute(){
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    invFact[N-1]=power(fact[N-1],mod-2);
    for(int i=N-2;i>=0;i--){
        invFact[i]=(invFact[i+1]*(i+1))%mod;
    }
}
ll nCr(int n,int r){
    if(r>n)return 0;
    return (((fact[n]*invFact[r])%mod)*invFact[n-r])%mod;
}
int main(){
    precompute();
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
