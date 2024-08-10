//Name: ARYA SHAHI
//PRN: 23070123030
//AIM - To check greatest number among 3.
#include <iostream>
using namespace std;

int main() { int a,b,c;
  
  cout << "Enter number 1: ";
  cin >> a;
  cout << "Enter number 2: ";
  cin >> b;
  cout << "Enter number 3: ";
  cin >> c;
if (a>b)
{ if (a>c)
    { cout << a << " is the largest number.";}
else
{cout << c << " is the largest number.";}
    
}
else
{ if (b>c)
    { cout << b << " is the largest number.";}
    else
    {cout << c << " is the largest number.";}
}
    
    return 0;
}

/* OUTPUT
Enter number 1: 6
Enter number 2: 7
Enter number 3: 5
7 is the largest number.
  */

