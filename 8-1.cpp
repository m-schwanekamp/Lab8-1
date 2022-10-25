//Lab8-1
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int dayOfWeek(int month, int day, int year);
/*
dayOfWeek - Computes the weekday of a given date.
@param year  the year
@param month the month (1 = January ...  12 = December)
@param day   the day of the month
@return the weekday (0 = Saturday ... 6 = Friday)
*/

int main() {
    int h;
    int week_day;
    int q;
    int day;
    int m;
    int month;
    int Y;
    int year;

    cout << "Enter a date or Q to quit: ";
    if (cin >> m >> q >> Y) {
        cout << "The date is ";
        dayOfWeek(m, q, Y);
        h = dayOfWeek(month, day, year);
        if (h == 0) cout << "Saturday, ";
        if (h == 1) cout << "Sunday, ";
        if (h == 2) cout << "Monday, ";
        if (h == 3) cout << "Tuesday, ";
        if (h == 4) cout << "Wednesday, ";
        if (h == 5) cout << "Thursday, ";
        if (h == 6) cout << "Friday, ";
       // cout << "The date is " << dayOfWeek(month, day, year);
        if (m == 1) {
            cout << "January ";
        }
        if (m == 2) {
            cout << "February ";
        }
        if (m == 3) {
            cout << "March ";
        }
        if (m == 4) {
            cout << "April ";
        }
        if (m == 5) {
            cout << "May ";
        }
        if (m == 6) {
            cout << "June ";
        }
        if (m == 7) {
            cout << "July ";
        }
        if (m == 8) {
            cout << "August ";
        }
        if (m == 9) {
            cout << "September ";
        }
        if (m == 10) {
            cout << "October ";
        }
        if (m == 11) {
            cout << "November ";
        }
        if (m == 12) {
            cout << "December ";
        }
        
        if (1 <= q && q <=31) {
            cout << q << ", ";
        }
        cout << Y << endl;
        
    }
    else return 0;
}

int dayOfWeek(int month, int day, int year) {
    int h;
    h = (day + (((month + 1)*26)/10) + year + (year/4) + (6*(year/100))+(year/400));
    h = h % 10;
    return h;
}
