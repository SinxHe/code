// �����嵥 4.17
#include <iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int; // allocate space for an int
	*pt = 1001;         // store a value there

	cout << "nights value = ";
	cout << nights << "; location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << "; location = " << pt << endl;
	double * pd = new double; // allocate a space for a double
	*pd = 10000111.0;

	cout << "double ";
	cout << "value = " << *pd << "; location = " << &pd << endl;
	cout << "size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << "; size of *pd = " << sizeof(*pd) << endl;

	return 0;
}