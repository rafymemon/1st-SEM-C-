#include<iostream>
using namespace std;
class Hero{
	
	//Properties of object//
	private:
	int health;
	
	public:
	char level;	
	
	
	
	void print(){
		cout<<level<<endl;
	}
	int gethealth(){
		return health;
	}
    char getlevel(){
    	return level;
	}
	void sethealth(int h){
		health= h;
	}
	void setlevel(char ch){
		level= ch;
	}
	
};
int main()
{
 //declaration of objects
 Hero h1;
// h1.health=85;
// h1.level= 'D';
  cout<<"hero's health"<<h1.gethealth()<<endl;
  //use of setter
  h1.sethealth(85);
  h1.level='A';
  
  
   
  cout<<"hero's level :"<<h1.getlevel()<<endl; 

 cout<<"health is: "<<h1.gethealth()<<endl;

return 0;
}
