#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
for(int i=0; i<6;i++){
    v.push_back(i);
}
for(int i=0; i<6;i++){
    cout<<v[i]<<" ";
} 
cout<<"\n"<<v.capacity()<<endl;
cout<<v.size()<<endl;
cout<<v.max_size()<<endl;
if(v.empty())
cout<<"vector is enpty\n";
else 
cout<<"Vector is not empty\n";
cout<<v.front()<<"\n";
cout<<v.back()<<"\n";
cout<<v.at(2)<<"\n";

return 0;
}