#include <bits/stdc++.h>
using namespace std;

const int BIG = 1e7;
int a[BIG];

int main() {
	int sum = 0;
	for (int i = 0; i < BIG; ++i) sum += a[i];
	cout << sum;
}
