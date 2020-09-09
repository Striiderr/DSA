#include<iostream>
#include<string>
#include<cstring>
 
using namespace std;
int fab(int n){

	if(n<=1)
		return 1;
	else{
		return fab(n-1)+fab(n-2);
	}
   }
int convert(string f){
	int num=0;
	int n=f.size();
  string r;int b;
  for(int i=n-1;i>=0;i--){
  	
  	r=f.at(i); 	
  	if(r=="1"){
   num= num+fab(n-i-1);
  	}
  }	
 return num;
 }static string ret1;
string func(int a[],int n,int nv,int s){
 //  cout<<"\n"<<n<<" "<<nv<<" "<<s;
 
 if(a[n]==s){
 	cout<<"\n"<<ret1;
      ret1=ret1+'1';
	while(n>0){
		ret1=ret1+'0';
		n--;
	}
 	}else
     { 
        if((nv+a[n-1])==s){
           ret1=ret1+"1";
           while(n-1>0){
		   ret1=ret1+'0';
		   if(n-1==1){
		   	ret1="1"+ret1;
		   }
		   n--;
	}
}
        else if((nv+a[n-1])<s){
        ret1=ret1+'1';        
   		return func(a,n-1,a[n-1],s-nv);
	   }               
    else if((nv+a[n-1])>s){
    	   ret1=ret1+'0'; 
		  return func(a,n-1,nv,s);
            	}
}	
 
   return ret1;
	}

string reconvert(int d){
	int a[10]; string ret;
	
	for(int i=0;i<10;i++){
            a[i]=fab(i);
                       }
	int iu=0;

	while(d>a[iu]){
		iu++;}
		ret1="";
	  if(d!=a[iu])
	  	{ret= func(a,iu-1,a[iu-1],d);}
       else
         {ret= func(a,iu,a[iu],d);}


	  return ret;
	}
string decrement(string f){	
	 int n=convert(f);  
	 string r;
    r=reconvert(n-1);
   return r;
 }
string increment(string f){
	 int n=convert(f);

	 string r;
	 r=reconvert(n+1);
     return r;
     }
int main(){
 string fitstring;int f;
  cin>>fitstring;


  	string d=decrement(fitstring);
 	string i=increment(fitstring);
	cout<<"\nDecrement:"<<d<<"\nIncrement:"<<i<<endl;
	return 0;
}