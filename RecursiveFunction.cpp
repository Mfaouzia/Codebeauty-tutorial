#include <iostream>
using namespace std;

int recursive_sum(int m, int n){ //m= 2, n = 4
    if (m == n) // important 
    return n; // important
    return m +recursive_sum(m+1, n);
}

// sum numbers betwen m-n
int main()
{
    int m = 2, n = 4;
    cout << "Sum  =" << recursive_sum(m, n);




/*    int sum = 0;
  for(int i = n; i<=n; i++)
    {
        sum += i;

    }
    cout << "Sum =" << sum;*/

    system("pause > 0");
     
}