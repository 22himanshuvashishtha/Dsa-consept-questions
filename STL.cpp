#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>f(n+1);
    for (int i = 1; i <= n; i++) {
        f[i] = make_pair(arr[i], i);
    }

    sort(f.begin() + 1, f.end());
    for (int i = 1; i <= n; i++) {
        cout << f[i].second << " ";
    }
}
