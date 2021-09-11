#include"main.h"
using namespace std;
int main(void)
{
	CPosition pos1;
	CPosition* pos2 = pos2->Instance();
	CPosition pos3 = pos1 + pos2;
	// error CPosition* pos3 = pos3->Instance();
	pos3 = pos1 + pos2;

	pos1.show(); 
	pos2->show();
	pos3.show();

	if (pos1 == pos2)
	{
		cout << 'a' << endl;
	}
	else { cout << 'b' << endl; }

	if (pos3 == pos2)
	{
		cout << 'c' << endl;
	}
	else { cout << 'd' << endl; }

	return 1;
}