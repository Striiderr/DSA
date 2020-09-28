#include<iostream> 
#include<cstring>
#include<stack>
using namespace std;
#define N 8
#define M 8
class node{
public:
	int x,y;
	int dir;
	node(int i,int j){
		x=i;
		y=j;
		dir=0;
	}	

};
int n=N,m=M;
int fx,fy;
bool visited[N][M];
bool inReach(int maze[N][M],int sx,int sy){
   int i=sx;int j=sy;
   stack<node> s;
   node temp(i,j);
   s.push(temp);	

while(!s.empty()){
   temp=s.top();
   int d=temp.dir;
   i=temp.x;j=temp.y;
   temp.dir++;
   s.pop();
   s.push(temp);
   // cout<<temp.x<<" "<<temp.y<<"\n";
    if(i==fx &&j==fy){
    	return true;
    }
    if(d==0){
   if(i-1>=0 && maze[i-1][j] && visited[i-1][j]){
   	node temp1(i-1,j);
   	visited[i-1][j]=false;
   	s.push(temp1);
   cout<<temp1.x<<" "<<temp1.y<<"\n";
   }
}
 else  if(d==1){
   if(j-1>=0 && maze[i][j-1] && visited[i][j-1]){
   	node temp1(i,j-1);
   	visited[i][j-1]=false;
   	s.push(temp1);
  cout<<temp1.x<<" "<<temp1.y<<"\n";
   }
}
  else if(d==2){
   if(i+1<n && maze[i+1][j] &&  visited[i+1][j]){
   	node temp1(i+1,j);
   	visited[i+1][j]=false;
   	s.push(temp1);
 	cout<<temp1.x<<" "<<temp1.y<<"\n";
   }
}
else if(d==3){
   if(j+1<m && maze[i][j+1] &&  visited[i][j+1]){
   	node temp1(i,j+1);
   	visited[i][j+1]=false;
   	s.push(temp1);
   cout<<temp1.x<<" "<<temp1.y<<"\n";
   }
}
else {
visited[temp.x][temp.y]=true;
s.pop();
   }
	}
return false;
}

int main(){

memset(visited,true,sizeof(visited));
int maze[N][M] = { 
	{ 1, 0, 0, 0, 0, 0, 0, 0},
    { 1, 1, 1, 1, 1, 1, 1, 0},
    { 0, 1, 0, 1, 0, 0, 0, 0},
    { 0, 1, 0, 1, 1, 1, 1, 0},
    { 0, 1, 0, 0, 0, 0, 1, 0},
    { 0, 1, 0, 0, 1, 0, 1, 0},
    { 0, 1, 1, 1, 1, 1, 1, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0}};
    int x,y;
   cin>>x>>y>>fx>>fy;
    if(inReach(maze,x,y)){
    	cout<<"1";
    }
    else 
    	cout<<"0";

   return 0;
}

