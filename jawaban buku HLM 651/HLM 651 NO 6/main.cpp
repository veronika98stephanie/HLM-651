#include <iostream>
#include <iomanip>

using namespace std;

int size = 12;
const int holder = 30;
struct Player
{
    char name[holder];
    int number;
    int score;
};


void inputData (Player information[], int size);

int main()
{
    Player info[size];

    inputData(info, size);

    int total = 0;

    cout << setw(30) << left << "Name" << setw(30) << left << "Number" << setw(30) << left << setw(30) << left << "Score" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << setw(30) << left << info[i].name <<
                setw(30) << left << info[i].number<<
                setw(30) << left << info[i].score << endl;
        total+= info[i].score;
    }

    cout << endl << "The total score is " << total << endl;

    int position = 0;
    int highest = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].score > highest)
        {
            highest = info[i].score;
            position = i;
        }

    }

    cout << "The highest score earned by " << info[position].name << " " << info[position].number;


    return 0;
}

void inputData (Player information[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        cout << "Please input Player's name " << endl;
        cin.getline(information[i].name, holder);

        cout << "Please input Player's number" << endl;
        cin >> information[i].number;
        while (information[i].number < 0)
        {
            cout << "Please input the right number" << endl;
            cin >> information[i].number;
        }

        cout << "Please input the score " << endl;
        cin >> information[i].score;
        while (information[i].score < 0)
        {
            cout << "Please input the right number" << endl;
            cin >> information[i].score;
        }
        cin.ignore();
    }
}
