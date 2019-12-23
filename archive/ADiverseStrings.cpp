#include <bits/stdc++.h>

#define fi first
#define se second
#define ll long long
#define ALL(t) t.begin(),t.end()
#define SZ(x) ((int)((x).size()))

using namespace std;

class ADiverseStrings {
public:
    void solve(std::istream &in, std::ostream &out) {

        int n;
        string s;
        in >> n;
        while (n--) {
            in >> s;
            sort(ALL(s));
            bool ok = 1;
            for (int i = 0; i + 1 < s.size(); ++i) {
                if (s[i + 1] - s[i] != 1)ok = 0;
            }

            out << (ok ? "Yes" : "No") << '\n';
        }

    }
};