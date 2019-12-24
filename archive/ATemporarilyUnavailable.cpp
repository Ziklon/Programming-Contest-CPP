#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair

using namespace std;

class ATemporarilyUnavailable {
public:
    void solve(std::istream &in, std::ostream &out) {

        int t;
        in >> t;

        while (t--) {
            int a, b, c, r;
            in >> a >> b >> c >> r;

            if (a > b) swap(a, b);

            int x = max(a, c - r);
            int y = min(b, c + r);

            if (x > b || y < a) {
                out << b - a << '\n';
            } else if (y < x) {
                out << 0 << '\n';
            } else {
                out << (b - a) - (y - x) << '\n';
            }
        }
    }
};