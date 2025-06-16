//1. Accept a value and print it.
#include<stdio.h>
int main(){
  int a;
  printf("\nEnter a number : ");
  scanf("%d",&a);
  printf("\nThe Number is %d",a);
  return 0;
}


//2. Accept two values and print addition of it
#include<stdio.h>
int main(){
  int no1,no2;
  printf("\nEnter number 1: ");
  scanf("%d",&no1);
  printf("\nEnter number 2: ");
  scanf("%d",&no2);
  printf("\nThe Addition of two number is %d",no1+no2);
  return 0;
}


//3. Accept two values and print multiplication of it.
#include<stdio.h>
int main(){
  int no1,no2;
  printf("\nEnter number 1: ");
  scanf("%d",&no1);
  printf("\nEnter number 2: ");
  scanf("%d",&no2);
  printf("\nThe Addition of two number is %d",no1*no2);
  return 0;
}


//4. Accept a decimal value and print it without decimal values.
#include<stdio.h>
int main(){
  float a;
  printf("\nEnter value of a : ");
  scanf("%f",&a);
  int without_decimal = a;
  printf("\nValue without decimal : %d",without_decimal);
  return 0;
}


//5. Accept a decimal value and print values after decimal point.
#include<stdio.h>
int main(){
  float a;
  printf("\nEnter value of a : ");
  scanf("%f",&a);
  int without_decimal = a;
  float after_decimal = a - without_decimal;
  printf("\nValue without decimal : %f",after_decimal);
  return 0;
}


//6. Accept a value and find last digit of it.
#include<stdio.h>
int main(){
  int a;
  printf("\nEnter value of a : ");
  scanf("%d",&a);
  printf("\nThe orignal value is : %d",a);
//  int last_digit = a % 10;
  printf("\nThe last digit is : %d",a % 10);
  return 0;
}


//7. Accept a value and find second last digit of it.
#include<stdio.h>
int main(){
  int a;
  printf("\nEnter value of a : ");
  scanf("%d",&a);
  printf("\nThe orignal value is : %d",a);
//  int second_last_digit = a % 100;
  printf("\nThe second last digit is : %d",(a % 100)/10);
  return 0;
}


//8. Accept length and width of rectangle and find the area using the formula: area = length*width
#include<stdio.h>
int main(){
  float length,width,area=0;
  printf("\nEnter length : ");
  scanf("%f",&length);
  printf("\nEnter width : ");
  scanf("%f",&width);
  area = (length*width);
  printf("\nArea is : %.2f",area);
  return 0;
}


//9. Accept radius of circle and find the area using the formula: area = PI*r*r
#include<stdio.h>
int main(){
  float radius,area=0;
  const float PI = 3.14;
  printf("\nEnter radius : ");
  scanf("%f",&radius);
  area = (PI*radius*radius);
  printf("\nArea is : %.2f",area);
  return 0;
}


//10. Accept months and convert into weeks.
#include<stdio.h>
int main(){
  float month,week=0;
  printf("\nEnter month : ");
  scanf("%f",&month);
  week = month*4.345;
  printf("\nWeek is %.2f",week);
  return 0;
}


//11. Accept seconds and convert into minutes.
#include<stdio.h>
int main(){
  float second,minute=0;
  printf("\nEnter time in second : ");
  scanf("%f",&second);
  minute = second/60;
  printf("\nMinute is %.2f",minute);
  return 0;
}


//12. Accept Fahrenheit (°F) and convert into Celsius (°C)
#include<stdio.h>
int main(){
  float fahrenheit,celsius;
  printf("\nEnter fahrenheit : ");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit-32)*5/9;
  printf("\nCelsius is %.2f",celsius);
  return 0;
}


//13. Accept weeks and convert into millennium.
#include<stdio.h>
int main(){
  float weeks,millennium;
  printf("\nEnter weeks : ");
  scanf("%f",&weeks);
  millennium = weeks/52140;
  printf("\nMillennium is %f",millennium);
  return 0;
}


//14. Accept centauries and convert into hours.
#include<stdio.h>
int main(){
  float century, years,days,hours;
  printf("\nEnter centuaries : ");
  scanf("%f",&century);
  years = century*100;
  days = years*365;
  hours = days*24;
  printf("\nHours is %.2f",hours);
  return 0;
}


