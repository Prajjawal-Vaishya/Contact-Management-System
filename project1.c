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
    printf("\n CONTACT LIST \n");
    printf("---------------------+-----------------+-------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-20s | %-15s | %s \n", arry1[i].name, arry1[i].number, arry1[i].email);
    }
    return;
}

void search_contact(struct contact *arry1, int size) {
    char search_char;
    printf("Search: ");
    scanf("%s",&search_char);
    for (int i = 0; i < size; i++) {
        if (search_char == arry1[i].name[0] || search_char == arry1[i].number[0] || search_char == arry1[i].email[0]) {
            printf("Detail of Contact: %s | %s |%s",arry1[i].name,arry1[i].number,arry1[i].email);
            return;
        }
    }
    printf("Not Found \n"); 
    return;
};

void remove_contact (struct contact *arry1, int size) {
    char remove_char;
    int temp = 0;
    struct contact blank_arr = {};
    printf("Which one want to remove: ");
    scanf("%s",&remove_char);
    for (int i = 0; i < size; i++) {
        if (remove_char == arry1[i].name[0] || remove_char == arry1[i].number[0] || remove_char == arry1[i].email[0]) {
            arry1[i] = arry1[i+1];
            temp = 1;
        }
        else if (temp==1 && i == size-1){
            arry1[size-1] = blank_arr;
        }
        else if (temp == 1) {
            arry1[i] = arry1[i+1];
        }   
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
    
    int size = sizeof(contact_list) / sizeof(contact_list[0]);
    display_contact(contact_list, size);
    
    struct contact contact_list = add_contact();


    size = sizeof(contact_list) / sizeof(contact_list[0]);
    display_contact(contact_list, size);
    remove_contact(contact_list,size);
    size = sizeof(contact_list) / sizeof(contact_list[0]);
    display_contact(contact_list, size);
    printf("\n SIZE- %d",size);
    return 0;
}