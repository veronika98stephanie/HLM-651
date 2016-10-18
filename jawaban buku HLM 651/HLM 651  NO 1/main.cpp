#include <iostream>
#include <iomanip>

using namespace std;

struct MovieData
{
    string title;
    string director;
    int year;
    int time;
};

void printData (MovieData var);

int main()
{
    MovieData first = {"movie1", "Steven Something", 2009, 120};
    MovieData second= {"movie2", "Andrew Something", 2010, 240};

    printData(first);
    printData(second);

    return 0;
}

void printData(MovieData var)
{
    cout << setw(20) << left << "Title" << var.title << endl;
    cout << setw(20) << left << "Director" << var.director << endl;
    cout << setw(20) << left << "Year" << var.year << endl;
    cout << setw(20) << left << "Time" << var.time << endl << endl;
}
