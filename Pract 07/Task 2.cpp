#include <iostream>

int findLCMTwoNums(int n, int k) {
	unsigned max = n > k ? n : k;
	unsigned lcm = max;

	while (lcm % n != 0 || lcm % k != 0) {
		lcm += max;
	}
	return lcm;
}

int findLCMFourNums(int x, int y, int z, int t) {
	int result = findLCMTwoNums(x, y);
	result = findLCMTwoNums(result, z);
	result = findLCMTwoNums(result, t);

	return result;
}

int main()
{
	int x, y,z,t;
	std::cin >> x >> y >> z >> t;
	std::cout << findLCMFourNums(x, y, z, t);
}
