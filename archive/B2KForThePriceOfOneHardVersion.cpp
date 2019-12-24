#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair
#define INF 1LL<<50
using namespace std;

typedef long long int64;

class B2KForThePriceOfOneHardVersion {
public:
    void solve(std::istream &in, std::ostream &out) {
        int t;
        in >> t;
        while (t--) {
            int n, k, p;
            in >> n >> p >> k;

            vector<int> v(n);
            vector<int> cost(n + 1);

            for (int i = 0; i < n; ++i)in >> v[i];

            sort(all(v));

            int ans = 0;
            cost[0] = 0;
            for (int i = 0; i + 1 < k; ++i) {
                cost[i + 1] = cost[i] + v[i];
            }

            for (int i = k - 1; i < n; ++i) {
                cost[i + 1] = min(cost[i + 1 - k], cost[i]) + v[i];
            }
            
            for (int i = n; i >= 0; --i) {
                if (cost[i] <= p) {
                    ans = i;
                    break;
                }
            }
            out << ans << '\n';
        }
    }
};