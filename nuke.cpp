#include <iostream>
#include <cstdlib>
using namespace std;

void nuke_range1() {
	cout << " _____" << endl;
	for(int num=0;num<4;num++) {
		cout << "|     |" << endl;;
	}
	cout << "|_____|" << endl;
}

void nuke_range2() {
	cout << " __________" << endl;
	for(int num=0;num<9;num++) {
		cout << "|          |" << endl;
	}
	cout << "|__________|" << endl;
}

void nuke_range3() {
	cout << " _______________" << endl;
	for(int num=0; num<14;num++) {
		cout << "|               |" << endl;
	}
	cout << "|_______________|" << endl;
}

int main() {
	int level;
	char ans;
    while(true) {
    	cout << "Level of nuke: ";
    	cin >> level;
    	if(level == 1) {
    		nuke_range1();
		} else if(level == 2) {
			nuke_range2();
		} else if(level == 3) {
			nuke_range3();
		}
		
		cout << "\nNuke again(y/n): ";
		cin >> ans;
		if(ans == 'y') {
			system("cls");
		} else if(ans == 'n') {
			exit(0);
		}
	}
	return 0;
}
