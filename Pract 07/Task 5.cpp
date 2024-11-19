#include <iostream>

int powerOfTen(int power) {
      	int result = 1;
      
      	for (int i = 0; i < power; i++) {
      		  result *= 10;
      	}
      	return result;
}

int getKLastDigits(int n, int kDigits) {
	      return n % powerOfTen(kDigits);
}

int countDigits(int n) {
      	int counter = 0;
  
      	while (n > 0) {
        		n /= 10;
        		counter++;
      	}
      	return counter;
}

void putKDigitsInBeginning(int a, int b, int kDigits) {
      	int kDigitsNum = getKLastDigits(a, kDigits);
      	a /= powerOfTen(kDigits);
      	kDigitsNum *= powerOfTen(countDigits(b));
      	b += kDigitsNum;
      	
      	std::cout<< "New a = " << a << std::endl << "New b = " << b;
}

int main() 
{
      	int a, b, kDigits;
      	std::cin >> a >> b >> kDigits;
      	putKDigitsInBeginning(a,b,kDigits);
}
