#include <iostream>
#include <cstring>//standard libery which handles string
using namespace std; //using namespace standard
struct node // structure, holds customer name and link
{ 
 string customerName; 
 struct node *next; 
}; 
class Customer //class that will declare two pointer variables 
{
 struct node *ptrF, *ptrR; 
 
 public:
 Customer() //function to add customer
 {
 ptrF = ptrR = NULL;
 }
 void addCustomer()
 { 
 struct node *ptr; 
 string item; 
 //dyamic allocation of the size 
 ptr = new node; 
 //ask the user to read customer name 
 cout<<endl<<"ENTER CUSTOMER NAME : "; 
 cin>>item; 
 ptr -> customerName = item; 
402103827 PROGRAMMING 622 LEO THOKOZANI MAHLANGU
4 | P a g e
 //if the front is null then add to font 
 if(ptrF == NULL) 
 { 
 ptrF = ptrR = ptr;
 ptrF -> next = ptrR -> next = NULL; 
 } 
 else //add customer name to the next
 { 
 ptrR->next = ptr; 
 ptrR = ptr; 
 ptrR->next = NULL; 
 } 
 } 
//first customer 
 void callCustomer() 
 { 
 struct node *ptr; 
 
 ptr = new node;
 if(ptrF == NULL) 
 
 cout<<"There is no Customer for Now\n"; //PRint this if nothing is entered
 else //Print first customer
 { 
 ptr = ptrF; 
 cout<<"First customer is: "<< ptr->customerName<<endl;
 ptrF = ptrF -> next; //delete function
 //frees from the line
 delete ptr;
 } 
402103827 PROGRAMMING 622 LEO THOKOZANI MAHLANGU
5 | P a g e
 } 
};
int main() 
{ 
 int choice; 
 Customer C;
 while(choice != 3) 
 { 
 //SIMPLE MENU
 cout<<endl<<"******** Welcome to Virtual line system ************"<<endl; 
 cout<<"1. Call a customer"<<endl;
 cout<<"2. Add a customer"<<endl; 
 cout<<"3. Quit"<<endl; 
 cout<<"Enter option From Above : "<<endl;
 cin>>choice; 
 switch(choice)//switch is used to differenciate between cases and default 
 { 
 case 1: //call the customer
 C.callCustomer(); 
 break; 
 
 case 2: //adds a customer
 C.addCustomer(); 
 break; 
 
 case 3: //exit function
 cout<<"Quitting!!";
 exit(0); 
 break; 
 default: 
402103827 PROGRAMMING 622 LEO THOKOZANI MAHLANGU
6 | P a g e
 cout<<"Invalid choice"<<endl; 
 } } 
return 0;
} 