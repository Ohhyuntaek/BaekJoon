#include <iostream>
using namespace std;

int main(void)
{
    double a;
    double b;
    cin >> a >> b;
    
    cout.precision(10);
    double c = a/b;
    cout << c << endl;
    return 0;
}