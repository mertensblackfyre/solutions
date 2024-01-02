#include <bits/stdc++.h>


int main() {
	int n = 5;
	int m = 11;
	long long x = 1;
	for (int i = 2; i <= n; i++) {
		x = (x * i) % m;
	}

	std::cout << x % m << "\n";	
}
