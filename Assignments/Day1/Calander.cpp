#include<iostream>
using namespace std;
int main(){
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int n;
cout<<"Enter the year::";
cin>>n;
if((n%4==0) &&(( n%100!=0 )||(n%400==0))){
	month[1]=29;
}
int y=0,r,t;
for(int p=1;p<n;p++){
  if((p%4==0) &&(( p%100!=0 )||(p%400==0)))
{
	y=y+1;
}}
t=365*(n-1)+y;
r= t%7;
r=r+1;
char w;
cout<<"Enter View Type: ";
cout<<"Press 'h' for Horizontal or 'v' for Vertical::";
cin>>w;
if(w=='H'||w=='h'){
 for(int j=1; j<=12;j++)
 {
 switch(j){
  case 1:cout<<endl<<"******************Jan********************"<<"\n";
  break;
 case 2:cout<<endl<<"******************Feb********************"<<"\n";
 break;
 case 3:cout<<endl<<"******************Mar********************"<<"\n ";
 break;
 case 4:cout<<endl<<"******************Apr********************"<<"\n ";
 break;
 case 5:cout<<endl<<"******************May********************"<<"\n";
 break;
  case 6:cout<<endl<<"******************Jun********************"<<"\n";
 break;
 case 7:cout<<endl<<"******************Jul********************"<<"\n ";
 break;
 case 8:cout<<endl<<"******************Aug********************"<<"\n";
 break;
 case 9:cout<<endl<<"******************Sep********************"<<"\n";
 break;
 case 10:cout<<endl<<"******************Oct********************"<<"\n ";
 break;
 case 11:cout<<endl<<"******************Nov********************"<<"\n";
 break;
 default:cout<<endl<<"******************Dec********************"<<" \n";
 }
	 cout<<" Mon   Tue   Wed   Thu   Fri   Sat   Sun "<<endl;
	 cout<<"  ";
 switch(r){
 case 1:cout<<"";
 break;
 case 2:cout<<"      ";
 break;
 case 3:cout<<"            ";
 break;
 case 4:cout<<"                  ";
 break;
 case 5:cout<<"                        ";
 break;
 case 6:cout<<"                              ";
 break;
 default:cout<<"                                    ";
 }
	for(int i=1;i<=month[j-1];i++){
		cout<<i;
		 if(i<10){cout<<"     "; }
		 else{cout<<"    ";}
     r++; 
      if(r==8){
      cout<<endl;
      cout<<"  ";
      r=1;
      }
	}
	cout<<endl;
 }
 }
else if(w=='V'||w=='v'){
 for(int j=1; j<=12;j++){
 switch(j){
  	    case 1: cout<<endl<<"******************Jan********************"<<"\n";
  		break;
  		case 2: cout<<endl<<"\n******************Feb********************"<<"\n";
  		break;
 		case 3: cout<<endl<<"\n******************Mar********************"<<"\n";
 		break;
 		case 4: cout<<endl<<"\n******************Apr********************"<<"\n";
 		break;
 		case 5: cout<<endl<<"\n******************May********************"<<"\n";
 		break;
 		case 6: cout<<endl<<"\n******************Jun********************"<<"\n";
 		break;
 		case 7: cout<<endl<<"\n******************Jul********************"<<"\n";
 		break;
 		case 8: cout<<endl<<"\n******************Aug********************"<<"\n";
 		break;
 		case 9: cout<<endl<<"\n******************Sep********************"<<"\n";
 		break;
 		case 10: cout<<endl<<"\n******************Oct********************"<<"\n";
 		break;	
 		case 11: cout<<endl<<"\n******************Nov********************"<<"\n";
 		break;
		default	:cout<<endl<<"\n******************Dec********************"<<"\n";
         }	
   int v;
   
   switch(r){
   {case 1: cout<<"Mon  ";
      for(v=1;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
         if(v==1){cout<<" ";}
         if(v==month[j-1]){r=2;}}
            cout<<"\nTue  ";
      for(v=2;v<=month[j-1];v=v+7){
          
         cout<<v<<"   ";
          if(v==2){cout<<" ";}
         if(v==month[j-1]){r=3;}}
           cout<<"\nWed  ";
      for(v=3;v<=month[j-1];v=v+7){

         cout<<v<<"   ";
         if(v==month[j-1]){r=4;}}
           cout<<"\nThu  ";
      for(v=4;v<=month[j-1];v=v+7){
        
         cout<<v<<"   ";
          if(v==month[j-1]){r=5;}}
           cout<<"\nFri  ";
      for(v=5;v<=month[j-1];v=v+7){
         	   cout<<v<<"   ";
               if(v==month[j-1]){r=6;}}
            cout<<"\nSat  ";
      for(v=6;v<=month[j-1];v=v+7){

         cout<<v<<"   ";
          if(v==month[j-1]){r=7;}}
            cout<<"\nSun  ";
      for(v=7;v<=month[j-1];v=v+7){

         cout<<v<<"   "; 
          if(v==month[j-1]){r=1;}}
    break;}
   { case 2:cout<<"Mon  ";
     cout<<"     ";
      for(v=7;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
       
         if(v==month[j-1]){r=2;}}
            cout<<"\nTue  ";
      for(v=1;v<=month[j-1];v=v+7){
          
        cout<<v<<"   ";
          if(v==1){cout<<" ";}
       
        if(v==month[j-1]){r=3;}   }
            cout<<"\nWed  ";
      for(v=2;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
         if(v==2){cout<<" ";}
            if(v==month[j-1]){r=4;}}

            cout<<"\nThu  ";
      for(v=3;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
         if(v==month[j-1]){r=5;}
           }

           cout<<"\nFri  ";
           for(v=4;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
           if(v==month[j-1]){r=6;}}
            cout<<"\nSat  ";
      for(v=5;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
     if(v==month[j-1]){r=7;}    }
            cout<<"\nSun  ";
      for(v=6;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
           if(v==month[j-1]){r=1;}}
           
      break;}
   {case 3: 
     cout<<"Mon  ";
     cout<<"     ";
      for(v=6;v<=month[j-1];v=v+7){
       
        cout<<v<<"   ";
       
       
       if(v==month[j-1]){r=2;}   }
            cout<<"\nTue  ";
            cout<<"     ";
      for(v=7;v<=month[j-1];v=v+7){
          
        cout<<v<<"   ";
          if(v==2){cout<<" ";}
       
            if(v==month[j-1]){r=3;}}
            cout<<"\nWed  ";
      for(v=1;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
        if(v==1){cout<<" ";}
            if(v==month[j-1]){r=4;}}

            cout<<"\nThu  ";
      for(v=2;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
         if(v==2){cout<<" ";}
       if(v==month[j-1]){r=5;}          }

           cout<<"\nFri  ";
           for(v=3;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
            if(v==month[j-1]){r=6;}}
            cout<<"\nSat  ";
      for(v=4;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
           if(v==month[j-1]){r=7;} }
            cout<<"\nSun  ";
      for(v=5;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
          if(v==month[j-1]){r=1;}  }
      
     break;}
   {case 4: 
     cout<<"Mon  ";
     cout<<"     ";
        for(v=5;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
         
       
           if(v==month[j-1]){r=2;} }
            cout<<"\nTue  ";
            cout<<"     ";
        for(v=6;v<=month[j-1];v=v+7){
           cout<<v<<"   ";
         
       if(v==month[j-1]){r=3;}
           }
            cout<<"\nWed  ";
            cout<<"     ";
        for(v=7;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
        if(v==month[j-1]){r=4;}
           }

            cout<<"\nThu  ";
        for(v=1;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
         if(v==1){cout<<" ";}
         if(v==month[j-1]){r=5;}
           }

           cout<<"\nFri  ";
        for(v=2;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
         if(v==2){cout<<" ";}
       if(v==month[j-1]){r=6;}
           }
            cout<<"\nSat  ";
        for(v=3;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
        if(v==month[j-1]){r=7;}
           }
            cout<<"\nSun  ";
        for(v=4;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
        if(v==month[j-1]){r=1;}
           }
     break;}
   { case 5:    
     cout<<"Mon  ";
     cout<<"     ";
        for(v=4;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
          
      if(v==month[j-1]){r=2;}   }
            cout<<"\nTue  ";
            cout<<"     ";
        for(v=5;v<=month[j-1];v=v+7){
           cout<<v<<"   ";
        
       
            if(v==month[j-1]){r=3;}}
            cout<<"\nWed  ";
            cout<<"     ";
        for(v=6;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       if(v==month[j-1]){r=4;}
           }

            cout<<"\nThu  ";
            cout<<"     ";
        for(v=7;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
        
             if(v==month[j-1]){r=5;}}

           cout<<"\nFri  ";
        for(v=1;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
         if(v==1){cout<<" ";}
         if(v==month[j-1]){r=6;}}
            cout<<"\nSat  ";
        for(v=2;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
         if(v==2){cout<<" ";}
           if(v==month[j-1]){r=7;}}
            cout<<"\nSun  ";
        for(v=3;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
           if(v==month[j-1]){r=1;}}
     break;}
   {case 6:
     cout<<"Mon  ";
     cout<<"     ";
        for(v=3;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
          
       
            if(v==month[j-1]){r=2;}}
            cout<<"\nTue  ";
            cout<<"     ";
        for(v=4;v<=month[j-1];v=v+7){
           cout<<v<<"   ";
          
      if(v==month[j-1]){r=3;}
           }
            cout<<"\nWed  ";
            cout<<"     ";
        for(v=5;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
            if(v==month[j-1]){r=4;}}

            cout<<"\nThu  ";
            cout<<"     ";
        for(v=6;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
        
           if(v==month[j-1]){r=5;}}

           cout<<"\nFri  ";
           cout<<"     ";
        for(v=7;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
            if(v==month[j-1]){r=6;}}
            cout<<"\nSat  ";
        for(v=1;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       if(v==1){cout<<" ";}
        if(v==month[j-1]){r=7;}}
            cout<<"\nSun  ";
        for(v=2;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       if(v==2){cout<<" ";}
          if(v==month[j-1]){r=1;}  }

     
      break;}
   {default:
     cout<<"Mon  ";
      cout<<"     ";
        for(v=2;v<=month[j-1];v=v+7){
       
         cout<<v<<"   ";
          if(v==2){cout<<" ";}
       
            if(v==month[j-1]){r=2;}}
            cout<<"\nTue  "; cout<<"     ";
        for(v=3;v<=month[j-1];v=v+7){
           cout<<v<<"   ";
         
        if(v==month[j-1]){r=3;}
           }
            cout<<"\nWed  "; cout<<"     ";
        for(v=4;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
       if(v==month[j-1]){r=4;}  }

            cout<<"\nThu  "; cout<<"     ";
        for(v=5;v<=month[j-1];v=v+7){
        
        cout<<v<<"   ";
        
       if(v==month[j-1]){r=5;} }

           cout<<"\nFri  "; cout<<"     ";
        for(v=6;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
            if(v==month[j-1]){r=6;}}
            cout<<"\nSat  "; cout<<"     ";
        for(v=7;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
       
          if(v==month[j-1]){r=7;}}
            cout<<"\nSun  ";
        for(v=1;v<=month[j-1];v=v+7){

        cout<<v<<"   ";
              if(v==1){cout<<" ";}
           if(v==month[j-1]){r=1;}}}
    }
  }  
 }
else {
	cout<<"invalid input";
 }
return 0;
          }



	
	
