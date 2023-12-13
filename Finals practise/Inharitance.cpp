////INHERITANCE//////////

//#include<iostream>
//using namespace std;
//class Human{
//	public:
//		int height;
//		int weight;
//		int age;
//	public:
//	    int getAge(){
//	    	return this->age;
//		}		
//	void setweight(int w)
//	{
//	    this->weight='w';
//	}
//		
//	
//};
//class Male: public Human{
//	public:
//		string color;
//		
//	void religion(){
//		cout<<"Muslim"<<endl;
//	}
//	
//	
//	
//};
//int main(){
//	Male obj1;
//	obj1.age=70;
//	cout<<"Age :"<<obj1.age<<endl;
//	
//	obj1.height=5;
//	cout<<"Height :"<<obj1.height<<"Ft"<<endl;
//
//    obj1.setweight('70');
//    cout<<"weight: "<<obj1.weight<<"kg"<<endl;
//	obj1.color="Black";
//	cout<<"Colour :"<<obj1.color<<endl;
//    
//    obj1.religion();
//
//
//}


////SINGLE INHERITANCE////

//
//#include<iostream>
//using namespace std;
//class Animal{
//	public:
//	string name;
//	int age;
//	int weight;
//	
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//	};
//	class dog: public Animal{		
//		
//	};
//int main(){
//	dog d;
//	cout<<d.age<<endl;
//	cout<<d.name<<endl;
//	d.speak();	
//	
//}


////MULTI--LEVEL  INHERITANCE////

//
//#include<iostream>
//using namespace std;
//class Animal{
//	public:
//	string name;
//	int age;
//	int weight;
//	
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//	};
//class dog: public Animal{		
//		
//	};
//class germanshepherd: public dog{
//	
//};
//int main(){
//	germanshepherd g;
//	g.speak();
//	
//	
//}

/////////MULTIPLE INHERITANCE///

//#include<iostream>
//using namespace std;
//class Animal{
//	public:
//	string name;
//	int age;
//	int weight;
//	
//	public:
//		void bark(){
//			cout<<"barking"<<endl;
//		}
//	};
//class Human{
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//	
//	};
//class Hybrid: public Animal, public Human{
//		
//};
//int main(){
//	Hybrid hyb;
//	hyb.bark();
//	hyb.speak();
//	cout<<hyb.age<<endl;
//	
//	
//}


//////////////HEIHERCHICHAL INHERITANCE/////

#include<iostream>
using namespace std;
class A{
	public:
		void func1(){
			cout<<"into the function 1"<<endl;
	}
};
class B: public A{
	public:
	void func2(){
		cout<<"into the function 2"<<endl;
	}
};
class C: public A{
	public:
	void func3(){
		cout<<"into the function 3"<<endl;
	}
};
int main(){
	A obj1;
	obj1.func1();
	
	B obj2;
	obj2.func1();
	obj2.func2();
	
	C obj3;
	obj3.func1();
	obj3.func3();	
}	
	
