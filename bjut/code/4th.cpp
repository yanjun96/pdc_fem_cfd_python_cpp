#include <stdio.h>
int main()
{
int height, weight;

printf("Please input your height, the unit is cm:  ");
scanf("%d",&height);

printf("Please input your weight, the unit is kg:  ");
scanf("%d",&weight);

float bmi;
bmi =weight / (height*height) *10000 ;

printf("According to your personal information, your bmi is %.3f.\n", bmi);
printf(" the health range is 18-22.\n ");

return 0;
}
