#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	//The first bug occurs due to the lack of parenthases when computing the average of the 3 numbers. To fix this put i1-i3 in parenthases.
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	//The second bug occurs due to the fact that the variable n2 is being inputted twice. To fix this replace the second n2 with n3 so the correct number is being inputted.
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}