#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

void prdig(int i)
{

    if (i < 10)
    {
        cout << i << endl;
        return;
    }
    else
    {

        int t = i % 10;
        cout << t << endl;
        prdig(i / 10);
    }
}

int main()
{
    int i;
    cin >> i;
    prdig(i);
    return 0;
}
