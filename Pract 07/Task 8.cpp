#include <iostream>

int sumDigits(int n) {
      	int sum = 0;
      	while (n > 0) {
        	int lastDigit = n % 10;
        	sum += lastDigit;
        	n /= 10;
      	}
      
      	return sum;
}

int maxSum(int n) {
      	int maxSumDigits = 0;
      	int maxNumber = 0;
      	int userInput;
      
      	for (int i = 0; i < n; i++) {
          		std::cin >> userInput;
          		int currentSumDigits = sumDigits(userInput);
          
          		if (currentSumDigits > maxSumDigits) {
              			maxSumDigits = currentSumDigits;
              			maxNumber = userInput;
          		}
      	}
      	return maxNumber;
}

int main() 
{
      	int n;
      	std::cin >> n;
      	std::cout << maxSum(n);
}
