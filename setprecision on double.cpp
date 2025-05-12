#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    cin >> l >> n;
    vector<int> v(l);
    for (int i = 0; i < l; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double max_gap = max(2.0 * v[0], 2.0 * (n - v[l - 1])); 
    for (int i = 1; i < l; i++) {
        max_gap = max(max_gap, double(v[i] - v[i - 1]));
    }
    cout << fixed << setprecision(10) << max_gap / 2.0 << endl;
    return 0;
}
