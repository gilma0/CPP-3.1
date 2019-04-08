#include <iostream>
#include <string>
#include "Unit.h"
#include "PhysicalNumber.h"

using namespace std;

namespace ariel{

	double value;
	Unit type;

	PhysicalNumber::PhysicalNumber(double a, Unit type){
		this->value = a;
		this->type = type;
	}
/*	bool check(PhysicalNumber& a, PhysicalNumber& b){
		if (a.type == b.type){
			return true;
		}
		Unit type = a.type;
		if ();
	}*/

	PhysicalNumber::PhysicalNumber(){
		this->value = 0;
		this->value = 500;
	}
	PhysicalNumber& PhysicalNumber::operator+(){
		PhysicalNumber temp;
		temp.value = this->value;
		temp.type = this->type;
		return temp;
	}
	PhysicalNumber&  PhysicalNumber::operator-(){
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator-(PhysicalNumber a){
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator-=(PhysicalNumber a){
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator+=(PhysicalNumber a){
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator+(PhysicalNumber a){
		return *this;
	}
	bool PhysicalNumber::operator==(PhysicalNumber a){
		return true;
	}
	PhysicalNumber&  PhysicalNumber::operator=(PhysicalNumber a){
		return *this;
	}
	bool PhysicalNumber::operator<=(PhysicalNumber a){
		return true;
	}
	bool PhysicalNumber::operator>=(PhysicalNumber a){
		return true;
	}
	bool PhysicalNumber::operator<(PhysicalNumber a){
		return true;
	}
	bool PhysicalNumber::operator>(PhysicalNumber a){
		return true;
	}
	PhysicalNumber&  PhysicalNumber::operator++(){
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator--(){
		return *this;
	}
	std::ostream& operator<<(std::ostream& os, const PhysicalNumber& a){
		os<<a.value<<endl<<a.type;
		return os;
	}
	std::istream& operator>>(std::istream& is, PhysicalNumber& a){
		is>>a.value;
		return is;
	}
}


/*

int main(){
	ariel::PhysicalNumber a;
	a.value = 5;
	a.type = ariel::Unit::HOUR;
	cout<<a;
	return 0;
}

*/

