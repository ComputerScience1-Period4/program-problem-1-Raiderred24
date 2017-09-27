/*
Hayden Hurst 9/21/17 Period 4
Display Text
*/

// Libraries
#include <iostream> // cout, cin, endl, <<, >>
#include <conio.h> // pause() fun access to _getch() and _kbhit()
// Namespaces
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char h = 'h';
	char a = 'a';
	char y = 'y';
	char n = 'n';
	char u = 'u';
	char s = 's';
	char t = 't';
	char noel = 'l';
	// Display Text "Hello World"
	cout << H << e << l << l << o << " " << W << o << r << l << d << "!" << H << a << y << d << e << n << " " << H << u << r << s << t << endl;
	pause();//
	return; //
}
