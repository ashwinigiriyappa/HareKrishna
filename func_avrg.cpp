#include <iostream>

template<typename x> float average( x num1, x num2 ); /* declaring function named average */

template<typename y> int main(){
	using namespace std;
	y num1, num2;
  float c;
  	cout << "Enter first number" << endl;
  	cin >> num1;
  	cout << "Enter second number" << endl;
  	cin >> num2;
  //	c =  /* calling the function average and storing its value in c*/
  	cout << "Average is " << average( 10, 3 ) << endl;
	return 0;
}

template<typename x> float average(x num1, x num2 ) /* function */
{
    	float avg;
    	return (avg = ( num1 + num2 )/2.0);
   	  /* returning the average value */
}
