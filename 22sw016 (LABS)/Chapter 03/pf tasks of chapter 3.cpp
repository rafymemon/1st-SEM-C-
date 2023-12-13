////////////////TASKS OF CHAPTER # 03 (PROGRAMMING FUNDAMENTALS)

///////////////TASK#01////////
/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int m=1;
  
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<10;j++){
        cout<<num*m<<"\t";
        m++
       }
        cout<<endl;
    }
      return 0;
}
*/

//////////////TASK#02////////////////
/*

#include<iostream>
using namespace std;
int main()
{
    int num;
    float celsius, fahrenhiet;
  
    cout<<"Type 1 to convert Fahrenheit to Celsius,"<<endl<<"2 to convert Celsius to Fahrenheit:"<<endl;
    cin>>num;
  
    if(num==1)
    {
     cout<<"Enter temperature in Fahrenheit: ";
        cin>>fahrenhiet;
        celsius=(fahrenhiet-32)*5/9;
        cout<<"In Celsius = "<<celsius<<endl;
    }
    else if(num==2)
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
        fahrenhiet=(celsius*9/5)+32;
        cout<<"In Fahrenheit = "<<fahrenhiet<<endl;
    }
    else
    {
        cout<<"Invalid input.";
    }
  
    return 0;
}
*/

////////////////////TASK#03///////////////


/*
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    char a,b,c,d,e,f;
    int num;
  
    cout<<"Enter a number: ";
    a=getche();
    b=getche();
    c=getche();
    d=getche();
    e=getche();
    f=getche();
  
    num=(int)a-48;
    num=num*10+((int)b-48);
    num=num*10+((int)c-48);
    num=num*10+((int)d-48);
    num=num*10+((int)e-48);
    num=num*10+((int)f-48);
  
    cout<<endl<<"Number is: "<<num;
  
    return 0;
}
*/

///////////////////TASK#04////////////////


/*
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    char op, i;
    float num1, num2, ans;
  
    start:
    cout<<"Enter first number, operator, second number: ";
    cin>>num1>>op>>num2;
    switch(op)
        {
            case '+':
            ans=num1+num2;
            break;
            case '-':
                ans=num1-num2;
                break;
            case '*':
                ans=num1*num2;
                break;
            case '/':
                ans=num1/num2;
                break;
            default:
                cout<<"Invalid input.";
        }
      
        cout<<"Answer = "<<ans<<endl;
        cout<<"Do another (y/n)? ";
        i=getche();
        cout<<endl;
      
    if(i=='y')
        goto start;
      
    return 0;
}
*/


/////////////////TASK#04////////////////

/*

#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int i, j, k, c=5;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<c;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"X";
        }
        cout<<endl;
        c--;
    }
      
    return 0;
}
*/


//////////////////////TASK#05////////////////


/*
#include <iostream>
using namespace std;
int main()
{
    int numb;
    long fact;
    int stop;
  
    cout<<"Enter a number: ";
    cin>>numb;
  
    do
    {
        fact=1;
        for(int j=numb; j>0; j--)
            fact *= j;
          
        cout<<"Factorial is "<<fact<<endl;
        cout<<"Enter a number to continue..."<<endl;
        cout<<"Enter 0 to stop..."<<endl;
        cin>>numb;
    }
    while(numb!=0);

    return 0;
}
*/


//////////////////////TASK#07/////////////////////

/*
#include<iostream>
using namespace std;
int main()
{
    int amount, years;
    float rate, total;
  
    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter number of years: ";
    cin>>years;
    cout<<"Enter interest rate (percent per year): ";
  
    cin>>rate;
    rate=rate/100;
    total=amount;
  
    for(int i=0;i<years;i++){
        total=total + (total * rate);
    }
    cout<<"At the end of "<<years<<" years you will have "<<total<<" dollars";
  
    return 0;
}
*/

///////////////TASK#08////////////////

/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound1, shilling1, pence1, pound2, shilling2, pence2, poundSum, shillingSum, penceSum;
    char ch;
    do
    {
        cout<<"Enter first amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound1;
        cout<<"Enter Shilling: ";
        cin>>shilling1;
        cout<<"Enter Pence: ";
        cin>>pence1;
      
        cout<<"Enter second amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound2;
        cout<<"Enter Shilling: ";
        cin>>shilling2;
        cout<<"Enter Pence: ";
        cin>>pence2;
      
        poundSum=pound1+pound2;
        shillingSum=shilling1+shilling2;
        penceSum=pence1+pence2;
      
        if (penceSum >= 12){
            shillingSum = shillingSum + (penceSum/12);
            penceSum = penceSum%12;
        }
      
        if (shillingSum >= 20){
            poundSum = poundSum + (shillingSum/20);
            shillingSum = shillingSum%20;
        }
          
        cout<<"Total is :\x9c"<<poundSum<<"."<<shillingSum<<"."<<penceSum<<endl;
        cout<<"Do you wish to continue (y/n)?"<<endl;
        ch=getche();
    }while(ch=='y');
  
    return 0;
}
*/





/////////////////////////TASK#09//////////////////


/*
#include<iostream>
using namespace std;
int main()
{
    int years=0;
    float rate, amount, total;
  
    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter final amount: ";
    cin>>total;
    cout<<"Enter interest rate (percent per year): ";
    cin>>rate;
    rate=rate/100;
  
    while(total>=amount)
    {
        amount=amount + (amount * rate);
        years++;
    }
  
    cout<<"At the end of "<<years<<" years you will have "<<total<<" dollars";
  
    return 0;
}
*/







