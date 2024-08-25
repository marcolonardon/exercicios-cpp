#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    int n;
    std::cin >> n; 

    std::vector<int> total(n, 0);  

    std::cin.ignore(); 

    for (int i = 0; i < n; ++i) {
        std::string num;
        std::getline(std::cin, num); 

        int sum = 0;
        for (char digit : num) {
            if (isdigit(digit)) { 
                int digitValue = digit - '0';
                sum += leds[digitValue];
            }
        }

        total[i] = sum; 
    }

    for (int i = 0; i < n; ++i) {
        std::cout << total[i] << " leds" << std::endl;
    }

    return 0;
}
