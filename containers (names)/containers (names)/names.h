#pragma once
#include <iostream>
using namespace std;


class names
{
public:
	names();
	names(const names &n);
	names(string nom);
	bool operator == (const names& n);
	names& operator = (const names& n);
	void aff ();
	void trouvervlo ();

private:
	string nom;
};
