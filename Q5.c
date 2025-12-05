#include <stdio.h>
#include <string.h>
union ID {
    long aadhar;
    char passport[50];
};
int main() {
union ID card;
int c;
printf("Smart Card Storage:\n");
printf("1. Store Aadhar Number\n");
printf("2. Store Passport Code\n");
printf("Enter your choice: ");
scanf("%d", &c);
getchar();
    if(c==1){
        printf("Enter Aadhar Number: ");
        scanf("%ld", &card.aadhar);
        printf("\nStored Aadhar: %ld\n", card.aadhar);
        printf("Note: Aadhar and Passport share the same memory.\n");
    }else if(c==2){
        printf("Enter Passport Code: ");
        scanf("%[^\n]s", card.passport);
        printf("\nStored Passport: %s\n", card.passport);
        printf("Note: Storing Passport overwrites the same memory.\n");
    }else{
       printf("Invalid choice!\n");
    }
    return 0;
}
