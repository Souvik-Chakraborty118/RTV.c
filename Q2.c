#include <stdio.h>
int main() {
int attendance[30];
int pt = 0, ab= 0;
float p;
printf("Enter attendance for 30 days (1=Present, 0=Absent):\n");
for(int i=0;i<30;i++) {
    printf("Day %2d: ", i + 1);
    scanf("%d", &attendance[i]);
        if(attendance[i] != 0 && attendance[i] != 1) {
        printf("Invalid input! Enter only 0 or 1.\n");
        i--;
        continue;
    }
}
for(int i=0;i<30;i++) {
        if(attendance[i] == 1)
            pt++;
}
ab =30-pt;
p=(pt/30.0)*100.0;
printf("\n-------------------------------------------\n");
    printf("Total Present Days : %d\n", pt);
    printf("Total Absent Days  : %d\n", ab);
    printf("Attendance %%       : %.2f%%\n",p);

    if (p>=75)
        printf("Status: Meets Minimum Requirement (75%%)\n");
    else
        printf("Status: Does NOT Meet Minimum Requirement (75%%)\n");

    printf("-------------------------------------------\n");
    return 0;
