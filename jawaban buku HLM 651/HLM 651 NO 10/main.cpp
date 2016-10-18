#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>

using namespace std;

const int  numOfDat = 50;

struct data{
     char name[numOfDat];
     char telephoneNumber[numOfDat];
     char Topic[numOfDat];
     float Fee;
};

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


        cout << "Please enter your telephone number" << endl;
        cin >> customer[i].telephoneNumber;

        cout << "Please enter your Topic " << endl;
        cin.ignore();
        cin.getline (customer[i].Topic, numOfDat);

            if (strlen(customer[i].Topic) == 0)
            {
                cout << "eror";
                exit (0);
            }

        cout << "Fee " << endl;
        cin >> customer[i].Fee;


        while (customer[i].Fee < 0)
        {
            cout << "Please input the right amount ";
            cin >> customer[i].Fee;
        }
    }
    for (int i = 0 ; i < userInput ; i++){
        cout << setw(30) << left << "Name  " << customer[i].name << endl;
        cout << setw(30) << left << "Phone Number  " << customer[i].telephoneNumber << endl;
        cout << setw(30) << left << "Topic " << customer[i].Topic << endl;
        cout << setw(30) << left << "Fee" << customer[i].Fee << endl;
        cout << endl;
        }

    string name;

    cout << "Please input the name you want to search" << endl;
    cin.ignore();
    getline(cin, name);

    bool found = false;

    for (int i=0; i < userInput;i++)
    {
       if (name.compare(customer[i].name) == 0)
       {
        cout << setw(30) << left << "Name  " << customer[i].name << endl;
        cout << setw(30) << left << "Phone Number  " << customer[i].telephoneNumber << endl;
        cout << setw(30) << left << "Topic " << customer[i].Topic << endl;
        cout << setw(30) << left << "Fee" << customer[i].Fee << endl;
        found = true;
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
