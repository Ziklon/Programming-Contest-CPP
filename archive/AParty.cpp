#include <bits/stdc++.h>

#define fi first
#define se second
#define ll long long
#define ALL(t) t.begin(),t.end()
#define SZ(x) ((int)((x).size()))

using namespace std;

int parent[2000], level[2000];

void dfs(int root) {
    if (level[root] > 0)return;
    level[root] = 1;
    if (parent[root] >= 0) {
        dfs(parent[root]);
        level[root] += level[parent[root]];
    }
}

class AParty {
public:
    void solve(std::istream &in, std::ostream &out) {
        int n;
        in >> n;
        for (int i = 0; i < n; ++i)in >> parent[i], parent[i]--;

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            dfs(i);
            ans = max(ans, level[i]);
        }

        out << ans << '\n';
    }
};