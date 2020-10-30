#include <cmath>
#include <iostream>
using namespace std;
int main() {
	while (true) {
		float girls = 0, boys = 0, avg = 0;
		cin >> girls >> boys;
        if(girls == 0 && boys == 0 ){
            cout<<0<<endl;
            continue;
        }
		if (girls < 0 && boys < 0)
			return 0;
		else if (girls == boys)
			cout << "1" << endl;
		else if (girls != 0 && boys == 0)
			cout << girls << endl;
		else if (girls == 0 && boys != 0)
			cout << boys << endl;
		else {
			if (girls < boys) {
				girls++;
				avg = boys / girls;
				cout << ceil(avg) << endl;
			} else {
				boys++;
				avg = girls / boys;
				cout << ceil(avg) << endl;
			}
		}
	}
	return 0;
}