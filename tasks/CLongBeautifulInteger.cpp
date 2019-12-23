#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair

using namespace std;

class CLongBeautifulInteger {
public:
    void solve(std::istream &in, std::ostream &out) {
        int n, k;
        in >> n >> k;

        string s;
        in >> s;

        string t = s;

        for (int i = k; i < n; ++i) t[i] = t[i - k];

        out << n << '\n';


        if (t >= s) out << t << '\n';
        else {
            for (int i = k - 1; i >= 0; --i) {
                if (t[i] == '9')t[i] = '0';
                else {
                    t[i]++;
                    break;
                }
            }
            for (int i = k; i < n; ++i) t[i] = t[i - k];
            out << t << '\n';
        }
        
    }
};