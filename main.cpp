//Lab Assignment #1-P1
//Sümeyra Karsavran 
//19.10.2021

#include <iostream>
using namespace std;

int main()
{
    string userName;
    string userSurname;
    int userAge;
    int currentYear;

    cout << "Please write your name:";
    cin >> userName;

    cout << "Please write your surname:";
    cin >> userSurname;

    cout << "Please write your age:";
    cin >> userAge;

    cout << "Please write the current year:";
    cin >> currentYear;

    int userBirthYear = currentYear - userAge;

    cout << "Hi " << userName << " " << userSurname << " " << userAge << "!" << endl;
    cout << "Your birth year is: " << userBirthYear;

    return 0;

}


