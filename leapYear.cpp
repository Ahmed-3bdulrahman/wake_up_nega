#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if(((year % 4 == 0) && (year % 100 != 0 )) || ((year % 100 == 0) && (year % 400 == 0))) {
        cout << year << " is a leap year" << endl;
        return true;
    }
    return false;
}

int main() {
    int day, month, year, dayNumber = 0;
    char slash;
    cin >> day >> slash >> month >> slash >> year;
    if((month >= 1 && month <= 12)&&(day >=1 && day <= 31)) {
        while(1 < month && month <= 12) {
            switch(month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dayNumber += 31;
                break;

                case 4:
                case 6:
                case 9:
                case 11:
                    dayNumber += 30;
                break;

                case 2:
                    if(isLeapYear(year)) {
                        dayNumber += 31;
                    } else {
                        dayNumber += 28;
                    }
                break;
            }
            month--;
        }
    }
    else {
        cout << "Enter Correct month or day";
        return 0;
    }  
    dayNumber += day;
    if(dayNumber >= 367) {
        dayNumber -= 2;
    }

    cout << "The day number is " << dayNumber;

    
    return 0;
}