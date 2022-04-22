#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height, width;
    cout << "Height: ";
    cin >> height;
    cout << "width: ";
    cin >> width;
    char symbol;
    cout << "symbol: ";
    cin >> symbol;

    for(int h = 0; h < height; h++){
       for(int w = 0; w < width; w++){
           cout << setw(3) <<symbol; // je l'ai utiliser car j'ai utiliser la librairie iomanip.
       } 
       cout << endl;
    }
    system("Pause > 0");
}