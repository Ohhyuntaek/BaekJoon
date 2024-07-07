#include <iostream>
using namespace std;

int main(void) 
{
    int a;
    int b;
    cin >> a >> b;
    
    int c = b/100;
    int d = (b-c*100)/10;
    int e = (b-c*100-d*10);
    
    cout << a * e << endl;
    cout << a * d << endl;
    cout << a * c << endl;
    cout << a * b << endl;
    
    return 0;
}