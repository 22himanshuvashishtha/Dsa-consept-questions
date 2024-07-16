#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        vector<long >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        long long  ans=sqrt(sum);
        if(sum==(ans*ans)){
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
    return 0;
}
