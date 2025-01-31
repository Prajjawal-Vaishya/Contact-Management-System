// Add/Remove Contacts: Maintain a list of contacts with details (name, phone, email).
// Search Contacts: Search for contacts by name or phone number.
// Display Contacts: Show all contacts in alphabetical order.
// Edit Contacts: Modify contact details.

#include <stdio.h>
#include <string.h>
struct contact
{
    char name[50];
    char number[11];
    char email[120];
};

void display_contact(struct contact *arry1, int size)
{
    printf("CONTACT LIST \n");
    printf("---------------------+-----------------+-------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%-20s | %-15s | %s \n", arry1[i].name, arry1[i].number, arry1[i].email);
    }
}

int main(){
    struct contact contact_list[] = {
        {"Abhay Singh", "99xxxxxxxx", "atemplate@mail.com"},
        {"Vedansh Gupta", "82xxxxxxxx", "vtemplate@mail.com"},
        {"Prince Gupta", "93xxxxxxxx", "ptemplate@mail.com"},
        {"Navjot", "86xxxxxxxx", "ntemplate@mail.com"}};



    int arra1 = 1;
    int size = sizeof(contact_list) / sizeof(contact_list[0]);
    display_contact(contact_list, size);

    return 0;
}