#include <iostream>
#include <iomanip>

using namespace std;

struct Bins
{
    string part;
    int number;

};

void AddParts (Bins& );
void RemoveParts (Bins&);
const int SIZE = 10;

int amountArr [SIZE] = {10, 5, 15, 21, 7, 5, 5, 25, 18, 12};

int main()
{
    Bins all[SIZE];

    string binArr [SIZE] = {"Valve","Bearing","Bushing",
                            "Coupling","Flange","Gear",
                            "Gear Housong","Vacuum Gripper",
                            "Cable","Rod"};



    int choice;
    char choice2;

    for (int i=0; i < SIZE; i++)
    {
        all[i].number=amountArr[i];
        all[i].part = binArr[i];
    }

    do
    {
        cout << "Please enter the choice" << endl;
        cout << "---------------LIST--------------------" << endl;
        cout << setw(23) << left << "   BIN" << setw(20) << left << "AMOUNT" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << setw(3) << left << i+1 << setw(20) << left << binArr[i] << setw(20) << left << amountArr[i] <<endl;
        }

        cout << setw(3) << left << "11" << setw(20) << left << "Quit" << endl;

        cin >> choice;

        cout << "Do you want to increase (y) or decrease (n)?" << endl;

        cin >> choice2;


        if (toupper(choice2)=='Y')
        {
            for (int i = 0; i < SIZE; i++)
            {
                if (choice == i+1)
                {
                    AddParts(all[i]);
                }
            }
        }

        if (toupper(choice2)=='N')
        {
            for (int i = 0; i < SIZE; i++)
            {
                if (choice == i+1)
                {
                    RemoveParts(all[i]);
                }
            }
        }



    }while (choice != 11);





    return 0;
}

void AddParts(Bins &something)
{
    if (something.number >= 30)
    {
        cout << "Bin is over you can not increase it anymore " << endl;
        return;
    }
    something.number++;
    cout << something.part << "is now " << something.number << endl;
}

void RemoveParts(Bins &something)
{
    if (something.number < 0)
    {
        cout << "Bin is empty you can not decrease it anymore " << endl;
        return;
    }
    something.number--;
    cout << something.part << "is now " << something.number <<endl;
}
