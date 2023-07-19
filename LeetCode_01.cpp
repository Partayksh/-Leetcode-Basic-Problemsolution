// Statment : We have a integer find the sun, Product to its digit and then Difference i.e, Product - sum
// n=234  , sum = 9 , Product = 24 , Difference = 15
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int product = 1;
    int difference;
    cout << "Enter the number" << endl;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        product = product * rem;
        n = n / 10;
    }
    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << product << endl;
    difference = product - sum;
    cout << "Difference is :" << difference << endl;

    return 0;
}