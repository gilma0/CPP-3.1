#include <iostream>
#include <string>
#include "Unit.h"
using namespace std;
namespace ariel{
	class PhysicalNumber{
	public:
		double value;
		Unit type;
		PhysicalNumber(double a, Unit);
		PhysicalNumber();
		double size();
		PhysicalNumber ThisIsTheBestCheckFunctionEverInTheWorld(PhysicalNumber bugi1, PhysicalNumber bugi2);
		bool check(PhysicalNumber& a, PhysicalNumber& b);
		PhysicalNumber operator+(PhysicalNumber a);
		PhysicalNumber operator+();
		PhysicalNumber operator-(PhysicalNumber a);
		PhysicalNumber operator-();
		PhysicalNumber& operator-=(PhysicalNumber a);
		PhysicalNumber& operator+=(PhysicalNumber a);
		bool operator==(PhysicalNumber a);
		bool operator!=(PhysicalNumber a);
		PhysicalNumber& operator=(PhysicalNumber a);
		bool operator<=(PhysicalNumber a);
		bool operator>=(PhysicalNumber a);
		bool operator<(PhysicalNumber a);
		bool operator>(PhysicalNumber a);
		PhysicalNumber& operator++();
		PhysicalNumber operator++(int);
		PhysicalNumber& operator--();
		PhysicalNumber operator--(int);
	};
	std::ostream& operator<<(std::ostream& os, const PhysicalNumber& a);
	std::istream& operator>>(std::istream& is, PhysicalNumber& a);
}
