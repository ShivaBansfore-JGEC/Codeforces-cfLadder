#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<long long> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    
    long long pre_sum[n+1];
 
    for(int i=0;i<n+1;i++){
        pre_sum[i]=0;
    }
    pre_sum[0]=a[0];
    for(int i=1;i<n;i++){
        pre_sum[i]=pre_sum[i-1]+a[i];
    }
    //algo first find the dormitory number 
    //then find the room number 
    //for(int i=0;i<n;i++)cout<<pre_sum[i]<<" ";
    cout<<endl;
    long long i=0,j=-1,prev=0,sum=0;
    while(true){
        if(i==m) break;
 
        if(b[i]<=sum){
            //cout<<b[i]<<" "<<sum<<" "<<j<<endl;
             if(j>=1)
                cout<<j+1<<" "<<b[i]-pre_sum[j-1]<<endl;
            else cout<<j+1<<" "<<b[i]<<endl;
            i++;
        }else{
            //cout<<i<<" "<<sum<<endl;
            j++;
            sum+=a[j];
        }
    }
 
 
}
 
 
int main(){
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}