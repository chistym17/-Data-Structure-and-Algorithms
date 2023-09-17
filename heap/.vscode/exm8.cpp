#include<bits/stdc++.h>

using namespace std;

vector<string> merge_sort_algo(vector<string> a);

vector<string> merge_sort_algo(vector<string> a) {
    int n = a.size();

    if(n <= 1) return a;
    else{
        int mid = n / 2;
        vector<string> b;
        vector<string> c;

        for(int i = 0; i < mid; i++) {
            b.push_back(a[i]);
        }

        for(int i = mid; i < n; i++) {
            c.push_back(a[i]);
        }

        vector<string> sb = merge_sort_algo(b);
        vector<string> sc = merge_sort_algo(c);
        int id1 = 0;
        int id2 = 0;

        vector<string> merged;
        for(int i = 0; i < n; i++) {
            if(id1 == sb.size()) {
                merged.push_back(sc[id2]);
                id2++;
            }
            else if(id2 == sc.size()) {
                merged.push_back(sb[id1]);
                id1++;
            }
            else if(sb[id1] < sc[id2]) {
                merged.push_back(sb[id1]);
                id1++;
            }
            else {
                merged.push_back(sc[id2]);
                id2++;
            }
        }

        return merged;
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<string> ans = merge_sort_algo(a);

    for(auto val: ans) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
