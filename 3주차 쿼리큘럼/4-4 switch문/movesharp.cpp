#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	int ch;

	x = 40;
	y = 10;
	clrscr();

	for(;;){
		gotoxy(x, y);
		putch('#');
		ch = getch();