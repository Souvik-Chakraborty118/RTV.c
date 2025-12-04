#include <stdio.h>
#include <string.h>
#define MAX 100
#define URL_LEN 100
int main() {
char stack[MAX][URL_LEN];
int top=-1;
int n,choice;
char url[URL_LEN];
printf("Enter number of websites to visit: ");
scanf("%d", &n);
for(int i=0;i<n;i++) {
    printf("Enter URL %d: ", i + 1);
    scanf("%s", url);
        if (top==MAX-1) {
            printf("Stack Full! Cannot visit more pages.\n");
        } else {
            top++;
            strcpy(stack[top], url);
        }
    }
    do {
        printf("\n1. Press BACK\n2. Exit\nEnter choice: ");
        scanf("%d", &choice);
if(choice == 1){
    if(top == -1) {
        printf("No previous pages! Stack is empty.\n");
    }else{
        printf("BACK Closing: %s\n", stack[top]);
        top--;
        if (top>=0)
            printf("Now viewing: %s\n", stack[top]);
            else
            printf("No pages left to view.\n");
        }
}
}while(choice!=2);
return 0;
}
