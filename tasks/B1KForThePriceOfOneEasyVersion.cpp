#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair

using namespace std;

class B1KForThePriceOfOneEasyVersion {
public:
    void solve(std::istream &in, std::ostream &out) {
        int t;
        in >> t;
        while (t--) {
            int n, k, p;
            in >> n >> p >> k;

            vector<int> v(n);

            for (int i = 0; i < n; ++i)in >> v[i];

            sort(all(v));

            int ans = 0;
            int cn1 = 0;
            long long sum1 = 0;
            for (int i = 1; i < n; i = i + 2) {
                if (sum1 + v[i] > p)break;
                sum1 += v[i];
                cn1 += 2;
            }
            ans = max(ans, cn1);
            if (p >= v[0]) {
                int cn2 = 1;
                long long sum2 = v[0];
                for (int i = 2; i < n; i = i + 2) {
                    if (sum2 + v[i] > p)break;
                    sum2 += v[i];
                    cn2 += 2;
                }
                ans = max(ans, cn2);
            }
            out << ans << '\n';
        }
    }
};