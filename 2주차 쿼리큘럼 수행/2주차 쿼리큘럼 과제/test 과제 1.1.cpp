#include <iostream>
using namespace std;
int main(void)
{
	string H = "H", e = "e", l = "l", o = "o", w = "w", r = "r", d = "d";
	printf("%s\n", H.c_str());
	printf("%s\n", e.c_str());
	printf("%s\n", l.c_str());
	printf("%s\n", o.c_str());
	printf("%s\n", w.c_str());
	printf("%s\n", r.c_str());
	printf("%s\n", d.c_str());

	printf("%s%s%s%s%s %s%s%s%s%s", H.c_str(), e.c_str(), l.c_str(), l.c_str(), o.c_str(), w.c_str(), o.c_str(), r.c_str(), l.c_str(), d.c_str());
	return 0;
}