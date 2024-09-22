#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    // Test default constructor
    cout << "Testing default constructor ... " << endl;
    dateType defaultDate;
    defaultDate.print();
    cout << endl;

    // Test constructor with parameters
    cout << "Testing constructor with parameters ... " << endl;
    dateType customDate(2, 29, 2016);  // Leap year
    customDate.print();
    cout << endl;

    // Test invalid year
    cout << "Testing invalid year (1000) ... " << endl;
    customDate.setDate(2, 29, 1000);  // Invalid year
    customDate.print();
    cout << endl;

    // Test invalid month
    cout << "Testing invalid month (13) ... " << endl;
    customDate.setDate(13, 1, 2020);  // Invalid month
    customDate.print();
    cout << endl;

    // Test invalid day
    cout << "Testing invalid day (31 for April) ... " << endl;
    customDate.setDate(4, 31, 2020);  // Invalid day
    customDate.print();
    cout << endl;

    // Test valid date
    cout << "Testing valid date (August 15, 2016) ... " << endl;
    customDate.setDate(8, 15, 2016);  // Valid date
    customDate.print();
    cout << endl;

    return 0;
}
