#include <iostream>

int findGCDTwoNums(int n, int k) {

    	  if (n < k) {
          		int temp = n;
          		n = k;
          		k = temp;
    	  }
    
    	  while (k != 0) {
          		int mod = n % k;
          		n = k;
          		k = mod;
    	  }
    	  return n;
}

void substraktNum(int numerator, int denomerator) {

      	int substrakt = findGCDTwoNums(numerator, denomerator);
      	int newNumerator = numerator / substrakt;
      	int newDenomerator = denomerator / substrakt;
      
      	std::cout << newNumerator << "/" << newDenomerator;
}

int main() 
{
      	int x, y;
      	std::cin >> x >> y;
      
      	substraktNum(x, y);
}
