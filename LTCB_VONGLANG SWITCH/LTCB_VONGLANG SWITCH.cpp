#include <iostream>
using namespace std;
int main() {
	int sodau, socuoi;
	cout << "nhap so dau:";
	cin >> sodau;
	cout << "nhap so cuoi;";
	cin >> socuoi;
	cout << "VONG LAP WHILE\n";
	while (sodau <= socuoi)
		do
		{
			cout << sodau << " ";
			sodau++;
		} while (sodau <= socuoi);

		return 0;
}