//15. Accept centauries and convert into decades.
#include<stdio.h>
int main(){
  float century,decades;
  printf("\nEnter centuries : ");
  scanf("%f",&century);
  decades = century*10;
  printf("\nDecades is %.2f",decades);
  return 0;
}


//16. Accept years and convert into minutes.
#include<stdio.h>
int main(){
  float years,days,hours,minutes;
  printf("\nEnter years : ");
  scanf("%f",&years);
  days = years*365;
  hours = days*24;
  minutes = hours*60;
  printf("\nMinutes is %.2f",minutes);
  return 0;
}


//17. Accept feet and convert into centimetres.
#include<stdio.h>
int main(){
  float feet,cm;
  printf("\nEnter feets : ");
  scanf("%f",&feet);
  cm = feet*30.48;
  printf("\nCenturies is %.2f",cm);
  return 0;
}


//18. Accept minutes and convert into days.
#include<stdio.h>
int main(){
  float minutes,hour,days;
  printf("\nEnter minutes : ");
  scanf("%f",&minutes);
  hour = minutes/60;
  days = hour/24;
  printf("\nHours is %.2f",hour);
  return 0;
}


//19. Accept kilograms and convert into grams.
#include<stdio.h>
int main(){
  float kg,g;
  printf("\nEnter kg : ");
  scanf("%f",&kg);
  g = kg*1000;
  printf("\nGram is %.2f",g);
  return 0;
}


//20. Accept centauries and convert into months
#include<stdio.h>
int main(){
  float century,year,month;
  printf("\nEnter centuries : ");
  scanf("%f",&century);
  year = century*100;
  month = year*12;
  printf("\nMonths are %.2f",month);
  return 0;
}


//147. Accept three values and find the average of them.
#include<stdio.h>
int main(){
  int no1,no2,no3;
  printf("\nEnter number 1 : ");
  scanf("%d",&no1);
  printf("\nEnter number 2 : ");
  scanf("%d",&no2);
  printf("\nEnter number 3 : ");
  scanf("%d",&no3);
  printf("\nAverage of numbers is : %d",(no1+no2+no3)/3);
  return 0;
}


//148. Accepts yearly salary. And find monthly salary (with two decimal places).
#include<stdio.h>
int main(){
  float yearly_sal,monthly_sal;
  printf("\nEnter yearly_sal : ");
  scanf("%f",&yearly_sal);
  monthly_sal = yearly_sal/12;
  printf("\nMonthly_sal is %.2f",monthly_sal);
  return 0;
}


//149. Accept total distance in KM and petrol in litres. Find average per litre.
#include<stdio.h>
int main(){
  float total_distance,petrol,avg_per_litre;
  printf("\nEnter total distance : ");
  scanf("%f",&total_distance);
  printf("\nEnter petrol in litres : ");
  scanf("%f",&petrol);
  avg_per_litre = total_distance / petrol;
  printf("\nAverage per litre is %.2f",avg_per_litre);
  return 0;
}


//150. Accept an uppercase character and print its lowercase
#include<stdio.h>
int main(){
  char upper_case_char;
  printf("\nEnter upper case_char : ");
  scanf("%c",&upper_case_char);
//   lower_case_char = upper_case_char+32;
  printf("\nLower case character is : %c",upper_case_char+32);
  return 0;
}


//151. Accept a lowercase character and print its lowercase
#include<stdio.h>
int main(){
  char lower_case_char,upper_case_char;
  printf("\nEnter lower case_char : ");
  scanf("%c",&lower_case_char);
  printf("\nUpper case character is : %c",lower_case_char-32);
  return 0;
}


//152. Accept two values and swap or interchange using third variable.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("\nEnter number a : ");
  scanf("%d",&a);
  printf("\nEnter number b : ");
  scanf("%d",&b);
  c = a;
  a = b;
  b = c;
  printf("\nswaped number a and b are : %d %d",a,b);
  return 0;
}


//153. Accept two values and swap or interchange without third variable.
#include<stdio.h>
int main(){
  int a,b;
  printf("\nEnter number a : ");
  scanf("%d",&a);
  printf("\nEnter number b : ");
  scanf("%d",&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("\nswaped number a and b are : %d %d",a,b);
  return 0;
}