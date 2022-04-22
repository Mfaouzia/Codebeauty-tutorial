#include <iostream>

using namespace std;

int main(){

    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin>> hostUserNum;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNum;
    (hostUserNum == guestUserNum)? cout << "Correct!: " : cout << "Failed!:";

    /*if (hostUserNum == guestUserNum)
       cout << "Correct!";
    else 
       cout << "Failed!";*/

    system("pause > 0");

}