#include <iostream>
#include <iostream>
#include "llist.h"
using namespace std;
using namespace listspace;
int main(){
node* hp = nullptr;      
node* cursor; 
char moreinput = 'y';
int value;
while (moreinput == 'y')
{cout << "Enter a number: ";
cin >> value;
listheadinsert(hp, value);
cout << "More numbers? y/n ";
cin >> moreinput;}
cout << "Count of input: " << listlength(hp) << endl << endl;
cursor = hp;
while (cursor != nullptr)
{cout << cursor->getdata() << endl;  
cursor = cursor->getlink(); 
}
system("pause");
return 0;}
