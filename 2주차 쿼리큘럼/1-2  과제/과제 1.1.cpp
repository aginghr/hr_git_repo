#include <iostream>
using namespace std;
int main(void)
{
	string a = "H", b = "e", c = "l", d = "l", e = "o", f = "W", g = "o", h = "r", i = "l", j = "d";
	printf("%s%s%s%s%s %s%s%s%s%s", a, b, c, d, e, f, g, h, i, j);
	string word = a + b + c + d + e + " " + f + g + h + i + j;
	printf("%s", word);
}