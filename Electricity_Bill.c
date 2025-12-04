#include<stdio.h>
int main() {
const int fan_W = 75;
const int light_W = 10;
const int ac_W = 1500;
const int fridge_W = 200;
float fan_hours, light_hours, ac_hours, fridge_hours;
float total_per = 0.0;
for(int day=1;day<=30;day++) {
    printf("\nDay %d:\n", day);
    printf("Enter Fan usage hours: ");
    scanf("%f", &fan_hours);
    printf("Enter Light usage hours: ");
    scanf("%f", &light_hours);
    printf("Enter AC usage hours: ");
    scanf("%f", &ac_hours);
    printf("Enter Refrigerator usage hours: ");
    scanf("%f", &fridge_hours);
    if(fan_hours<0||fan_hours>24||light_hours<0||light_hours>24||ac_hours<0||ac_hours>24||fridge_hours<0||fridge_hours>24){
        printf("INVALID INPUT");
        return 1;
    }
    total_per=total_per+(fan_hours*fan_W)+ (light_hours*light_W)+ (ac_hours*ac_W)+ (fridge_hours*fridge_W);
    }
float total=total_per/1000.0;
float bill= total * 6.0;
printf("\n----------------------------------------\n");
printf("Total Units Consumed: %.2f units\n", total);
printf("Estimated Bill: %.2f\n", bill);
printf("----------------------------------------\n");
return 0;
}
