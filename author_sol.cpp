#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// decrement 'n' since 1 will be stored initially in the array
	n -= 1;
	vector<int> v;
	// store 1 in the array
	v.emplace_back(1);
	for (int i = 0; i < n; i++) {
		// add 1 to the array
		v.emplace_back(1);
		while ((int) v.size() > 1) {
			// current = index of the last element
			int current = (int) v.size() - 1;
			// previous = index of the element before the last element
			int previous = current - 1;
			// check if the last two elements are the same
			if (v[current] != v[previous]) {
				// if they aren't, then break this while-loop
				break;
			}
			// otherwise, store the last element in a temporary variable
			int temp = v[current];
			// delete the last two elements in the array
			v.pop_back();
			v.pop_back();
			// increment the value in the temporary variable when you store it in the array
			v.emplace_back(temp + 1);
		}
	}
	// print the current elements formed in 'n' operations
	for (auto x : v) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
