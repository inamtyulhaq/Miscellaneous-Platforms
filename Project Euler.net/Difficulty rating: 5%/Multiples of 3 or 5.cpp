#include <iostream>
using namespace std;

int main()
{
    int n = 1000, sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
