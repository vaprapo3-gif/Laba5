#include <iostream>
#include <string>
using namespace std;

// Опис структури "Abiturient"
struct Abiturient {
    string fullname;        // Прізвище і ім'я абітурієнта
    string specialty;       // Назва спеціальності
    int examResult;         // Результат вступного іспиту
};

int main() {
    int SIZE;
    int passingScore;

    // Введення кількості абітурієнтів
    cout << "Введіть кількість абітурієнтів: ";
    cin >> SIZE;
    cin.ignore();

    // Введення прохідного бала
    cout << "Введіть прохідний бал: ";
    cin >> passingScore;
    cin.ignore();

    // Масив абітурієнтів
    Abiturient entrants[100];

    // Введення даних про абітурієнтів
    for (int i = 0; i < SIZE; i++) {
        cout << "\nАбітурієнт " << i + 1 << endl;

        cout << "Прізвище і ім'я: ";
        getline(cin, entrants[i].fullname);

        cout << "Назва спеціальності: ";
        getline(cin, entrants[i].specialty);

        cout << "Результат вступного іспиту: ";
        cin >> entrants[i].examResult;
        cin.ignore();
    }

    // Пошук абітурієнтів, у яких бал вищий за прохідний
    bool found = false;

    cout << "\nАбітурієнти, які мають бал більший, ніж прохідний:\n";

    for (int i = 0; i < SIZE; i++) {
        if (entrants[i].examResult > passingScore) {
            cout << entrants[i].fullname << " - "
                 << entrants[i].specialty << endl;
            found = true;
        }
    }

    // Якщо таких абітурієнтів немає
    if (!found) {
        cout << "Таких абітурієнтів не знайдено." << endl;
    }

    return 0;
}