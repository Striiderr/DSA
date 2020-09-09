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
            	}}	
 
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
void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;}
int partitionh(int a[],int low,int high){
  int p=a[high];
  int l=low;  
  int h=high-1;
  while(l<h){
  while(a[l]<p){ l++; }
  while(a[h]>p){ h--; }
  if(l<h){
  swap(&a[l],&a[h]);
  }
  }
  if(a[high]<a[l])
  swap(&a[high],&a[l]);

  return l;
  }
int partitionl(int a[],int low,int high){
  int p=a[low];
  int l=low+1;
  int h=high;
  while(l<h){
  while(a[l]<p){ l++; }
  while(a[h]>p){ h--; }
  if(l<h){
  swap(&a[l],&a[h]);
  } }

  if(a[low]>a[h])
  swap(&a[low],&a[h]);

  return h;
  } 
void Quick(int a[],int low,int high){
   if(low<high){
    if(a[low>a[high]]){
   swap(&a[low],&a[high]);
   }
    int j=partitionl(a,low,high);
    int k=partitionh(a,j+1,high);
      Quick(a,low,j-1);
      Quick(a,j+1,k-1);
      Quick(a,k+1,high);
   }

    } 
void Serput(int a[],int n,int s){
  while(n>=0&& a[n]>s){
    a[n+1]=a[n];
    n--;}
 	a[n+1]=s;

	}
void insr(int a[],int s,int e){
	if(s==e){
	return;
	}
	else{
	int t=a[s];
	int n=s-1;
	Serput(a,n,t);
	insr(a,s+1,e);
	}

	}
int main(){
int a;
cin>>a;
switch(a){
	case 1:{
 string fitstring;int f;
  cin>>fitstring;
  	string d=decrement(fitstring);
 	string i=increment(fitstring);
	cout<<"\nDecrement:"<<d<<"\nIncrement:"<<i<<endl;	
}
break;
case 2:{
int a[10]={87,768,2,8,7,1,4,9,3,6};
 insr(a,1,10);
for(int i=0;i<10;i++){
cout<<a[i]<<" ";
}
}
break;
case 3:{
int  a[7]={9,8,7,6,5,4,3};

  Quick(a,0,6);

for(int i=0;i<7;i++){
   cout<<a[i]<<" ";
}

}
break;
}
return 0;
}