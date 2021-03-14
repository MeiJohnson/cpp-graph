#include <iostream>
using namespace std;

bool checkPrime(int x)
{
   
    if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
        return true;
    else
        return false;
            
}

int main()
{
    cout << "Please, enter a prime digit less than 10" << std::endl;
    int digit;
    cin >> digit;
    
    if (digit >= 10)
    {
        cout << "Wrong input" << endl;
        return 0;
    }
    
    if (checkPrime(digit))
        cout << "The digit is prime" << endl;
    else
        cout << "The digit is not prime" << endl;

    return 0;
}
    

