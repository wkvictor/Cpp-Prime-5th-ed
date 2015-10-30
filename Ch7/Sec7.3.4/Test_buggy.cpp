// #include "Screen.h"
// #include "Window_mgr.h"
#include "Screen_Window_mgr.h"

using namespace std;

int main()
{
	// Screen myScreen(5, 5, 'X');
	// myScreen.move(4, 0).set('#').display(cout);
	// cout << "\n";
	// myScreen.display(cout);
	// cout << "\n";

	Window_mgr myScreens;    // What is inside the object myScreens???
	Screen &S0 = myScreens[0];   // BUG?????
	S0.display(cout);
	cout << "\n";
	myScreens.clear(0);
	S0.display(cout);
	cout << "\n";

	return 0;
}