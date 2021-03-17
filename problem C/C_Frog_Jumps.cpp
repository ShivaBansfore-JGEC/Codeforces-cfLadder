#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int m=s.length();
        int ans=0;
        int pos=0;
        for(int i=0;i<m;i++){
            if(s[i]=='R'){
                ans=max(ans,(i+1-pos));
                pos=i+1;
            }
        }
        ans=max(ans,m+1-pos);
        cout<<ans<<endl;
    }
    return 0;
}