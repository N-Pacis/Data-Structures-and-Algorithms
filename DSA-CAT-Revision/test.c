#include<stdio.h>
#include<math.h>
  struct borrowerInformation{
         char name[10];
         char address[30];
         char dob[20];
         char gender[5];
         float principalMount;
         float rate;
         float time;
         float EMI;
         float R;
         float T;
         float TLP;
} str;
 int main(){
      printf("Enter name   :");
      scanf("%s",str.name);
      printf("Entered name: %s\n",str.name);
      printf("\nEnter address: ");
      scanf("%s",str.address);
      printf("Entered address: %s\n", str.address);
      printf("\nEnter DOB in the format dd/mm/yy: ");
      scanf("%s",str.dob);
      printf("Entered date: %s\n", str.dob);
      printf("\nEnter gender  : ");
      scanf("%s",str.gender);
      printf("Entered gender: %s\n", str.gender);
      printf("\nEnter prinipal amount  in Rwf : ");
      scanf("%f",str.principalMount);
      printf("Entered principal amount: %f\n", str.principalMount);
      printf("\nEnter interest rate percent : ");
      scanf("%f",str.rate);
      printf("Entered interest rate: %f\n", str.rate);
      printf("\nEnter payment time in years: ");
      scanf("%f",str.time);
      printf("Entered time: %f\n", str.time);
      printf("\n\nBorrower basic information");
      printf("\n\n=============================== ");
      printf("\n\nName :%s", str.name);
      printf("\nAddress :%s", str.address);
      printf("\nDate of birth :%s",str.dob);
      printf("\nGender :%s",str.gender);
        str.R = str.rate/(12 * 100);
        str.EMI = (str.principalMount * str.R * (1 + str.R) * (pow(1,str.T)))/ ((1 + str.R) * (pow(1,str.T))-1);
        str.T = str.time * 12;
        str.TLP = str.EMI * str.T;
      printf("\n\n\npayment information");
      printf("\n\n========================");
      printf("\n\nMonthly EMI is RwF : %.3f");
      printf("\nTotal amount to be payment in %f monts is RwF %f", str.time,str.TLP);
      return 0;
 }