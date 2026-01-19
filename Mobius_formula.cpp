#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int mu[N+1];
bool composite[N+1];
vector<int>prime;
void mobius_seive(){
    mu[1]=1;
    for(int i=2;i<N;i++){
        if(!composite[i]){
            prime.push_back(i);
            mu[i]=-1;
        }
        for(int val:prime){
            if(val*i>N)break;
            composite[i*val]=true;
            if(i%val==0){
                mu[i*val]=0;
                break;
            }
            else mu[i*val]=-mu[i];
        }
    }
}
int main(){
    mobius_seive();
    for(int i=1;i<=20;i++){
        cout<<"Mu("<<i<<")="<<mu[i]<<endl;
    }
    return 0;
}
