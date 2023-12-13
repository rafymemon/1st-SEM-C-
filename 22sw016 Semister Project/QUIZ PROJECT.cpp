
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class Test{
	private:
		int ans;
        int score=0;
		int per;
		void status(){
	system("cls");
	
	per=(score*100)/5;
	
	cout << "\n\t\t\t           REPORT CARD ";
	cout << "\n\t\t\t______________";
	cout << "\n\n\t\t\t TOTAL CORRECT ANSWER : " << score;
	cout << "\n\t\t\t YOUR SCORE PERCENTAGE: " << per << "%";
	
	if ( per > 50 )
    	{
	      cout << "\n\t\t\t YOUR QUIZ GAME STATUS:PASS! \n\t\t\tCONGRATULATIONS:) ";
          cout << "\n\t\t\t______________";
       }
	   	else
       {
	     cout << "\n\t\t\t YOUR QUIZ GAME STATUS: FAIL! :) ";
	     cout << "\n\t\t\t______________";

       }
    }
    public:
    	void PF(){
	
			system("CLS");	

		cout << "\n\t\t\tWELCOME TO THE PROGRAMMING QUIZ IN C++: ";
		cout << "\n\t\t\t______________";
		cout << "\n\n\t\t\t1-Which of the following is not a C++ data type? ";
		cout << "\n\t\t\t a) int ";
		cout << "\n\t\t\t b) string ";
		cout << "\n\t\t\t c) float ";
		cout << "\n\t\t\t d) char ";
		ans=getch();

 		if ( ans=='b' || ans=='B'){
     		cout << "\n\t\t\t correct answer!";
     		score++;
 		}
 		else
     		cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 2-What is the output of the following code? ";
		cout << "\n\t\t\t int a = 5, b = 2 ";
		cout << "\n\t\t\t a % b ";

		cout << "\n\t\t\t a) 2     ";
		cout << "\n\t\t\t b) 3     ";
		cout << "\n\t\t\t c) 2.5   ";
		cout << "\n\t\t\t d) Error ";
		ans=getch();

  		if ( ans=='b' || ans=='B'){
      		cout << "\n\t\t\t correct answer! ";
      		score++;
			}
  		else
        cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 3-What is the output of the following code?";
		cout << "\n\t\t\t int a = 5, b = 2 ";
		cout << "\n\t\t\t float c = a / b; ";
		cout << "c";
		cout << "\n\t\t\t a) 2     ";
		cout << "\n\t\t\t b) 2.5   ";
		cout << "\n\t\t\t c) 3     ";
		cout << "\n\t\t\t d) Error ";
		ans=getch();

		 if ( ans=='b' || ans=='B'){
     		cout << "\n\t\t\t correct answer!";
     		score++;
		}
 		else
    	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 4-Which of the following is the correct way to declare a C++ function? ";
		cout << "\n\t\t\t a) function int myFunction() ";
		cout << "\n\t\t\t b) int myFunction() ";
		cout << "\n\t\t\t c) myFunction() int ";
		cout << "\n\t\t\t d) None of the above ";
		ans=getch();

 		if ( ans=='b' || ans=='B'){
    	 cout << "\n\t\t\t correct answer!";
     	score++;
 		}
 		else
     	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 5-Which of the following is not a C++ loop statement? ";
		cout << "\n\t\t\t a) for      ";
		cout << "\n\t\t\t b) while    ";
		cout << "\n\t\t\t c) do-while ";
		cout << "\n\t\t\t d) until    ";
		cout << "\n\t\t\t e) None of the above ";
		ans=getch();

 		if ( ans=='b' || ans=='B'){
     		cout << "\n\t\t\t correct answer!";
     		score++;
 		}
 		else
 		cout << "\n\t\t\tincorrect answer! ";
			
  		status();
	
}
		void AP(){
	
		system("CLS");	

		cout << "\n\t\t\tWELCOME TO APLLIED PHYSICS QUIZ SHOW ";
		cout << "\n\t\t\t______________";
		cout << "\n\n\t\t\t1-Which of the following is used to store charges ? ";
		cout << "\n\t\t\t a) capacitor ";
		cout << "\n\t\t\t b) resistor ";
		cout << "\n\t\t\t c) inductor ";
		cout << "\n\t\t\t d) none of these ";
		ans=getch();

	 if ( ans=='a' || ans=='A'){
    	cout << "\n\t\t\t correct answer!";
    	score++;
 	}
 	else
    	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 2-What is the unit of the resistance? ";
		cout << "\n\t\t\t a) Simon";
		cout << "\n\t\t\t b) Ohm ";
		cout << "\n\t\t\t c) Farad ";
		cout << "\n\t\t\t d) None of these ";
		ans=getch();
  
  	if ( ans=='b' || ans=='B'){
     	cout << "\n\t\t\t correct answer!";
     	score++;
 	}
 	else
     	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 3-What is the unit of magnetic flux?";
		cout << "\n\t\t\t a) Tesla ";
		cout << "\n\t\t\t b) weber/meter^2 ";
		cout << "\n\t\t\t c) Both";
		cout << "\n\t\t\t d) none of above ";
		ans=getch();

 	if ( ans=='c' || ans=='C'){
     	cout << "\n\t\t\t correct answer!";
     	score++;
 	}
 	else
    	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 4-The study of electric charges at rest is called ? ";
		cout << "\n\t\t\t a) Electrostatics ";
		cout << "\n\t\t\t b) Electromagnetism ";
		cout << "\n\t\t\t c) Electric at rest ";
		cout << "\n\t\t\t d) None of the above ";
		ans=getch();
 
 	if ( ans=='a' || ans=='A'){
   		cout << "\n\t\t\t correct answer!";
   		score++;
	 }
 		else
   		cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 5-Which of the following behave like a semi-conductor ? ";
		cout << "\n\t\t\t a) Silicon (Si) ";
		cout << "\n\t\t\t b) Carbon (C) ";
		cout << "\n\t\t\t c) Oxygen (O) ";
		cout << "\n\t\t\t d) Hydrogen(H) ";
		ans=getch();

 	if ( ans=='A' || ans=='a'){
   		cout << "\n\t\t\t correct answer!";
    	score++;
 	}
 	else
    	cout << "\n\t\t\tincorrect answer! ";

  status();
}
		void FE(){

		system("CLS");	

		cout << "\n\t\t\tWELCOME TO THE ENGLISH QUIZ IN C++: ";
		cout << "\n\t\t\t______________";
		cout << "\n\n\t\t\t1-Which of the following is a noun ? ";
		cout << "\n\t\t\t a) in "   ;
		cout << "\n\t\t\t b) Ahmed ";
		cout << "\n\t\t\t c) Slow  ";
		cout << "\n\t\t\t d) and   ";
		ans=getch();

 	if ( ans=='b' || ans=='B'){
     	cout << "\n\t\t\t correct answer!";
     	score++;
 	}
 	else
     	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 2-What is correct statement? ";
		cout << "\n\t\t\t a) Noun is the naming word ";
		cout << "\n\t\t\t b) pronoun is used in place of noun ";
		cout << "\n\t\t\t c) verb is an action word ";
		cout << "\n\t\t\t d) ALL of above";
		ans=getch();

 	if ( ans=='d' || ans=='D'){
    	 cout << "\n\t\t\t correct answer!";
    	 score++;
 	}
 		else
    	 cout << "\n\t\t\tincorrect answer! ";
 

		cout << "\n\n\t\t\t 3-Which of following is reflexive pronoun ?";
		cout << "\n\t\t\t a) they ";
		cout << "\n\t\t\t b) Our ";
		cout << "\n\t\t\t c) Themselves ";
		cout << "\n\t\t\t d) none of above ";
		ans=getch();

 		if ( ans=='c' || ans=='C'){
     	cout << "\n\t\t\t correct answer!";
     	score++;
 	}
 		else
    	cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 4-Which of the following is the correct ? ";
		cout << "\n\t\t\t a) will you mind passing me that ball ";
		cout << "\n\t\t\t b) will you mind to pass me that ball ";
		cout << "\n\t\t\t c) Both are correct";
		cout << "\n\t\t\t d) None of the above ";
		ans=getch();
    if ( ans=='a' || ans=='A'){
    cout << "\n\t\t\t correct answer!";
    score++;
 	}
 	else
    cout << "\n\t\t\tincorrect answer! ";


		cout << "\n\n\t\t\t 5-Which of the following is used as interjection ? ";
		cout << "\n\t\t\t a) for ";
		cout << "\n\t\t\t b) while ";
		cout << "\n\t\t\t c) Alas ";
		cout << "\n\t\t\t d) until ";
		ans=getch();

	 if ( ans=='c' || ans=='C'){
  	   cout << "\n\t\t\t correct answer!";
   		score++;
 	}
 		else
		cout << "\n\t\t\tincorrect answer! ";
    	status();
	
}
    	
};



