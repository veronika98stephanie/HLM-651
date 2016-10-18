#include <iostream>

struct Weather
{
    double totalRainfall,
           highTemperature,
           lowTemperature,
           averageTemperature;
};

using namespace std;

int main()
{
    int month = 12;
    Weather calculate [month];

    for (int i = 0; i < month; i++)
    {
        cout << "Please input the total rainfall for month " << i+1 << endl;
        cin >> calculate[i].totalRainfall;
        cout << "Please input the high temperature " << endl;
        cin >> calculate[i].highTemperature;

        while (calculate[i].highTemperature <= -100 && calculate[i].highTemperature >= 140)
        {
            cout << "Please enter the right temperature" << endl;
            cin >> calculate[i].highTemperature;
        }

        cout << "Please input the low temperature " << endl;
        cin >> calculate[i].lowTemperature;

        while (calculate[i].lowTemperature <= -100 && calculate[i].highTemperature >= 140)
        {
            cout << "Please enter the right temperature" << endl;
            cin >> calculate[i].lowTemperature;
        }
        calculate[i].averageTemperature = (calculate[i].lowTemperature + calculate[i].highTemperature)/2;
        cout << "The temperature average is " << calculate[i].averageTemperature << endl;
    }

    int totalRainfallForTheYear = 0;

    for (int i = 0; i < month; i++)
    {
        totalRainfallForTheYear += calculate[i].totalRainfall;
    }

    cout << "Total rainfall for the year is " << totalRainfallForTheYear << endl;

    cout << "The average of rainfall per month " << totalRainfallForTheYear/month << endl;

    int averageOfAllAverageTemp = 0;

    for (int i = 0; i < month; i++)
    {
        averageOfAllAverageTemp += calculate[i].averageTemperature;
    }

    cout << "The average of all monthly average temperature is " << averageOfAllAverageTemp/month << endl;

    int highest = 0,
        position = 0;

    for (int i = 0; i < month; i++)
    {
        if (calculate[i].highTemperature > highest)
        {
            highest = calculate[i].highTemperature;
            position = i+1;
        }
    }

    cout << "The highest temperature for the year " << highest << " in month " << position << endl;

    int lowest = calculate[0].lowTemperature,
        positionLowest = 0;

    for (int i = 0; i < month; i++)
    {
        if (calculate[i].lowTemperature < lowest)
        {
            lowest = calculate[i].lowTemperature;
            positionLowest = i+1;
        }
    }

    cout << "The lowest temperature for the year " << lowest << " in month " << positionLowest << endl;


    return 0;
}
