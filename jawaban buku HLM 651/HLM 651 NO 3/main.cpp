#include <iostream>
#include <iomanip>

using namespace std;

struct Division
{
    double  FirstQuarterSales,
            SecondQuarterSales,
            ThirdQuarterSales,
            FourthQuarterSales,
            TotalAnnualSales,
            AverageQuarterlySales;
};

void userInput (Division input);

int main()
{
    Division    East,
                North,
                West,
                South;

    userInput(East);
    userInput(North);
    userInput(West);
    userInput(South);

    return 0;
}

void userInput(Division input)
{
    cout << "Please input the First-Quarter Sales " << endl;
    cin >> input.FirstQuarterSales;
    while (input.FirstQuarterSales < 0)
    {
        cout << "Please input the right value" << endl;
        cin >> input.FirstQuarterSales;
    }
    cout << "Please input the Second-Quarter Sales " << endl;
    cin >> input.SecondQuarterSales;
    while (input.SecondQuarterSales < 0)
    {
        cout << "Please input the right value" << endl;
        cin >> input.SecondQuarterSales;
    }
    cout << "Please input the Third-Quarter Sales " << endl;
    cin >> input.ThirdQuarterSales;
    while (input.ThirdQuarterSales < 0)
    {
        cout << "Please input the right value" << endl;
        cin >> input.ThirdQuarterSales;
    }
    cout << "Please input the Fourth-Quarter Sales " << endl;
    cin >> input.FourthQuarterSales;
    while (input.FourthQuarterSales < 0)
    {
        cout << "Please input the right value" << endl;
        cin >> input.FourthQuarterSales;
    }
    input.TotalAnnualSales = input.FirstQuarterSales + input.SecondQuarterSales
                            + input.ThirdQuarterSales + input.FourthQuarterSales;
    input.AverageQuarterlySales = input.TotalAnnualSales/4;
    cout << setw(30) << left << "The First-Quarter Sales " << input.FirstQuarterSales << endl;
    cout << setw(30) << left << "The Second-Quarter Sales " << input.SecondQuarterSales << endl;
    cout << setw(30) << left << "The Third-Quarter Sales " << input.ThirdQuarterSales << endl;
    cout << setw(30) << left << "The Fourth-Quarter Sales " << input.FourthQuarterSales << endl;
    cout << setw(30) << left << "The total annual Sales " << input.TotalAnnualSales << endl;
    cout << setw(30) << left << "The Average quarterly Sales " << input.AverageQuarterlySales << endl;
}
