//#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <dos.h>

using namespace std;



int main(void) {
	int profilePick = 0;

	int button = 0;

	int profileFunction();

	cout << "pick profile 1, 2, 3 or 4 \n";
	cin >> profilePick;
	
	while (1) {
		switch (profilePick) {
		case 1:
			cout << "profile 1 chosen \n";


			//replace with profile function
			while (1) {
				cout << "enter button input \n";
				cin >> button;
				if (button == 1) {
					cout << "doing button 1 \n";
					Sleep(1000);
				}
				if (button == 2) {
					cout << "doing button 2 \n";
					Sleep(1000);
				}
				if (button == 3) {
					cout << "doing button 3 \n";
					Sleep(1000);
				}
				if (button == 4) {
					cout << "doing button 4 \n";
					Sleep(1000);
				}
			}
			break;
		}
	}
}
