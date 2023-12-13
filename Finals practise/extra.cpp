//#include<iostream>
//using namespace std;
//class Hero{
//	private:
//		int health;
//	public:
//        char level;
//        
//    Hero(){
//    	cout<<"Constructor is called"<<endl;
//	}    
//        
//		
//	void print(){
//		cout<<level<<endl;
//		}	
//	int gethealth(){
//		return health;
//	}
//	char getlevel(){
//		return level;
//	}
//	void sethealth(int h){
//		health=h;
//	}
//	void setlevel(char ch){
//		level=ch;
//	}
//	
//};
//int main(){
// 
//  //Static Allocation	
//    
//	cout<<"hii"<<endl;
//	Hero r;
//	cout<<"helllo";
////	h.sethealth(60);
////	h.level='A';
////    cout<<"Hero's health :"<<h.gethealth()<<endl;
////    cout<<"Hero's level :"<<h.level<<endl;
////  //Dynamic Allocation
////  Hero *b = new Hero;
//// 
////  b->sethealth(68);
////  b->level='B';
////  cout<<"Hero's health :"<<(*b).gethealth()<<endl;
////  cout<<"Hero's level :"<<(*b).level<<endl;
//
//
////	
////	cout<<"Hero's health"<<ramesh.gethealth()<<endl;
////	cout<<"size of rafy :"<<sizeof(Rafy)<<endl;
////	Rafy.sethealth(79);
////	Rafy.level='A';
////
////	cout<<"Rafy's health :"<<Rafy.gethealth()<<endl;
////	cout<<"Rafy's level :"<<Rafy.getlevel()<<endl;
////	
////
////	
////	return 0;
////	
//	
//}

//
//#include<iostream>
//using namespace std;
//class employee{
//	private:
//		string name;
//		int age;
//		float salary;
//	public:
//		string getname(){
//			return name;
//		}	
//	int getage(){
//		return age;
//	}
//	float getsalary(){
//		return salary;
//	}
//	void setname(string n){
//		name=n;
//	}
//	void setage(int a){
//		age=a;
//	}
//    void setsalary(float s){
//    	salary=s;
//	}
//
//};
//int main(){
//	cout<<"EMPLOYEE'S INFORMATION"<<endl;
//	
//	employee emp1;
//	
//	emp1.setname("Rafy Mustafa");
//	emp1.setage(19);
//	emp1.setsalary(500000);
//	
//	cout<<"name :"<<emp1.getname()<<endl;
//	cout<<"Age :"<<emp1.getage()<<endl;
//	cout<<"Salary :"<<emp1.getsalary()<<endl;
//	
//	cout<<"INFORMATION OF 2ND EMPLOYEE"<<endl;
//	employee emp2;
//    emp2.setname("Hidayatullah Shah");
//	emp2.setage(19);
//	emp2.setsalary(200000);
//	
//	cout<<"name :"<<emp2.getname()<<endl;
//	cout<<"Age :"<<emp2.getage()<<endl;
//	cout<<"Salary :"<<emp2.getsalary()<<endl;
// 
//    cout<<"INFORMATION OF 3RD EMPLOYEE"<<endl;   
//    employee emp3;
//    emp3.setname("/Shahmeer Ali");
//	emp3.setage(17);
//	emp3.setsalary(20000);
//	
//	cout<<"name :"<<emp3.getname()<<endl;
//	cout<<"Age :"<<emp3.getage()<<endl;
//	cout<<"Salary :"<<emp3.getsalary()<<endl;
//
//
//}


//
//
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"Enter number of terms to generate :";
//	cin>>n;
//	
//	int first=0;int second=1;
//	for(int i=0; i<n; i++)
//	{
//		cout<<first<<" ";
//		int next=first+second;
//		first=second;
//		second=next;		
//		}	
//	
//}
//
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"Enter number of terms that you want to generate :";
//	cin>>n;
//	
//	int first=0,second=1;
//	for(int i=0; i<n; i++){
//		cout<<first<<" ";
//		int next=first+second;
//		first=second;
//		second=next;		
//	}
//	
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"Enter number of terms that you want to generate :";
//	cin>>n;
//	
//	int first=0; int second=1;
//	for(int i=0; i<n; i++){
//		cout<<first<<" ";
//		int next=first+second;
//		first=second;
//		second=next;
//		}
//}
#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Eating......"<<endl;
		}
	
};
class Dog: public Animal{
	public:
		void bark(){
			cout<<"barking......"<<endl;
		}
	};
int main(){
	Dog d;
	d.eat();
	d.bark();
	return 0;
	
	
}














