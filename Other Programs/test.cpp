#include<iostream>
#include<cstring>
using namespace std;

int test(string s, int last) {
if (last < 0) {
return 0;
}
if (s[last] == '0') {
return 2 * test(s, last-1);
}
return 1 + 2 * test(s, last-1);
}
int main(){

int t=test("01101",4);
cout<<t<<endl;
return 0;
}

