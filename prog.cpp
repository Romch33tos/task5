#include <iostream>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "russian");
    int num;

    cout << "Введите натуральное число: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " является простым числом." << endl;
    } else {
        cout << num << " не является простым числом." << endl;
    }

    return 0;
}
