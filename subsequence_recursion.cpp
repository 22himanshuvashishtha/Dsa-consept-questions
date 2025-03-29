#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string str) {
    if (str.empty()) {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    char ch = str[0];
    string ros = str.substr(1);
    vector<string> rres = gss(ros);
    vector<string> mres;

    for (string rstr : rres) {
        mres.push_back("" + rstr);
    }

    for (string rstr : rres) {
        mres.push_back(ch + rstr);
    }

    return mres;
}

int main() {
    string str;
    cin >> str;
    vector<string> res = gss(str);

    for (string s : res) {
        cout << s << endl;
    }

    return 0;
}
