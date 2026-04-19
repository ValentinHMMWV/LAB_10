#include "tasks.h"

void Numbers::input() {
    cout << "Enter A, B, C: ";
    cin >> A >> B >> C;
}

void Numbers::check() {
    result = (A > 0 || B > 0 || C > 0);
}

void Numbers::output() {
    if (result)
        cout << "At least one number is positive\n";
    else
        cout << "No positive numbers\n";
}

void task3() {
    cout << "\n--- Task 3 ---\n";

    Numbers n;
    n.input();
    n.check();   
    n.output();
}
