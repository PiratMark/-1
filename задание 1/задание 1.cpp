#include <iostream>

int main() {
	const auto n = 500;
	while (true) {
		std::cout << "a: ";
		int a;
		std::cin >> a;
		auto sum = 0;
		if (a == n) sum = a;
		else {
			auto sn = n * (n + 1) / 2;
			auto sa = a * (a + 1) / 2;
			auto tmp = abs(sn - sa);
			// 1 вариант. 500 не входит в заданный диапазон
			sum = a < n ? tmp + a - n : tmp;
			// 2 вариант. 500 входит в заданный диапазон
			//sum = a < n? tmp + a : tmp + n;
		}
		std::cout << "sum: " << sum << "\n\n";
	}
}