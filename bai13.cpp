#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool final = false;
    vector<string> v;
    while(n--) {
        string s; cin >> s;
        v.push_back(s);
    }
    //khoi tao
    sort(v.begin(), v.end());
    //sinh
    while(!final) {
        int i = v.size() - 1;
        for(int  j= 0; j < v.size(); j++) {
            cout << v[j] << " ";
        }
        cout << endl;
        while(i >= 0 && v[i] > v[i+1]) --i;
        if(i == -1) final = true;
        else {
            int j = v.size() - 1;
            while(v[i] > v[j]) --j;
            swap(v[i], v[j]);
            reverse(v.begin() + i, v.end());
        }
    }
}