#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n, k = 0, f = 1;
    cin >> n >> ch;

    if (ch == '!')
    {
        cout << ch;
        k++;
    }
    else if (ch == '\n')
    {
        cout << ch;
    }
    for (n = 1; n <= 10; n++)
    {
        f = f * (n - 2 * k);
        if (f <= 0)
        {
            break;
        }
        cout << f << endl;
    }

    return 0;
}