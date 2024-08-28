#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;
const int MOD = 1000000007;
 
void solve() {
	string s;
	cin >> s;
	if (s[0] != 'y' && s[0] != 'Y') {cout << "NO\n";}
	else if (s[1] != 'e' && s[1] != 'E') {cout << "NO\n";}
	else if (s[2] != 's' && s[2] != 'S') {cout << "NO\n";}
	else {cout << "YES\n";}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}
