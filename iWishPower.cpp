#include <iostream>
using namespace std;


double iWishPower(double base, int expo)
{
    int forposi = expo;
    double power = 1;

    if(expo < 0)
    {
        expo = abs(expo);
        while(expo)
        {
            power = power * base;
            expo--;
        }
        return 1 / power;
    }
    
    while(forposi)
    {
        power = power * base;
        forposi--;
    }
    return power;
}

int main()
{
    double x;
    int y;
    while(cin >> x >> y)
    {
        cout << iWishPower(x, y) << endl;
    }
} 
