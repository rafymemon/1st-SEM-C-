///////////////////////TASK NUMBER 07/////////////////


#include<iostream>
using namespace std;
struct my_family{
	
	char family_members;
	int siblings;
	
	
};
struct father{
	string father_name;
	string father_proffesion;
	int age;
	int phone_number;
	
};
struct sister{
	string name;
	string nick_name;
	int age;
	int contact_number;	
};
struct brother{
	string name;
	string nick_name;
	int age;
	int contact_number;
	};
int main()
{
    my_family F;
	cout<<"My family have 7 members"<<F.family_members<<endl;	
	cout<<"I have four siblings"<<F.siblings<<endl;
	
	father Fath;
    cout<<"Father's Name :\t\t Ghulam Mustafa"<<Fath.father_name<<endl;
	cout<<"Father's proffession :\t\t Primary teacher"<<Fath.father_proffesion<<endl;
	cout<<"Father's age :\t\t49"<<Fath.age<<endl;
    cout<<"Father's contact name :\t\t  03332818452"<<Fath.phone_number<<endl;

    sister sis1;
    cout<<"sister's name :\t\t Aisha Mustafa"<<sis1.name<<endl;
    cout<<"Nickname :\t\t churail"<<sis1.nick_name<<endl;
    cout<<"sister's age :\t\t 21"<<sis1.age<<endl;
    cout<<"sister's contact number :\t\t 03313833190"<<sis1.contact_number<<endl;
    
    sister sis2;
    cout<<"second sister's name :\t\t Areeba mustafa"<<sis2.name<<endl;
    cout<<"nickname :\t\t phoons and parhooo"<<sis2.nick_name<<endl;
    cout<<"sister's age :\t\t 19"<<sis2.age<<endl;
    cout<<"contact number :\t\t 03411287138"<<sis2.contact_number<<endl;
    
    brother bro;
    cout<<"brother's name :\t\t Shafy mustafa"<<bro.name<<endl;
    cout<<"nickname :\t\t bindrii gadhi"<<bro.nick_name<<endl;
    cout<<"age :\t\t 15"<<bro.age<<endl;
    cout<<"contact number :\t\t 0313324203"<<bro.contact_number<<endl;
    
    return 0;









}












