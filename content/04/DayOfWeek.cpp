/* 
    File:        DayOfWeek.cpp
    Author:      D.Sullivan daniel.sullivan@gcccd.edu
    Course:      Cuyamaca College - CS 181
    Instructor:  D. Sullivan
    Date:        17 March 2026

    Description:
      Use nested loops to count the number of days between Jan 1, 2000 and a 
      future date entered by the user. Then use modulus to determine the day 
      of the week for that future date.

    Inputs:
      user input for future date in format YYYY MM DD

    Outputs:
      The day of the week for the given date.

    Notes:
        - The program assumes the user will enter a valid future date.
        - The program uses a simple leap year rule (every 4 years).
        - The day of the week is calculated based on the number of days 
            since Jan 1, 2000, which was a Saturday.
*/

#include <iostream>
using namespace std;

// Constants for days in each month
const int DAYS_IN_MONTH[12] = {
    31, // Jan
    28, // Feb (will adjust for leap years)
    31, // Mar
    30, // Apr
    31, // May
    30, // Jun
    31, // Jul
    31, // Aug
    30, // Sep
    31, // Oct
    30, // Nov
    31  // Dec
};

// Determine if a year is leap year
int main()
{
    int targetYear, targetMonth, targetDay;
    bool isLeapYear;

    cout << "Enter a date after New Year, 2000 (YYYY MM DD): ";
    cin >> targetYear >> targetMonth >> targetDay;

    // Determine if the target year is a leap year
    isLeapYear = (targetYear % 4 == 0);

    // Days of week: 0 = Saturday (because Jan 1 2000 was a Saturday)
    string dayNames[7] = {
        "Saturday", "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday"
    };

    int dayOfWeek = 0; // Start at Jan 1 2000

    // Count days per year from 1 Jan 2000 to targetYear
    for (int year = 2000; year < targetYear; year++)
    {
        for (int month = 1; month <= 12; month++)
        {
            int days = DAYS_IN_MONTH[month - 1];

            // Adjust February for leap year
            if (month == 2 && isLeapYear)
                days = 29;

            dayOfWeek = (dayOfWeek + days) % 7;
        }
    }

    // Count days per month in targetYear up to targetMonth
    for (int month = 1; month < targetMonth; month++)
    {
        int days = DAYS_IN_MONTH[month - 1];
        if (month == 2 && isLeapYear)
            days = 29;

        dayOfWeek = (dayOfWeek + days) % 7;
    }

    // Count days in the month (minus 1 since Jan 1 is day 0)
    dayOfWeek = (dayOfWeek + (targetDay - 1)) % 7;

    cout << "That date is a: " << dayNames[dayOfWeek] << endl;

    return 0;
}
