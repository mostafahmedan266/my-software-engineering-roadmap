
#include <iostream>
using namespace std;


int main()
{
	/*float IP = 3.142598;
	printf("Precision specification %.*f \n", 1, IP);
	printf("Precision specification %.*f \n", 2, IP);
	printf("Precision specification %.*f \n", 3, IP);
	printf("Precision specification %.*f \n", 4, IP);

	float x = 7.7676;
	float y = 3.897;
	printf("The foat divisions %.3f / %.3f = %.3f \n", x, y, x / y);

	double d = 5.43532;
	printf("The double divisions %.3f \n", d);
	printf("The double divisions %.4f \n", d);*/

	char FirstNamw[] = "mustafa";
	char LastName[] = "Hmedan";
	printf("Dear %s , How are you ? \n", FirstNamw);
	printf("Welcome %s , Advices \n", LastName);


	char C = 's';
	printf("Setting the Width of %c \n", C);
	printf("Setting the Width of %*c \n", 1, C);
	printf("Setting the Width of %*c \n", 2, C);
	printf("Setting the Width of %*c \n", 3, C);
	printf("Setting the Width of %*c \n", 4, C);
	printf("Setting the Width of %*c \n", 5, C);
	printf("Setting the Width of %*c \n", 6, C);
	

	return 0;
}

