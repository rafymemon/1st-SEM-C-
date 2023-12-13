//Polymorphism: Two greek words POLY----many
//Morphs-----forms!!
//Statement: It is the ability of an entity to take moree than one shape that is required and act according to 
//the situation in need


//#include<iostream>
//using namespace std;
//class Rafy{
//	public:
//	void SayHello(){
//			cout<<"Hello Rafy mustafa"<<endl;
//					}
//	void SayHello(string name){
//			cout<<"Hello Rafy mustafa"<<name<<endl;
//}
//	int SayHello(string name, int n){
//			cout<<"Hello Rafy mustafa"<<endl;
//            return 1;   
//}
//	
//};
//int main(){
//	Rafy R;
//	R.SayHello();
//	
//	
//	
//}

                             ///FUNCTION OVERLOADING///
#include<iostream>
using namespace std;
//class FuncOver{
//	public:
		//Functions with two parameters
		int add(int num1, int num2){
			return num1+num2;
		}
	//Functions with three parameters
		int add(int num1, int num2,int num3){
			return num1+num2+num3;
		}
//	};
	int main(){
		cout<<add(10,20)<<endl;
		cout<<add(10,20,30)<<endl;
		return 0;
	}
