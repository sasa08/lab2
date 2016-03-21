#include <iostream>
#include <fstream>
#include <iomanip>
#include "a.h"
using namespace std;
int main() {
	int a,b,c,d,e;
	ifstream inp("file.in.txt",ios::in);
	ofstream outp("file.out.txt",ios::out);
	BMI person;
	double height;
	double weight;

	inp >> height >> weight;
	while(height != 0 && weight != 0){
		outp <<  setiosflags(ios::fixed) << setprecision(2) << person.bmi(height,weight) << " ";
		outp << person.suggest(person.bmi(height,weight));
		outp << endl;
		inp >> height >> weight;
	}
	return 0;
}
