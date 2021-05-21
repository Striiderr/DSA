#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 5, *p, j = 7, *q;
    p = &i;
    q = &j;
    *p = i + *q;
    j = *p + i;
    p = q;
    j = *p + i;
    i = *q + j;
    cout << i << j << *p << *q << endl;
    return 0;
}