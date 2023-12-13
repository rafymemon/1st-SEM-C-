#include<iostream>
using namespace std;
enum etype {laborer, secretary, manager, accountant, executive, researcher};
int main(){
    etype etype1;
    char type;
    cout << "Enter employee type (first letter only for laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
switch (type){
        case 'l': etype1 = laborer; break;
        case 's': etype1 = secretary; break;
        case 'm': etype1 = manager; break;
        case 'a': etype1 = accountant; break;
        case 'e': etype1 = executive; break;
        case 'r': etype1 = researcher; break;
        default:
            break;
  }
    switch(etype1){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
    
    return 0;
}
