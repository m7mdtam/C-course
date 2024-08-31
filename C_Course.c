//frist class : first code
#include <stdio.h> // main library 
#include <stdbool.h>
void main () // main function 
{
printf("Hello World\n");
printf("Hello\t mohammed\n");
/* for run i have to write 
gcc fileName.c -o app 
./app 
then it will run 
*/

// second class : variables 

int age  = 25 ; 
printf(" hello , I'm %i years old\n",age);
/*to print the integer value you have to 
right %i then after the comma write the
variable name (,age)
*/
printf(" %d\n",age); // print without sentence and you can use either %d or %i for integer

/*third class : Data types C 

to define a variable :
(type name = value ;):


---- 1- integer values : range (-32,767 <==> 32,767)----
int x = 5 ; 
int y ; 
if you need more range value use:
long x = 33,333 ; 
long y;


---- 2- floating values ----
float x = 5.5 ;
if you need more bigger numbers use :
double x = 5.555555555555555555555555555555555555555555;


---- 3- text valuse ----
char x = 'a' ; //for single character.
char y[5] = "ahmed"; for string of characters.


----4- boolean valuse -----
 bool x = true // return 1
 bool y = false // return 0 
*/



int x = 5;
float y = 5.5 ; 
char z = 'a';
char f[] = "Mohammed waleed hosni altamimi";
printf("The value of x is %d \n",x); // will print 5 
printf("The value of y is %f \n",y); // will print 5.500000
printf("The value of y is %.4f \n",y); // will print 5.5000
printf("The value of y is %.2f \n",y); //will print 5.50
printf("The value of z is %c \n",z); // will print a ;
printf("The value of f is %s \n",f);// s mean string ,will print mohammed waleed ho..... .
// when you use char f [2]; we should write the length
// when you use char f[] = " mohammed" ; no need for length
int m = 10;
printf("The value of m is %d \n",m); // will print 10

printf("The value of y is %f  and the value of x is %d \n",y,x); // will print the value of y is 5.500000 and the value of x is 5 

bool j = true ; //to use boolean you should call the library
printf("the boolean value is %d " , j ); // will print 1 (we used %d cause it's decimal number)
double sum = x + y ;
printf(" the sum of x and y is %i + %f = %f  " , x,y,x+y); //will print 10.500000 
printf(" the sum of x and y is %i + %f = %f  " , x,y,sum); //will print 10.500000

}