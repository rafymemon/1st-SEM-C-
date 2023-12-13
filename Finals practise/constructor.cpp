#include<iostream>
using namespace std;

class Students  {
private:
	string studentName; // instance variable

 public:
	Students () 	//Constructor 
{ 
	studentName='anyName';
	  }
  
 void setName(string stdName)
{
	studentName=stdName;     
}  // end method 

 public :
 string getName()
{
 return studentName;
}  // end method 

 
};  // end class 
int main () {

// Creating an object

Students objStd;

{ 
// calling objStd’s method getName()
cout<<"Initial Value:"<< objStd.getName()<<endl;

objStd.setName("Ahmed");
 cout<<"Welcome"<< objStd.getName()<<endl;

return 0; 
   
}  // end main method 
}

