#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    std::cout << "Masukkan angka (positif): ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " merupakan bilangan prima." << std::endl;
    } else {
        std::cout << number << " bukan bilangan prima." << std::endl;
    }

    return 0;
}
