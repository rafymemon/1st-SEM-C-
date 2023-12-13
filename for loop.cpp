#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
/*	{
	char big='A';
	for (char i='A'; i<='Z'; i++ )
	cout<<i<<endl;

	
char small='a';
for(char k='a'; k<='z'; k++)
cout<<k<< ": "<<small<<endl;
	
}
}*/

 
 /*char word;
string password="";
for(int i=1; i<=5; i++)
{
	word=getch();
	password+=word;
	cout<<"*";
	
	cout<<"\n watch password(Y/N)";
	char input=getch();
	if(input=='Y')
	
	cout<<endl<<password;
}
*/

//seat numbers in loops//
/*int a,b;
for(a=1;a<=9;a++)
if(a==1) 
cout<<"22SW0"<<a<<endl;
else if(a>1)
cout<<'='<<a<<endl;

for(b=10;b<=20;b++)
if(b==9)
cout<<"22SW"<<b<<endl;
else if(b>10)
cout<<'='<<b<<endl;
}*/
/*
int a,b;
cout<<"odd numbers"<<endl;
for(a=1;a<=30;a+=2)
if(a%2==1)
cout<<a<<endl;

cout<<"\n even numbers"<<endl;
for(b=0;b<=30;b+=2)
if(b%2==0)
cout<<b<<endl; 
} */
/*
int count=0;
for(char chars='A'; chars<='Z';chars++)
{
	cout<<chars<<" ";
	++count;
	if(count==10)
	{
		cout<<"\n";
		count=0;
	}
}
} */


char a,b;
cin>>a>>b;
++a;
--b;
for(a;a<=b;a++)
{
	cout<<a<<" ";
}
}
