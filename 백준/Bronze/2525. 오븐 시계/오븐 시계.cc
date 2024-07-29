#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int h, m, time, addTime, hours, minutes;
    cin >> h >> m;
    cin >> time;

    addTime = m + time;

    hours = trunc(addTime / 60);
    minutes = addTime % 60;

    if (hours > 0)
    {
        h += hours;

        if (h > 23) {
            h -= 24;
        }
    }
    
    if (addTime >= 60)
    {
        m = minutes;
    }
    else 
    {
        m = addTime;
    }

    cout << h << ' ' << m << endl;

    return 0;
}
