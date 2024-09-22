#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
private:
    int dMonth;
    int dDay;
    int dYear;

public:
    // Constructor
    dateType(int month = 1, int day = 1, int year = 1900);

    // Setters
    void setDate(int month, int day, int year);

    // Getters
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Utility functions
    bool isLeapYear(int year) const;
    int getDaysInMonth(int month, int year) const;

    // Print function
    void print() const;
};

#endif
