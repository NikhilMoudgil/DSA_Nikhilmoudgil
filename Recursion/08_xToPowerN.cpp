#include <iostream>
using namespace std;
// tc-> O(n)
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}
// For tc- O(log n)
/* x^n


*/
int power2(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfpow = power2(x, n / 2);
    int halfPowSquare = halfpow * halfpow;
    if (n % 2 != 0)
    {
        return x * halfPowSquare;
    }
    return halfPowSquare;
}
int main()
{
    int x, n, i;
    cout << "O(n) Time Complxity =" << power(2, 10)<<endl;
    cout << "O(log n) Time Complxity =" << power2(3, 3);
    return 0;
}