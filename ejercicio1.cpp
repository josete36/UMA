#include <iostream>

using namespace std;

int main()
{
	float eur;
	float pts;

	cout << "introduce el numero en euros: ";
	cin >> eur;

	pts = eur * 166.386;
	cout << "el numero en pesetas es: " << pts << endl;

	return 0;

}