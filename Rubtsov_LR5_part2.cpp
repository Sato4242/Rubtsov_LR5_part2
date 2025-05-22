#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    int K;
    int D;

    cout << "Введите натуральное число K: ";
    cin >> K;

    do {
        cout << "Введите цифру D (1-9): ";
        cin >> D;
    } while (D < 1 || D > 9);

    int rightAdded = K * 10 + D;
    cout << "Число с добавленной справа цифрой: " << rightAdded << endl;
    
    string leftAdded = to_string(D) + to_string(K);
    cout << "Число с добавленной слева цифрой: " << leftAdded << endl;

    return 0;
}