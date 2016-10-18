#include <iostream>

using namespace std;

struct Drinks
{
    string name;
    double cost;
    int number;
};

    int choice;
    double total = 0;
    double money,
           change;

    Drinks choice1 ={"Cola", 0.75 , 20};
    Drinks choice2 ={"Root Beer", 0.75 , 20};
    Drinks choice3 ={"Lemon - Lime", 0.75 , 20};
    Drinks choice4 ={"Grape Soda", 0.80 , 20};
    Drinks choice5 ={"Cream Soda", 0.80 , 20};

void chosen1 (Drinks &choice1);
void chosen2 (Drinks &choice2);
void chosen3 (Drinks &choice3);
void chosen4 (Drinks &choice4);
void chosen5 (Drinks &choice5);

int main()
{


    do
    {
        cout << "Please choose an option" <<endl;
        cout << "1. cola" << endl << "2. Root Beer" << endl << "3. Lemon-Lime" << endl
             << "4. Grape Soda" << endl << "5. Cream Soda" << endl << "6. exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            chosen1(choice1);
        }
        if (choice == 2)
        {
            chosen2(choice2);
        }
        if (choice == 3)
        {
            chosen3(choice3);
        }
        if (choice == 4)
        {
            chosen4(choice4);
        }
        if (choice == 5)
        {
            chosen5(choice5);
        }



    }while (choice != 6);

    cout << "Total money in vending machine " << total;

    return 0;
}


void chosen1 (Drinks &choice1)
{
    if (choice1.number == 0)
    {
        cout << "The drinks is empty" << endl;
        return;
    }

    cout << "Please enter the amount" << endl;
    cin >> money;

    while (money > 1 || money < choice1.cost)
    {
        cout << "Please enter the right amount" << endl;
        cin >> money;
    }

    change = money - choice1.cost;
    cout << "The change " << change << endl;
    choice1.number--;
    total += choice1.cost;
}

void chosen2 (Drinks &choice2)
{
    if (choice2.number == 0)
    {
        cout << "The drinks is empty" << endl;
        return;
    }

    cout << "Please enter the amount" << endl;
    cin >> money;

    while (money > 1 || money < choice2.cost)
    {
        cout << "Please enter the right amount" << endl;
        cin >> money;
    }

    change = money - choice2.cost;
    cout << "The change " << change << endl;
    choice2.number--;
    total += choice2.cost;
}

void chosen3 (Drinks &choice3)
{
    if (choice3.number == 0)
    {
        cout << "The drinks is empty" << endl;
        return;
    }

    cout << "Please enter the amount" << endl;
    cin >> money;

    while (money > 1 || money < choice3.cost)
    {
        cout << "Please enter the right amount" << endl;
        cin >> money;
    }

    change = money - choice3.cost;
    cout << "The change " << change << endl;
    choice3.number--;
    total += choice3.cost;
}

void chosen4 (Drinks &choice4)
{
    if (choice4.number == 0)
    {
        cout << "The drinks is empty" << endl;
        return;
    }

    cout << "Please enter the amount" << endl;
    cin >> money;

    while (money > 1 || money < choice4.cost)
    {
        cout << "Please enter the right amount" << endl;
        cin >> money;
    }

    change = money - choice4.cost;
    cout << "The change " << change << endl;
    choice4.number--;
    total += choice4.cost;
}

void chosen5 (Drinks &choice5)
{
    if (choice5.number == 0)
    {
        cout << "The drinks is empty" << endl;
        return;
    }

    cout << "Please enter the amount" << endl;
    cin >> money;

    while (money > 1 || money < choice5.cost)
    {
        cout << "Please enter the right amount" << endl;
        cin >> money;
    }

    change = money - choice5.cost;
    cout << "The change " << change << endl;
    choice5.number--;
    total += choice5.cost;
}