int main(){
	system("color f0"); 
	char in;
	Test T1;
	login:
	const string password="Rafy";
	string pass;
	char word;	
	system("CLS");
	cout<<"\n\t\tDo Login First";
    cout<<"\n\n\t\tEnter password : ";
    for(int i=1; i<=4; i++)
	{
      word=getch();
      pass+=word;
      cout<<"*";
    
      }
     if(password!=pass)
	{
       cout<<"\n\n\t\tLogin fail";
       getch();
       goto login;
             
    }
    else
	cout<<"\n\n\t\tLoged in successfully!\n\t\tPress any key to continue";
    getch();
    
    
	do{	
	system("CLS");
	char input;
	cout << "\n\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	
	cout << "\n\t\t\t    WELCOME TO THE QUIZ GAME SHOW :) ";
	cout << "\n\t\t\t______________-";
	cout << "\n\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
//	cout << "\n\t\t\t______________";
	cout << "\n\n\t\t\tSELECT ANY ONE SUBJECT TO START QUIZ :";
	cout << "\n\t\t\tPLEASE ENTER YOUR CHOICE(1,2,3)"; 
	cout << "\n\t\t\t______________";
	do{

	cout << "\n\t\t\t 1. PROGRAMMING FUNDAMENTALS IN C++ " ;
	cout << "\n\t\t\t 2. APPLIED PHYSICS  ";
	cout << "\n\t\t\t 3. FUNCTIONAL ENGLISH ";

	input=getch();
	
	switch(input){

		case '1':
			
		         T1.PF();
		break;
			
		case '2':
	             T1.AP(); 	
        break;
	    	
	    case '3':
	    	     T1.FE();
	    break;
	
	    default:
	        	cout << "\n\n\t\t\tOOPS! INVALID input: \n\t\t\tTRY_AGAIN " <<endl;
		break;
	}
}while (input != '1' && input != '2' && input != '3' );
	
       cout << "\n\n\t\t\tHEY! DO YOU WANT TO PARTICIPATE AGAIN (y,n) ";
       in=getch();
       while(in!='y' && in!='Y' && in!='n' && in!='N')
       {
       	cout<<"\nTry Again : ";
       	in=getche();
	   }
}while( in=='y' || in=='Y');  


return 0;
}
