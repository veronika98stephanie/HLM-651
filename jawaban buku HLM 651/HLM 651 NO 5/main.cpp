#include <iostream>
#include <string>

using namespace std;

int searchList(string month[], int SIZE, string months);

int SIZE = 12;

enum months {JANUARY, FEBRUARY, MARCH, APRIL, MAY,
            JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER,
            NOVEMBER, DECEMBER};
     months ran;

int main()
{

    int number,
        minutes;

    string month [SIZE] = {"january", "february", "march",
                            "april", "may", "june", "july",
                            "august", "september", "october",
                            "november", "december"};

    string mon;

    int hours[SIZE] = {744, 672, 744, 720, 744, 720, 744, 744, 720, 744, 720, 744};

    cout << "Please enter name month" << endl;
    cin >> mon;

    number = searchList(month, SIZE, mon);

    cout << "Please input the minutes " <<endl;
    cin >> minutes;

    if (minutes > hours[number]*60)
    {
        cout << "Validation failed" << endl;
    }else
    {
        cout << "Validation completed " << endl;
    }

    return 0;
}

    int searchList(string month[], int SIZE, string mon)
    {
        int position;
        for ( ran = JANUARY; ran < DECEMBER; ran = static_cast<months>(ran+1))
        {

            if (month[ran] == mon)
            {
                position = ran;
            }
        }return position;
    }
