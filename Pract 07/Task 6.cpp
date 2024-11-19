#include <iostream>

int toBinary(int userInput) {
      	const int base = 2;
      
      	unsigned long long binaryNum = 0;
      	unsigned power = 1;
      
      	while (userInput > 0) {
        		int digit = userInput % base;
        		binaryNum = binaryNum + power * digit;
        		power *= 10;
        		userInput /= base;
      	}
      
      	return binaryNum;
}


int countZeros(int n) {
      	int counter = 0;
      
      	while(n > 0) {
        		int lastDigit = n % 10;
        
        		if (lastDigit == 0) {
        			counter++;
        		}
        		n /= 10;
        	}
      	return counter;
}

int countOnes(int n) {
      	int counter = 0;
      
      	while (n > 0) {
        		int lastDigit = n % 10;
        
        		if (lastDigit == 1) {
        			counter++;
        		}
        		n /= 10;
      	}
      	return counter;
}

int main() 
{
      	int n;
      	std::cin >> n;
      
      	for (int i = 1; i <= n; i++) {
        		if (countZeros(toBinary(i)) == countOnes(toBinary(i))) {
        			std::cout << i << " ";
        		}
      	}
}
