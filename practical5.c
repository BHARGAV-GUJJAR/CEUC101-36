#include<stdio.h>
int main()
{
   long int total=1441981744;

   double women=48.4;
   double total_women=total*women/100;


   double men=51.6;
   double total_men=total*men/100;

   double lr_overall=total*85.95/100;
   double lr_women=total_women*62.84/100;
   double lr_men=total_men*80.95/100;

   double ilr_women=total_women*37.16/100;
   double ilr_men=total_men*19.05/100;

   double lr_gap=lr_men-lr_women;

   printf("the total number of women are %f \n",total_women);
   printf("the total number of men are %f \n",total_men);
   printf("the total number of overall literacy rate is %f \n",lr_overall);
   printf("the total number of  literate women are %f\n",lr_women);
   printf("the total number of  literate men are %f \n",lr_men);
   printf("the total number of  iliterate women are %f\n",ilr_women);
   printf("the total number of  iliterate men are %f \n",ilr_men);
   printf("the gap of literacy between men and women is %f \n",lr_gap);
   printf("there should be more support for women towards education from there parents and teachers");
   return 0;
}
