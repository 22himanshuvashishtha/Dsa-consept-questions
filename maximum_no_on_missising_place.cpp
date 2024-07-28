#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
           cin>>v[i];
        }
        int j=1;
        for(int i=0;i<n;){
            if(v[i]==j){
                j++;
            }
            if(v[i]!=j){
                i++;
                j++;
            }
        }
        cout<<j-1<<endl;
    }
    return 0;
}
