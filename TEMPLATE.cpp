#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using str = string;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;

#define INF MAX_INT
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define nl '\n'
#define v vector

// Debug
template <typename T>
void de(T t) {
    cout << t << endl;
}

template<typename T, typename... Args>
void de(T t, Args... args) {
    cout << t << ", ";

    de(args...);
}

template<typename T>
void de(vector<T>& t) {
    cout << "[";
    for (int i=0; i<t.size(); i++) {
        cout << t[i];
	if (i != t.size()-1) {
	    cout << ", ";
	}
    }
    cout << "]" << endl;
}

template<typename T>
void de(T const& arr, int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
	if (i != n -1) 
            cout << ", ";
    }
    cout <<"]" << endl;
}

template<typename K, typename V>
void de(std::map<K, V> const &m) {
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
    cout << " ------- " << nl;
}



/*----------------------------------------------------------------*/

int main(void) {
	int n;
	cin >> n;
}

