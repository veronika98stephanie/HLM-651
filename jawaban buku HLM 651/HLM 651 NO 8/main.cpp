#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>

using namespace std;

const int  numOfDat = 50;

struct data{
     char name[numOfDat];
     char address[numOfDat];
     char city[numOfDat];
     char telephoneNumber[numOfDat];
     float accountBalance;
     string lastPayment;
};

void searchFunction ();

int main (){
    int userInput;
    cout << "Please input number of data that you want" <<endl;
    cin >> userInput;

    while (userInput < 10)
    {
        cout << "Please input over 10 data " << endl;
        cin >> userInput;
    }


    data customer[userInput];

    for (int i = 0 ; i < userInput ; i++){

        cout << "Please enter your name " << endl;
        cin.ignore();
        cin.getline (customer[i].name, numOfDat);

            if (strlen(customer[i].name) == 0)
            {
                cout << "eror";
                exit (0);
            }

        cout << "Please enter your address " << endl;
        cin.getline (customer[i].address, numOfDat);

            if (strlen(customer[i].address) == 0)
            {
                cout << "eror";
                exit (0);
            }

        cout << "Please enter your city, state and ZIP " << endl;
        cin.getline (customer[i].city, numOfDat);

            if (strlen(customer[i].city) == 0)
            {
                cout << "eror";
                exit (0);
            }

        cout << "Please enter your telephone number" << endl;
        cin >> customer[i].telephoneNumber;

        cout << "Account Balance " << endl;
        cin >> customer[i].accountBalance;

        while (customer[i].accountBalance < 0)
        {
            cout << "Please input the right amount ";
            cin >> customer[i].accountBalance;
        }

        cout << "Please enter your last date of payment" << endl;
        cin >> customer[i].lastPayment;
        cout << endl;
    }

    for (int i = 0 ; i < userInput ; i++){
        cout << setw(30) << left << "Name : " << customer[i].name << endl;
        cout << setw(30) << left << "Address : "<< customer[i].address<< endl;
        cout << setw(30) << left << "City : " << customer[i].city << endl;
        cout << setw(30) << left << "Phone Number : " << customer[i].telephoneNumber << endl;
        cout << setw(30) << left << "Account Balance : " << customer[i].accountBalance << endl;
        cout << setw(30) << left << "LastPayment : " << customer[i].lastPayment << endl;
        cout << endl;
    }


    string name;
    bool found = false;

    cout << "Please input the name you want to search" << endl;
    cin.ignore();
    getline(cin, name);

    for (int i=0; i < userInput;i++)
    {
       if (name.compare(customer[i].name) == 0)
       {
        cout << setw(30) << left << "Name : " << customer[i].name << endl;
        cout << setw(30) << left << "Address : "<< customer[i].address<< endl;
        cout << setw(30) << left << "City : " << customer[i].city << endl;
        cout << setw(30) << left << "Phone Number : " << customer[i].telephoneNumber << endl;
        cout << setw(30) << left << "Account Balance : " << customer[i].accountBalance << endl;
        cout << setw(30) << left << "LastPayment : " << customer[i].lastPayment << endl;
       }
    }
    if (found)
    {

    }else
    {
        cout << "not found" << endl;
    }
 return 0;
}


