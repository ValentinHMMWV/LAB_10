#include "tasks.h"

bool TTime::isValid() {
    return (h >= 0 && h < 24 &&
        m >= 0 && m < 60 &&
        s >= 0 && s < 60);
}

void TTime::input() {
    cout << "Enter time (h m s): ";
    cin >> h >> m >> s;
}

void TTime::convert() {
    if (!isValid()) {
        h = m = s = 0;
        PM = false;
        return;
    }

    if (h >= 12) {
        PM = true;
        if (h > 12) h -= 12;
    }
    else {
        PM = false;
        if (h == 0) h = 12;
    }
}

void TTime::output() {
    cout << "12h format: "
        << h << ":" << m << ":" << s
        << (PM ? " PM" : " AM") << endl;
}

void task1() {
    cout << "\n--- Task 1 ---\n";

    for (int i = 0; i < 5; i++) {
        TTime t;
        t.input();
        t.convert();
        t.output();
    }
}
