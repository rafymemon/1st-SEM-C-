#include <iostream>
#include <iomanip>
using namespace std;


struct Time{
	 int hours;
	 int minutes;
	 int seconds; 
};


int main(){  
	struct Time time1;
	struct Time time2;
	struct Time timeSum;
	
	cout<<"Enter a time value in hours, minutes, and seconds 1: ";
	cin>>time1.hours>>time1.minutes>>time1.seconds;
	cout<<"Enter a time value in hours, minutes, and seconds 2: ";
	cin>>time2.hours>>time2.minutes>>time2.seconds;
	
	int totalSeconds1=time1.hours*60*60+time1.minutes*60+time1.seconds;
	
	int totalSeconds2=time2.hours*60*60+time2.minutes*60+time2.seconds;
	
	int sumSeconds=totalSeconds1+totalSeconds2;
	
	cout<<"\nThe total number of seconds time 1: "<<totalSeconds1<<" seconds\n";
	cout<<"The total number of seconds time 2: "<<totalSeconds2<<" seconds\n";
	cout<<"\nTime 1: "<<setw(2) << setfill('0')<<time1.hours<<":"<<setw(2) << setfill('0')<<time1.minutes<<":"<<setw(2) << setfill('0')<<time1.seconds<<"\n";
	cout<<"Time 2: "<<setw(2) << setfill('0')<<time2.hours<<":"<<setw(2) << setfill('0')<<time2.minutes<<":"<<setw(2) << setfill('0')<<time2.seconds<<"\n";
	cout<<"\nAdd two times\n";
	cout<<"The sum of two times: "<<sumSeconds<<" seconds\n";
	
	timeSum.minutes = sumSeconds / 60;
	timeSum.seconds = sumSeconds % 60;
	timeSum.hours = timeSum.minutes  / 60;
	timeSum.minutes  = timeSum.minutes  % 60;
	cout<<"Time sum: "<<setw(2) << setfill('0')<<timeSum.hours<<":"<<setw(2) << setfill('0')<<timeSum.minutes<<":"<<setw(2) << setfill('0')<<timeSum.seconds<<"\n";
	system("pause");
	
	return 0;
}
