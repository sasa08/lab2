#include <iostream>
#include <string>
#include "a.h"
using namespace std;

BMI::BMI(){
	height = 1.0;
	weight = 1.0;
	bnum = 1.0;
}

BMI::BMI(double h , double w){
	height  = h;
	weight = w;
	bnum = weight*10000/( height * height);
}

double BMI::bmi(double height , double weight){
	return (weight*10000/( height * height));
}

string BMI::suggest(double value){
	if( value < 15) return "Very severely underweight" ;
	else if ( value >=15 && value < 16 ) return "Severely underweight";
	else if ( value >=16 && value < 18.5 )  return "Underweight";
	else if ( value >=18.5 && value < 25) return "Normal";
	else if ( value >=25 && value < 30 ) return "Overweight" ;
	else if ( value >=30 && value < 35)  return "Obese Class I (Moderately obese)" ;
	else if ( value >=35 && value < 40)  return "Obese Class II (Severely obese)" ;
	else return "Obese Class III (Very severely obese)" ;
}
