#include <iostream>
using namespace std;

int main()
{
    //Multiplication table
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++){
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << endl;
    }
    system("Pause > 0");
}