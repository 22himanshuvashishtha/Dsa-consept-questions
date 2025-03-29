#include<bits/stdc++.h>
using namespace std;

unordered_map<int, list<int>> m;

void addEdge(int u, int v, bool f) {
    m[u].push_back(v);
    if (f == false) {
        m[v].push_back(u);
    }
}

void printEdge() {
    for (auto it : m) {
        cout << it.first << "->";
        for (auto j : it.second) {
            cout << j << ",";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    bool f = false;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, f);
    }
    printEdge();
    return 0;
}
