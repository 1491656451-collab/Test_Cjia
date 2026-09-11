#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> weapon = { "sword", "vow", "axe", "bow", "spear" };
	cout << "ÎäÆ÷ÁÐ±í:" ;
	for (const auto& w : weapon) {
		cout << w << " ";
	}
	cout << endl;
}