#include<bits/stdc++.h>
using namespace std;
void bigmod(string str,int m){
    int ans=0;
    for(int i=0;i<str.size();i++){
        ans=ans*10+(str[i]-'0');
        ans%=m;
    }
    if(ans%m==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int m;
        cin>>m;
        bigmod(str,m);
    }
    return 0;
}
