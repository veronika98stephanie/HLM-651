#include <iostream>

using namespace std;

struct MonthlyBudget
{
    double Housing,
           Utilities,
           HouseholdExpenses,
           Transportation,
           Food,
           Medical,
           Insurance,
           Entertainment,
           Clothing ,
           Miscellaneous;
};

void getData (MonthlyBudget &one);
void comparison (int a, int b);

int main()
{
    MonthlyBudget one;

    getData (one);

    MonthlyBudget compare;

    compare.Housing = 500.00;
    compare.Utilities = 150.00;
    compare.HouseholdExpenses = 65.00;
    compare.Transportation = 50.00;
    compare.Food = 250.00;
    compare.Medical = 30.00;
    compare.Insurance = 100.00;
    compare.Entertainment = 150.00;
    compare.Clothing = 75.00;
    compare.Miscellaneous = 50.00;


    cout << "Housing";
    comparison(one.Housing, compare.Housing);
    cout << "utilities";
    comparison(one.Utilities, compare.Utilities);
    cout << "house hold expenses";
    comparison(one.HouseholdExpenses, compare.HouseholdExpenses);
    cout << "transportation";
    comparison(one.Transportation, compare.Transportation);
    cout << "food";
    comparison(one.Food, compare.Food);
    cout << "medical";
    comparison(one.Medical, compare.Medical);
    cout << "insurance";
    comparison(one.Insurance, compare.Insurance);
    cout << "entertainment";
    comparison(one.Entertainment, compare.Entertainment);
    cout << "clothing";
    comparison(one.Clothing, compare.Clothing);
    cout << "miscellaneous";
    comparison(one.Miscellaneous, compare.Miscellaneous);

    return 0;
}

void getData (MonthlyBudget &one)
{
    cout << "Please input the budget of Housing" << endl;
    cin >> one.Housing;
    cout << "Please input the budget of Utilities" << endl;
    cin >> one.Utilities;
    cout << "Please input the budget of HouseholdExpenses" << endl;
    cin >> one.HouseholdExpenses;
    cout << "Please input the budget of Transportation" << endl;
    cin >> one.Transportation;
    cout << "Please input the budget of Food" << endl;
    cin >> one.Food;
    cout << "Please input the budget of Medical" << endl;
    cin >> one.Medical;
    cout << "Please input the budget of insurance" << endl;
    cin >> one.Insurance;
    cout << "Please input the budget of entertainment" << endl;
    cin >> one.Entertainment;
    cout << "Please input the budget of clothing" << endl;
    cin >> one.Clothing;
    cout << "Please input the budget of Miscellaneous" << endl;
    cin >> one.Miscellaneous;


}
void comparison (int a, int b)
{
    if(a>b)
    {
        cout << " amount is over" << endl;
    }
    else
    {
        cout << " amount is under" << endl;
    }
}
