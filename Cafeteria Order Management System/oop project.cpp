#include "MenuItemBase.h"
#include<vector>
#include<fstream>
using namespace std;
staff::staff(int ITEMNO, string ITEM, int PRICE) { // constructor overloaded
    itemno = ITEMNO;
    item = ITEM;
    price = PRICE;  // resolution operator enables us to access function, classes in different filke
}

string staff::getItem() const {   //encapsulation 
    return item;
}

int staff::getItemNo() const {
    return itemno;
}

int staff::getPrice() const {
    return price;
}
void admin::add(int ITEMNO, string ITEM, int PRICE) { 
    
      
    
     // usage of vector 
        staff* menu = new staff(ITEMNO, ITEM, PRICE); // Dynamically allocate MenuItem
        menuItems.push_back(menu);
    
}

void admin::order() {
    for (size_t i = 0; i < menuItems.size(); i++) {
        cout << menuItems[i]->getItemNo() << ". " << menuItems[i]->getItem() 
            << ": " << menuItems[i]->getPrice() << endl;
    }
    //displaying items
    int ord, quantity; // this is for user 
    cout << "Enter item number for order: ";
    cin >> ord;
    cout << "Enter quantity for the item: "; 
    cin >> quantity;
    if (ord >= 14) {
        cout << "invalid option ........ try again" << endl;
    }
    else 
    for (size_t i = 0; i < menuItems.size(); i++) {
        if (ord == menuItems[i]->getItemNo()) {
            int total = quantity * menuItems[i]->getPrice();
            cout << "Total: " << total << endl;
            cout << "*************** THANKS FOR PREFERING ***************" << std::endl;
            break; // Exit after finding the item
        }
    }
}
admin::~admin(void){
    for (size_t i = 0; i < menuItems.size(); i++) {
        delete menuItems[i]; // Free dynamically allocated memory
    }
}





void admin::notify() {
    cout << " your order will be ready after 15 minutes : please note down your order id " << endl;
}
/*so fstream is used to open /close read and write the file , so there are three types basically 
fstream is a base class 
if stream is derived from  base class 
ofstream is used to derived it from base class 
there are two types to open this file ie 
constructor of that class 
and member function open()*/


   
  
    