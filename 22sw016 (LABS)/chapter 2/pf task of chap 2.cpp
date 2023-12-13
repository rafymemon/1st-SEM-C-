///////////////////////////////chapter number 2 tasks////////////////////////////////////////
//task #01
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float g,f;
	cout<<"enter no. of gallons=";
	cin>>g;
	f=g/7.481;
	cout<<"no. of gallons in cubic feet="<<f<<endl;
}*/

//task#02
/*
   long pop1 =7290 , pop2 =11300 ,pop3 =16200 ;
    
    cout<<setw(8)<<"1990"<<setw(12)<<"135."<<endl
        <<setw(8)<<"1991"<<setw(12)<<"7290"<<endl
        <<setw(8)<<"1992"<<setw(12)<<"11300"<<endl
        <<setw(8)<<"1993"<<setw(12)<<"16200"<<endl;

    return 0;

////////////////task#03

const int num =10;
int num2;
  cout<<num<<"\n";
num2 = num + num ;

  cout<<num2<<"\n";
  cout<<--num2<<"\n";
return 0;
}*/

///////task#05/////////

/*
#include <iostream>
#include <ctype.h>

using namespace std;
int main()
{

	char letter ;
	int result;
	
	cout<<"Enter A letter : ";
	cin>>letter;
	
	result = islower(letter);
	cout<<result<<endl;
	
	return 0;
}*/
/////////////task#06///////////////////////
/*
#include <iostream>

using namespace std;

int main()
{
	float pound,USD,franc,deutschemark,yen;
	
	pound = 1.487;
	franc = 0.172;
	deutschemark = 0.584;
	yen = 0.00955;
	
	cout<<"\n\t******** Today USD rate is **********";
	cout<<"\n\t*                                   *";
	cout<<"\n\t* British Pound       = $1.487  USD *";
	cout<<"\n\t* French Franc        = $0.172  USD *";
	cout<<"\n\t* German Deutschemark = $0.584  USD *";
	cout<<"\n\t* Japanese yen        = $0.0095 USD *";
	cout<<"\n\t*                                   *";
	cout<<"\n\t*************************************";
	cout<<endl;
	
	cout<<"\nEnter an amount in Dollars : ";
	cin>>USD;
	
	float Pound = pound * USD ;
	float Franc = franc * USD ;
	float Deutschemark = deutschemark * USD;
	float Yen = yen * USD;
	
	cout<<"$"<<USD<<" = "<<Pound<<" British Pound"<<endl;
	cout<<"$"<<USD<<" = "<<Franc<<" French Pound"<<endl;
	cout<<"$"<<USD<<" = "<<Deutschemark<<" German Deutschemark"<<endl;
	cout<<"$"<<USD<<" = "<<Yen<<" Japacese yen"<<endl;
	
	return 0;
}*/

//////task#07/////

/*
#include <iostream>

using namespace std;

int main()
{
	float Celsius,Fahrenheit;
	
	cout<<"Enter the Temperature in Celsius degrees : ";
	cin>>Celsius;
	cout<<endl;
	
	Fahrenheit = Celsius * 9/5 + 32 ;
	
	cout<<Celsius<<" Celsius degrees are equal "<<Fahrenheit<<" Fahrenheit degrees"<<endl;
	
	return 0;
}
*/

///////////task#08///////////
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<"Tando-Muhammad-Khan"<<setfill('.')<<setw(12)<<"198765"<<endl;
	
	return 0;
}*/
////////////taskk#09//////////

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
       char firstchar;
       int a, b, c, d,result1,result2;
       cout << "Enter The 1st Fraction = ";
       cin >> a >> firstchar >> b;
       cout << "Enter The 2nd Fraction = ";
       cin >> c >> firstchar >> d;
       result1 = (a*d) + (b*c);
       result2 = b*d;
       cout << "Result == " << result1 << "/" << result2<<endl;

}
*/



