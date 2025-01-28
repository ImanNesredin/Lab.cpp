#include <iostream>
#include <climits>

int main() {
    int n,num, maxNum = INT_MIN, minNum = INT_MAX;
    std::cout <<"Enter number of intigers to be compared :"<<std::endl;
    std::cin>>n;
    
    for (int i=0; i<n; i++ ){
      std::cout << "Enter an integer number: ";
      std::cin >> num;
      if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
    
    }

    std::cout << "Maximum number entered: " << maxNum << std::endl;
    std::cout << "Minimum number entered: " << minNum << std::endl;

    return 0;
}