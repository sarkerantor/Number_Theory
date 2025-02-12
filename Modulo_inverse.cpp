#include<bits/stdc++.h>
using namespace std;
int power(int n,int p,int m){
    int res=1;
    while (p)
    {
        if(p%2==0){
            n=(n*n)%m;
            p/=2;
        }
        else{
            res=(res*n)%m;
            p--;
        }
    }
    return res%m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m;
        //(a/b)%m=(a*(b^(m-2)))%m
        int x=power(b,m-2,m);
        int ans=((a%m)*(x%m))%m;
        cout<<ans<<endl;
    }
    return 0;
}
