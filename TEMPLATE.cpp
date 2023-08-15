#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,avx512,fma") 
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;

#define INF INT_MAX 
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define nl '\n'
#define PI 3.1415926535897932384626433832795  
#define sz(x) (int((x).size()))

// Debug
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cout << nl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << H << ' '; dbg_out(T...); }
#define de(...) cerr << "(" << #__VA_ARGS__ << "): ", dbg_out(__VA_ARGS__)

/*----------------------------------------------------------------*/

int main(void) {
	int n;
	cin >> n;
}

