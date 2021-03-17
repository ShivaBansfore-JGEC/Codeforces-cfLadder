#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    int cnt7=-1;
    for(int i=n;i>=0;i--){
        if(n < i*7 ) continue;
 
        if((n-7*i)>=0 && (n-(i*7))%4==0){
            cnt7=i;
            break;
        }
    }
 
    if(cnt7==-1){
        cout<<"-1"<<endl;
        return 0;
    }
 
    int cnt4=(n-cnt7*7)/4;
    for(int i=1;i<=cnt4;++i) cout<<'4';
    for(int i=1;i<=cnt7;++i) cout<<'7';
 
 
    return 0;
}