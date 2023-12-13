//Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
//obtains from the user two money amounts in old-style British format (£9:19:11), adds
//them, and displays the result, again in old-style format. Use three functions. The first
//should obtain a pounds-shillings-pence value from the user and return the value as a
//structure of type sterling. The second should take two arguments of type sterling and
//return a value of the same type, which is the sum of the arguments. The third should take
//a sterling structure as its argument and display its value.

#include<iostream>

using namespace std;

struct sterling{
    int pounds, shillings, pence; 
};

int main(){
    sterling amt;
    float dPounds;
	cout << "Enter Decimal pounds: ";
	cin >> dPounds;

	amt.pounds = static_cast<int>(dPounds);
	float fracPounds = dPounds - amt.pounds;

	float dShillings =  fracPounds * 20;
	amt.shillings = static_cast<int>(dShillings);
	float fracShillings = dShillings - amt.shillings;

	amt.pence = static_cast<int>(fracShillings * 12);
	
	cout << "Equivalent in old notation: " << amt.pounds << "." << amt.shillings << "." << amt.pence << endl;
	
    return 0;
}
