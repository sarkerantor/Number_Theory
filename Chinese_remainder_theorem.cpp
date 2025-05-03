#include<bits/stdc++.h>
using namespace std;
int main(){
    //Chinese remainder theorem X=((a1*M1*M1^-1)+(a2*M2*M2^-1)+(a3*M3*M3^-1)+....(an*Mn*Mn^-1))MOD
    int a[]={2,3,2};//the value of a series
    int m[]={3,5,7};
    int n=sizeof(a)/sizeof(a[0]);
    int MOD=1;
    for(int i=0;i<n;i++)MOD*=m[i];
    vector<int>M,M_Inv;
    for(int i=0;i<n;i++){
        int b=MOD/m[i];
        M.push_back(b);
        M_Inv.push_back(b%m[i]);
    }
    //a* M* M_Inv
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=(a[i]*M[i]*M_Inv[i]);
        ans%=MOD;
    }
    cout<<"X = "<<ans;
    return 0;
}
