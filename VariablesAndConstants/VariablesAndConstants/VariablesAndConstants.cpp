/*	Name:		(Your name goes here)
	Problem:	(Put the whole problem statement here.  
				Can be directly from the problem or in your own words.)
				Write a program that delcares, initializes, and outputs variables and constants.
					13 variables
						1 bool
						3 int
						3 char
						3 string
						3 double
					5 constants
						c = 3.0 e 8 (speed of light in m/s)
						g = 9.8     (acceleration due to gravity in m/s2)
						3 other constants from math or science
	Pseudocode:	(State your algorithm in English here.)
				Output message to the screen
				Declare and initialize variables and constants
				Output variables and constants to the screen
	Notes:		(Put any note you might have here.)
	Maintenance Log:
				Date:		Done:
				(Date here)	(What you did here)
*/
#include <conio.h>
#include <stdio.h>
#include <string>
#include <iostream>	// for cout
using namespace std;

int main()
{
	printf("Hello World!\n\n");					// output to the screen with printf()
	cout << "Hello again..." << endl << endl;	// output to the screen with cout
	// constants MUST be declared and initialized at the same time.
	const double c = 3.0e8;		// speed of light
	const double g = 9.8;		// acceleration due to gravity
	// variables declared but not initialized

	double someDouble;
	string someString;

	// variables declared and initialized
	bool loop = true;
	int someVariable = 0;
	char someChar = 'c';
	
	printf("Speed of light: %e\n", c);		// use %e as placeholder for scientific notation
	printf("Acc due to grav: %lf\n", g);	// placeholder %lf for double
	printf("A bool called loop: %i\n", loop);	// no placeholder for bool, but use %i for int
	printf("An int called someVariable: %d\n", someVariable);	// can use %d for int or %i
	printf("A char called someChar: %c\n", someChar);

	someDouble = 5.5;			// innitialized just before use
	printf("A double called someDouble: %lf\n", someDouble);
	someString = "How now brown cow.";
	printf("A string with a deep saying: \"%s\"\n\n", someString.c_str());	// need .c_str() to output with printf()
																			// \" is escape sequence for double quote(")

	// getch();		// for older versions of Visual Studio, uncomment this
	return 0;
}