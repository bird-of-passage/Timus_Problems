#include <iostream>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;

    char c;

    while (true)
    {
        c = getc(stdin);
        if (c == '\n')
            break;
        if (c == '!')
            ++k;
    }

    int fact = 1;

    while (n > 0)
    {
        fact *= n;
        n -= k;
    }

    cout << fact << endl;

    return 0;
}