#include "dateType.h"
#include <iostream>

using namespace std;

// Constructor
dateType::dateType(int month, int day, int year) {
    setDate(month, day, year);
}

// Setters
void dateType::setDate(int month, int day, int year) {
    if (year >= 1900) {
        dYear = year;
    }
    else {
        dYear = 1900;  // default value
    }

    if (month >= 1 && month <= 12) {
        dMonth = month;
    }
    else {
        dMonth = 1;  // default value
    }

    if (day >= 1 && day <= getDaysInMonth(month, year)) {
        dDay = day;
    }
    else {
        dDay = 1;  // default value
    }
}

// Getters
int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

// Check if year is a leap year
bool dateType::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Get the number of days in a month
int dateType::getDaysInMonth(int month, int year) const {
    int days;
    switch (month) {
    case 2:  // February
        days = isLeapYear(year) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:  // April, June, September, November
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    return days;
}

// Print function
void dateType::print() const {
    cout << dMonth << "-" << dDay << "-" << dYear << endl;
}
