#include <iostream>

int powerOfTen(int power) {
    int result = 1;
    for (int i = 1; i < power; i++)
    {
        result *= 10;
    }
    return result;
}

int getDigit(int num, int k) {
    int position = powerOfTen(k - 1);
    return (num / position) % 10;
}

int setDigit(int num, int k, int newDigit) {
    int position = powerOfTen(k - 1);
    int currentDigit = (num / position) % 10;
    return num - currentDigit * position + newDigit * position;
}

void swapKthDigits(int m, int n, int k) {
    int mKthDigit = getDigit(m, k);
    int nKthDigit = getDigit(n, k);

    int newM = setDigit(m, k, nKthDigit);
    int newN = setDigit(n, k, mKthDigit);
  
    std::cout << "New m = " << newM << std::endl << "New n = " << n;
}

int main()
{
    int m, n, k;
    std::cin >> m >> n >> k;

    swapKthDigits(m, n, k);
}
