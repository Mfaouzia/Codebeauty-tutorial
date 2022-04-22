#include<iostream>
using namespace std;

int main()
{
    //BMI calculator
    //weight(kg) / (height * height)(m)
    //Underweight < 18.5
    //Normal weight 18.5 - 24.9
    //Overweight > 25
    
    float weight, height, bmi;
    cout <<"Weight(kg), height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if(bmi < 18.5)
    
      cout << "underweight" << endl;
    
    else if(bmi > 25)
    
       cout << "overweight" << endl;
        
    else
       cout << "Normal weight " << endl; 
    
    cout << "Your bmi is " << bmi;
    system("pause > 0");
}