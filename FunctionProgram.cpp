#include <iostream>
using namespace std;

void funcion ();

int main()
{
    cout << "Hello from main()\n";
    funcion();
    return 0;
}

void funcion (){
    cout << "Hello from Function()" << endl;
}