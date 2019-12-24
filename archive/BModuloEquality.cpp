#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair

using namespace std;

class BModuloEquality {
public:
    void solve(std::istream &in, std::ostream &out) {
        int n, m;
        in >> n >> m;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)in >> a[i];
        for (int i = 0; i < n; ++i)in >> b[i];

        sort(all(b));
        set<int> S;

        int ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int k = (b[0]  - a[i] + m) % m;

            if (S.count(k))continue;

            vector<int> tmp(n);
            for (int j = 0; j < n; ++j) tmp[j] = (k + a[j]) % m;

            sort(all(tmp));

            if (tmp == b) {
                ans = min(ans, k);
            }
            S.insert(k);
        }
        out << ans << endl;
    }
};