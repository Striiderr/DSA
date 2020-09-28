#include<iostream>
using namespace std;

void recursivePostfix(char* expr)  
{  
if(!expr)   return;  

bool flag=true;
static double result=0;
double v1=result, v2=0, dec=0;
char oper='0';
int i=0, state=1;

do
{
    if('0' != oper)
    {
        switch(oper)
        {
            case '+': result=v1+v2; break;
            case '-': result=v1-v2; break;
            case '*': result=v1*v2; break;
            case '/': result=v1/v2; break;
        }
        oper = '0';
        v1 = result;
        v2 = 0;
        recursivePostfix(expr+i);
    }

    if(SPACE_CHAR == *(expr+i) && state++)
        continue;

    switch(state)
    {
        case 1:
            v1 = v1*10 + (expr[i]-'0'); break;
        case 2:
            v2 = v2*10 + (expr[i]-'0'); break;
        case 3:
            oper = *(expr+i);
    }  
}while(0 != *(expr+i++));
cout << result;

}
int main(){
    
char* in;
cin.getline(in,100);
recursivePostfix(in);

    return 0;
}
