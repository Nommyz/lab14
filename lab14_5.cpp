#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d)
{
   int x[]={50,100,500,1000},y1,y2,y3,y4;
   
       do{
           y1=rand()%4;
           y2=rand()%4;
           y3=rand()%4;
           y4=rand()%4;
           
       }while(y1==y2||y1==y3||y1==y4||y2==y3||y2==y4||y3==y4);
       
     
   *a = x[y1];
   *b = x[y2];
   *c = x[y3];
   *d = x[y4];
}