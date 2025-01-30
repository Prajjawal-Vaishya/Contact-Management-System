// Add/Remove Contacts: Maintain a list of contacts with details (name, phone, email).
// Search Contacts: Search for contacts by name or phone number.
// Display Contacts: Show all contacts in alphabetical order.
// Edit Contacts: Modify contact details.

#include <stdio.h>
struct contact
{
    char name[50];
    char number[10];
    char email[120];
};


struct contact contact_list[] = {
    {"Abhay Singh","9954305692","abhaysingh@gmail.com"}, 
    {"Vedansh Gupta","8299529290","vedanshgupta@gmail.com"},
    {"Prince Gupta","9369522694","prajjawalvaishya@gmail.com"},
    {"Navjot","8649302045","navjot2@amityonline.com"}
};

int c_length(arr1) {
    for (int index = 0; index < 1000000000; index++) {
        if (arr1[index]=="") {

        }
    }
    
}

int display_contact() {
    for (int i = 0; i < 1000000000; i++)
    {
        
    }
    
}

int main() {
    int arra1 = 1;
    printf("%s",contact_list[arra1]);
    printf("%s",contact_list[3]);
    
    return 0;
}