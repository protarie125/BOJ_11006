#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		int a, b;
		cin >> a >> b;

		const auto& c = 2 * b - a;
		cout << c << ' ' << b - c << '\n';
	}

	return 0;
}