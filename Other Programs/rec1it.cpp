// C++ Program of above approach 
#include <iostream> 
#include <math.h> 
using namespace std; 

class gfg 
{ 
	
public: 
void printPowerSet(string set, int set_size) 
{ 
	unsigned int pow_set_size = pow(2, set_size); 
	int counter, j; 
	for(counter = 0; counter < pow_set_size; counter++) 
	{
	for(j = 0; j < set_size; j++)
	{
		if(counter & (1 << j))
			cout << set[j];
	} 
	cout << endl; 
	} 
} 
}; 

/*Driver code*/
int main() 
{ 
	gfg g; 
	string set;
        getline (cin,set);
       int t=set.size();
	g.printPowerSet(set, t); 
	return 0; 
} 
