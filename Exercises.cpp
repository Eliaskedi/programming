//Exercise questions

//Q_1

#include <iostream>
using namespace std;

int main()
{
	  int x, y, z, result;
	cout << " Enter the first  number: ";
	cin >> x;
	cout << " Enter the second  number: ";
	cin >> y;
	cout << " Enter the third  number: ";
	cin >> z;
	result = x * y * z;
	cout << " The product is " << result << endl;

	//Q_2

	    int num1, num2, sum, difference, product;
	    double division;
	    cout << " Enter the first  number: ";
	    cin >> num1;
	    cout << " Enter the second  number: ";
	    cin >> num2;
	    sum = num1 + num2;
	    difference = num1 - num2;
	    product = num1 * num2;
	    division = num1 / num2;

	    cout << " The sum is " << sum << endl;

	    cout << " The difference is " << difference << endl;

	    cout << " The product is " << product << endl;

	    cout << " The quotient is " << division << endl;

	    if (num1 > num2)
   
	{
		        cout << num1 << " is the greater" << endl;
		        cout << num2 << " is the smaller" << endl;
		   
	}
	    else if (num1 == num2)
        cout << num1 << " They are equal" << endl;
	    else    
	{
		        cout << num2 << " is the greater" << endl;
		        cout << num1 << " is the smaller" << endl;
		   
	}

	//Q_3 Circumstance of a circle

	//Declare variables
	float radius, circumference;

	//Read in radius from user
	cout << "Enter radius of circle: ";
	cin >> radius;

	//Calculate circumference
	circumference = 2 * 3.1416 * radius;

	//Display result
	cout << "Circumference of circle with radius " << radius << " = " << circumference << endl;

	//Q_4 Quadratic equation

	double a, b, c;
	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter c: ";
	cin >> c;

	double x1, x2;
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;

	return 0;
}