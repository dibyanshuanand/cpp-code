#include "library.h"

int main() {
	arrow obj;
	cout << obj.size();
	obj.push_back(5);
	cout << obj.size();
	//cout << obj.at(0);
}