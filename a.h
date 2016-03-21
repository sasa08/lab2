
#include <string>
using namespace std;
class BMI{
	public:
		BMI();
		BMI(double,double);

		double bmi(double,double);
		string suggest (double);

	private:
		double height ;
		double weight;
		double bnum;
};