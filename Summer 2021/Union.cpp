#include <bits/stdc++.h>
using namespace std;

union demo
{
    int i;
    char ch;
};

int main()
{
    vector<int> tag;
    demo d1[10];
    char c;
    for (int i = 0; i < 10; i++)
    {
        cin >> c;
        if (c > 47 && c < 58)
        {
            d1[i].i = int(c - 48);
            tag.push_back(1);
        }
        else if ((c > 64 && c < 91) || (c > 96 && c < 123))
        {
            d1[i].ch = c;
            tag.push_back(0);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (tag[i] == 1)
            cout << d1[i].i << " ";
        else if (tag[i] == 0)
            cout << d1[i].ch << " ";
    }
    return 0;
}