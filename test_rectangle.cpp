#include <iostream>
#include <cassert>
#include "rectangle.h"

using namespace std;

int passed = 0;
int failed = 0;

void checkTest(const char* name, double actual, double expected) {
    if (abs(actual - expected) < 0.000001) {
        cout << "[PASSED] " << name << endl;
        passed++;
    }
    else {
        cout << "[FAILED] " << name
             << " | Expected: " << expected
             << " | Actual: " << actual << endl;
        failed++;
    }
}

int main() {
    cout << "=== UNIT TESTING ===" << endl;


    checkTest("Area positive", area(10, 5), 50);
    checkTest("Area square", area(10, 10), 100);
    checkTest("Area zero", area(10, 0), 0);
    checkTest("Area one", area(1, 1), 1);

 
    checkTest("Perimeter positive", perimeter(10, 5), 30);
    checkTest("Perimeter square", perimeter(10, 10), 40);
    checkTest("Perimeter zero", perimeter(10, 0), 20);
    checkTest("Perimeter one", perimeter(1, 1), 4);

    cout << "\n=== TEST RESULTS ===" << endl;
    cout << "Passed: " << passed << endl;
    cout << "Failed: " << failed << endl;
    cout << "Total: " << passed + failed << endl;

    return failed == 0 ? 0 : 1;
}
