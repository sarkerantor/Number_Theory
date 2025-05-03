#include<bits/stdc++.h>
using namespace std;
int extendGCD(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int g=extendGCD(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
int main(){
    //The equation is 39x+15y=12
    int a=39,b=15,c=12;
    int x,y;
    int g=extendGCD(a,b,x,y);
    if(c%g!=0)cout<<"No solution"<<endl;
    else{
        x*=(c/g);
        y*=(c/g);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
/*
Output:
x=8,y=-20
*/
