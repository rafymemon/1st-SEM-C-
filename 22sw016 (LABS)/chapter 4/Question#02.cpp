#include<iostream>
using namespace std;
struct point{
	int x;
	int y;
    };
int main()
	{
		point A,B,C;
		cout<<"Enter cordinates of p1 : ";
		cin>>A.x>>A.y;
		cout<<"Enter cordinates of p2 : ";
		cin>>B.x>>B.y;
		
		C.x=A.x+B.x;
		C.y=A.y+B.y;
		cout<<"Cordinates of p1+p2 are : "<< C.x << "," << C.y ;
		
	return 0;
		
}
		
	
