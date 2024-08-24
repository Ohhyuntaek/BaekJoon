#include <iostream>
using namespace std;

bool isPrime(int num);

int main() {
    int N;
    int ans = 0;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        int m;
        cin >> m;
        arr[i] = m;
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime(arr[i]) == true)
            ans++;
    }

    cout << ans << endl;

    return 0;
}

bool isPrime(int num)
{
    if (num < 2) return false;
    else
    {
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0) return false;
        
        return true;
    }
}
