// Add/Remove Contacts: Maintain a list of contacts with details (name, phone, email).
// Search Contacts: Search for contacts by name or phone number.
// Display Contacts: Show all contacts in alphabetical order.
// Edit Contacts: Modify contact details.

#include <stdio.h>
#include <string.h>
struct contact {
    char name[50];
    char number[11];
    char email[120];
};

void display_contact(struct contact *arry1, int size) {
    printf("CONTACT LIST \n");
    printf("---------------------+-----------------+-------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-20s | %-15s | %s \n", arry1[i].name, arry1[i].number, arry1[i].email);
    }
}



struct contact add_contact () {
    struct contact new_contact;
    printf("Enter a name: ");
    scanf("%s",new_contact.name);
    printf("Enter a number: ");
    scanf("%s",new_contact.number);
    printf("Enter a mail id: ");
    scanf("%s",new_contact.email);
    return new_contact;
}

int main() {
    struct contact contact_list[] = {
        {"Abhay Singh", "99xxxxxxxx", "atemplate@mail.com"},
        {"Vedansh Gupta", "82xxxxxxxx", "vtemplate@mail.com"},
        {"Prince Gupta", "93xxxxxxxx", "ptemplate@mail.com"},
        {"Navjot", "86xxxxxxxx", "ntemplate@mail.com"}
        };


    printf("%s \n", contact_list[3].name);
    int size = sizeof(contact_list) / sizeof(contact_list[0]);
    display_contact(contact_list, size);

    int position = size;
    contact_list[position] = add_contact();

    size = sizeof(contact_list) / sizeof(contact_list[0])+1;
    display_contact(contact_list, size);

    return 0;
}