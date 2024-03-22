#include<stdio.h>
int main(){
   float fahrenheit, celsius;

   printf("Enter celsius: ");
   scanf("%f",&celsius);
   fahrenheit= (celsius *9/5)+32;
   printf("fahrenheit: %f ", fahrenheit);
}
