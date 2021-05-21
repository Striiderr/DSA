#include <iostream>
using namespace std;
struct dlnode
{
    dlnode *left;
    int data;
    dlnode *right;
};
typedef struct dlnode *dlptr;

void cretdln(dlptr &S)
{
    S = new (dlnode);
    S->left = NULL;
    int n;
    cin >> n;
    S->data = n;
    S->right = NULL;
    dlptr T;
    dlptr P;
    P = S;
    cin >> n;
    while (n != -1)
    {
        T = new (dlnode);
        T->left = P;
        T->data = n;
        T->right = NULL;
        P->right = T;
        P = P->right;
        cin >> n;
    }
}

void print(dlptr P)
{
    while (P != NULL)
    {
        cout << P->data << " ";
        P = P->right;
    }
    cout << "\n";
}

int main()
{
    dlptr P;
    cretdln(P);
    print(P);

    return 0;
}
