#include <iostream>
using namespace std;


int main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do{
        cout << "PIN: ";
        cin >> pin;
        if (pin != usersPin)
            errorCounter++;
    } while(errorCounter < 3 && pin != usersPin);

    if (errorCounter < 3)
      cout << "Loading...";
    else
       cout <<"Blocked...";

    system("pause > 0");
}