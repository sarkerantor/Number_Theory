#include<bits/stdc++.h>
using namespace std;
void findcatalan(int n){
    int catalan[n+1];
    catalan[0]=catalan[1]=1;
    for(int i=2;i<=n;i++){
        catalan[i]=0;
        for(int j=0;j<i;j++){
            catalan[i]+=catalan[j]*catalan[i-j-1];
        }
    }
    for(int i=0;i<=n;i++)cout<<catalan[i]<<" ";
}
int main(){
    int n=6;
    findcatalan(n);
    return 0;
}
