#include <iostream>//include output input in iostream header file
#include <cmath>//include math header file
using namespace std;

int main(){//main function
  const double PI = 3.14;//initialize PI as a constant of 3.14 
double radius;
 double area;
 double circumference;
 //declare variables
 cout << "Please enter the radius: " <<endl;//ask for input of radius
 cin>>radius; //assign input to radius
 area = PI*(pow(radius,2));//assign area to equal PI * radius squared
 circumference = 2*PI*radius;//assign circumference to 2 * PI * radius

 cout <<"The area is: " << area <<endl;//output area
 cout <<"The circumference is: " <<circumference <<endl;//output circumference

 return 0; //end program
}
