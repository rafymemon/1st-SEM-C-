//////////////////////////structures/////////////////////

/*
#include<iostream>
using namespace std;
struct hostel{
	int hostleroomno;
	int hostelroommates;
	int hostelroomcharges;	
};
int main()
{
	hostel r1;
	cout<<"Enter hostel room number"<<endl;
	cin>>r1.hostleroomno;
	cout<<"Enter name of roommate"<<endl;
	cin>>r1.hostelroommates;
	cout<<"Enter hostel room charges"<<endl;
	cin>>r1.hostelroomcharges;
}
*/

/*
#include<iostream>
using namespace std;
struct Aeroplane{
	string Aeroplanecompany;
	int Aflightcharges;
	int Apassengersquantity;
	};
struct passengersinfo{

    string name;
	int cnicno;
	int flightcharges;
	int destination;
};
int main()
{
	Aeroplane A;
	cout<<"Enter Aeroplane's company"<<endl;
	cin>>A.Aeroplanecompany;
	cout<<"Enter Aeroplane's flight charges"<<endl;
	cin>>A.Aflightcharges;
	cout<<"Enter Aeroplane's passengers quantity"<<endl;
	cin>>A.Apassengersquantity;
    passengersinfo P;
    cout<<"enter passenger's name"<<endl;
    cin>>P.name;
    cout<<"Enter passenger's Cnic number"<<endl;
    cin>>P.cnicno;
    cout<<"Enter passenger's flight charges"<<endl;
    cin>>P.flightcharges;
    cout<<"Enter passenger's destination"<<endl;
    cin>>P.destination;
    }
*/

////////////////enumeration/////////////////////
/*
#include<iostream>
using namespace std;

enum status {fail,pass};

int main()
{
	status P=pass;
	cout<<P;
	status F=fail;
	cout<<F;
	
	int marks=50;
	
	if(marks>=50)
	{
		status P=pass;
	}else
	status F=fail;
	
}
*/
/*
#include<iostream>
using namespace std;
struct university{
        string universityname;
        string vicechancellor;
        int semisterfess;
        int batch;
    };
struct student{
    string name;
	int id;
	float Cgpa;
	char grade;
	int rollno;
	int dateofbirth;
	char nationality;
	
};
int main()
{
	university U;
	cout<<"Enter University's name"<<endl;
	cin>>U.universityname;
	cout<<"Enter name of the vice chancellor of the university"<<endl;
	cin>>U.vicechancellor;
	cout<<"Enter semister fees"<<endl;
	cin>>U.semisterfess;
	cout<<"Enter batch"<<endl;
	cin>>U.batch;
	student S;
	cout<<"Enter student's name"<<endl;
	cin>>S.name;
	cout<<"Enter student's id"<<endl;
	cin>>S.id;
	cout<<"Enter Cgpa of the student"<<endl;
	cin>>S.Cgpa;
	cout<<"Enter Student's grade in mid of the first semister"<<endl;
	cin>>S.grade;
	cout<<"Enter roll number of the student"<<endl;
	cin>>S.rollno;
	cout<<"Enter date of birth of the student";
	cin>>S.dateofbirth;
	cout<<"nationality of the student"<<endl;
	cin>>S.nationality;

return 0;
}
	
*/

////////////////////////ARRAYS.//////////////////
/*
#include<iostream>
using namespace std;
int main()
{
	int array[10];
	cout<<"Enter the ten intigers"<<endl;
    cin>>array[0];
    cin>>array[1];
    cin>>array[2];
    cin>>array[3];
    cin>>array[4];
    cin>>array[5];
    cin>>array[6];
    cin>>array[7];
    cin>>array[8];
    cin>>array[9];
    
    cout<<"the values in the arrays are: \n";
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;
    cout<<array[5]<<endl;
    cout<<array[6]<<endl;
    cout<<array[7]<<endl;
    cout<<array[8]<<endl;
    cout<<array[9]<<endl;
	
	return 0;
	}
	
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter an integer"<<endl;
		cin>>arr[i];
		
	}
	cout<<"the values of the arrays are: \n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
	}	
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int days,month,total;
    int days_per_month[]={31,28,31,30,31,30.31,31,30,31,30,31};
    cout<<"Enter the month number"<<endl;
    cin>>month;
    cout<<"Enter the day number"<<endl;
    cin>>days;
    total=days;
    for(int x=0;x<month-1;x++)
    total+=days_per_month[x];
    cout<<"the number of days in this days till the date ="<<total<<endl;
    

}
*/

#include<iostream>
using namespace std;
int main()
{
	int data []={1,3,2,5,9,11,13,12,17,19,23,99};
	int SIZE=sizeof(data)/sizeof(int);
	
	for(int i=0;i<SIZE;i++)
	  {
	  if(data[i]>9 && data[i]%2!=0)	  

	   cout<<data[i]<<" ";
}
	   return 0;
	
	
	
}

















