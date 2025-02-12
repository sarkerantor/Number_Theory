#include<bits/stdc++.h>
using namespace std;
void power(int n,int p){
    int res=1;
    while (p)
    {
        if(p%2==0){
            n*=n;
            p/=2;
        }
        else{
            res*=n;
            p--;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        power(n,p);
    }
    return 0;
}
