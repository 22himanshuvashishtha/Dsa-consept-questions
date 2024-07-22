#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
    int t,n;
    cin>>t>>n;
    vector<string>v(t);
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        v[i]=s;
    }
    vector<int>m;
    for(int i=0;i<t-1;i++){
        string s1=v[i];
        for(int j=i+1;j<t;j++){
            string s2=v[j];
            int count=0;
            for(int k=0;k<n;k++){
                count+=abs(int(s1[k])-int(s2[k]));
            }
            m.push_back(count);
        }
    }
    int ans = *min_element(m.begin(), m.end());
    cout<<ans<<endl;
    }
}
