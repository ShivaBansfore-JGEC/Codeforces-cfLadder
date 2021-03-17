#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
        mp[arr[i]]++;
    }
 
    vector<int> ans1,ans2;
    for(int v:s){
        if(mp[v]>2){
            cout<<"NO"<<endl;
            return;
        }else{
            if(mp[v]==1){
                ans2.push_back(v);
            }else if(mp[v]==2){
                ans1.push_back(v);
                ans2.push_back(v);
            }
 
        }
    }
 
    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(),ans2.end(),greater<int>());
 
    cout<<"YES"<<endl;
    cout<<ans1.size()<<endl;
 
    for(int u:ans1) cout<<u<<" ";
    cout<<endl;
 
    cout<<ans2.size()<<endl;
    for(int u:ans2) cout<<u<<" ";
    cout<<endl;
 
 
}
 
int main(){
    int t=1;
    while(t--) solve();
    return 0;
}