#include<iostream>
#include<iomanip>
using namespace std;
struct employee{
	int emp_num;
	float emp_compansation;
};
int main()
{
	employee emp1,emp2,emp3;
	cout<<"Enter first employee number"<<endl;
	cin>>emp1.emp_num;
	cout<<"Enter first employee compansation "<<endl;
	cin>>emp1.emp_compansation;
	
	cout<<"Enter second employee number"<<endl;
	cin>>emp2.emp_num;
	cout<<"Enter second employee compansation "<<endl;
	cin>>emp2.emp_compansation;
	
	cout<<"Enter third employee number"<<endl;
	cin>>emp3.emp_num;
	cout<<"Enter third employee compansation "<<endl;
	cin>>emp3.emp_compansation;

    cout << setw(15) << "employee number" << setw(30) << "employee’s compensation" << endl ;
    cout << setw(15) << emp1.emp_num      << setw(30) << emp1.emp_compansation << endl ;
    cout << setw(15) << emp2.emp_num      << setw(30) << emp2.emp_compansation << endl ;
    cout << setw(15) << emp3.emp_num      << setw(30) << emp3.emp_compansation << endl ;

    cout<< "" <<endl;
	return 0; 

}
