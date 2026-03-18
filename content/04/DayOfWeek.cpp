/*
    File:        DayOfWeek.cpp
    Author:      D. Sullivan
    Course:      Cuyamaca College - CS 181
    Instructor:  D. Sullivan
    Date:        17 Mar 2026

    Description:
      Calculate and display day of week for any date after 01-01-2000

    Inputs:
      User Entered date

    Outputs:
      Predicted day of the week

    Notes:
      days per month are known
      1/1/2000 is Saturday
      2000 is leap year
      leap year every 4 years
  */

 #include <iostream>
using namespace std;

const int SUCCESS = 0;
const int DAYS_IN_MONTH[12] = 
{
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

string DAY_NAMES[7] = 
{
    "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
};

int main()
{
    int targetYear, targetMonth, targetDay;
    bool isLeapYear;

    // get input date from user
    cout << "\n\tEnter a date after New Year, 2000 as (YYYY MM DD) ";
    cin >> targetYear >> targetMonth >> targetDay;

    int numDays = 0;

    // count how many days to targetYear
    for( int year = 2000; year < targetYear; year++ )
    {
        isLeapYear = (year % 4 == 0);
        for( int month = 1; month <= 12; month++ )
        {
            numDays += DAYS_IN_MONTH[month - 1];
            if (month == 2 && isLeapYear)
            {
                numDays += 1; // add 1 for leap year
            }
        }
    }

    // count how many days to targetMonth
    isLeapYear = (targetYear % 4 == 0);
    for( int month = 1; month < targetMonth; month++ )
    {
        numDays += DAYS_IN_MONTH[month - 1];
        if (month == 2 && isLeapYear)
        {
            numDays++;
        }
    }

    // count how many days to targetDay in the month
    numDays += targetDay - 1;
    int weekDayNumber = numDays % 7;
    cout << "\n\tDay is " << DAY_NAMES[weekDayNumber] << " day: " << weekDayNumber << endl;

    cout << "\n\n\tdone.\n";
    return SUCCESS;
}
