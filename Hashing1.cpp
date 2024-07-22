#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
    int t;
    cin>>t;
    vector<int>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    int hash[100]={0};
    for(int i=0;i<t;i++){
        hash[v[i]]+=1;
    }
    for(int i=0;i<t;i++){
        cout<<i<<"  has a frequency of "<<hash[i]<<" "<<endl;
    }
    }
}
