#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

class ARomanAndBrowser {
public:
	void solve(std::istream& in, std::ostream& out) {
		int n, k, seq[111];
		in >> n >> k;
		for (int i = 0; i < n; ++i) in >> seq[i];

		int ans = 0;
		for (int i = 1; i <= k; ++i) {
			int a = 0, b = 0;
			for (int j = 0; j < n; ++j) {
				if ((j - i) % k == 0) continue;
				if (seq[j] == -1)a++;
				else b++;
			}
			ans = max(ans, abs(a - b));
		}
		out << ans;
	}
};