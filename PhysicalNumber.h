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
		PhysicalNumber& operator+(PhysicalNumber);
		PhysicalNumber& operator+();
		PhysicalNumber& operator-(PhysicalNumber);
		PhysicalNumber& operator-();
		PhysicalNumber& operator-=(PhysicalNumber);
		PhysicalNumber& operator+=(PhysicalNumber);
		bool operator==(PhysicalNumber);
		PhysicalNumber& operator=(PhysicalNumber);
		bool operator<=(PhysicalNumber);
		bool operator>=(PhysicalNumber);
		bool operator<(PhysicalNumber);
		bool operator>(PhysicalNumber);
		PhysicalNumber& operator++();
		PhysicalNumber& operator--();
	};
	std::ostream& operator<<(std::ostream& os, const PhysicalNumber& a);
	std::istream& operator>>(std::istream& is, PhysicalNumber& a);
}
