#include<bits/stdc++.h>
using namespace std;
vector<int>v;
//seive part 
void seive(int n){
    int prime[10001];
    memset(prime,0,sizeof(prime));
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0)v.push_back(i);
    }
}
//segmented seive part
void init(int l,int r){
    if(l==1)l++;
    int mx=r-l+1;
    vector<int>arr(mx+1,0);
    for(int p:v){
        if(p<=sqrt(r)){
            int i=(l/p)*p;
            if(i<l)i+=p;
            for(;i<=r;i+=p){
                if(i!=p){
                    arr[i-l]=1;
                }
            }
        }
    }
    for(int i=0;i<mx;i++){
        if(arr[i]==0)cout<<i+l<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    seive(10000);
    while(t--){
        int l,r;
        cin>>l>>r;
        init(l,r);
        cout<<endl;
    }
    return 0;
}
