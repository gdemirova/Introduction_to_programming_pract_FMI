#include <iostream>

int countDigit(int n, int digit) {
      	int counter = 0;
      
      	while(n > 0){
        		if (n % 10 == digit) {
        			counter++;
        		}
        		n /= 10;
      	}
      	
      	return counter;
}

bool isPermutation(int num1, int num2) {
      	for (int i = 0; i < 10; i++) {
        		if (countDigit(num1,i) != countDigit(num2,i)) {
        			return false;
        		}
      	}
      	return true;
}

int main()
{
      	int n1, n2;
      	std::cin >> n1 >> n2;
      	std::cout << (isPermutation(n1, n2) ? "true" : "false");
}
