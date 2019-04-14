/**
 * Examples of automatic tests for the exercise on physical numbers.
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "PhysicalNumber.h"
using ariel::PhysicalNumber, ariel::Unit;
#include "badkan.hpp"

int main() {
  badkan::TestCase testcase;
  int grade=0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0) {

    // BASIC TESTS - DO NOT CHANGE
    PhysicalNumber a(2, Unit::KM);
    PhysicalNumber b(300, Unit::M);
    PhysicalNumber c(2, Unit::HOUR);
    PhysicalNumber d(30, Unit::MIN);

    // My numbers
    PhysicalNumber f(6, Unit::KM);
    PhysicalNumber e(350, Unit::M);
    PhysicalNumber h(180, Unit::TON);
    PhysicalNumber g(80, Unit::KG);
    PhysicalNumber i(12, Unit::SEC);
	PhysicalNumber a1;
	PhysicalNumber a2;
	PhysicalNumber a3;
	PhysicalNumber a4;
	PhysicalNumber a5;
	PhysicalNumber a6;
	PhysicalNumber a7;
	PhysicalNumber a8;
	PhysicalNumber a9;

    testcase
    .setname("Basic output")
/*    .CHECK_OUTPUT(a, "2[km]")
    .CHECK_OUTPUT(b, "300[m]")

    .setname("Compatible dimensions")
    .CHECK_OUTPUT(b+a, "2300[m]")
    .CHECK_OUTPUT((a+=b), "2.3[km]")
    .CHECK_OUTPUT(a, "2.3[km]")
    .CHECK_OUTPUT(a+a, "4.6[km]")
    .CHECK_OUTPUT(b-b, "0[m]")
    .CHECK_OUTPUT(c, "2[hour]")
    .CHECK_OUTPUT(d, "30[min]")
    .CHECK_OUTPUT(d+c, "150[min]")

    .setname("Incompatible dimensions")
    .CHECK_THROWS(a+c)
    .CHECK_THROWS(a+d)
    .CHECK_THROWS(b+c)
    .CHECK_THROWS(b+d)



    .setname("Basic input")
    .CHECK_OK(istringstream("700[kg]") >> a)
    .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

    // YOUR TESTS - INSERT AS MANY AS YOU WANT

	// My output tests
		.CHECK_OUTPUT(i, "12[sec]")
		.CHECK_OUTPUT(h, "180[ton]")
		.CHECK_OUTPUT((f-=e), "5.65[km]")
		.CHECK_OUTPUT(-f, "-5.65[km]")
		.CHECK_OUTPUT(+i, "12[sec]")
		.CHECK_OUTPUT((e==e), "1")
		.CHECK_OUTPUT((f>=e), "1")
		.CHECK_OUTPUT((f<=e), "0")
		.CHECK_OUTPUT((f>e), "1")
		.CHECK_OUTPUT((f<e), "0")
		.CHECK_OUTPUT(++f, "6.65[km]")
		.CHECK_OUTPUT(--f, "5.65[km]")
		.CHECK_OUTPUT(--i, "11[sec]")
		.CHECK_OUTPUT(++i, "12[sec]")

	// My throws tests
		.CHECK_THROWS(f-h)
		.CHECK_THROWS(h+i)
		.CHECK_THROWS(g-i)
	// My input tests
		.CHECK_OK(istringstream("3[ton]") >> i)
		.CHECK_OUTPUT(i, "3[ton]")
		.CHECK_OUTPUT((i += PhysicalNumber(1, Unit::KG)), "3.001[ton]")*/

    .CHECK_OK(istringstream("-3.1[ton]") >> a1)

    .CHECK_OK(istringstream("-3.1[kg]") >> a2)

	.CHECK_OK(istringstream("-3.1[g]") >> a3)

	.CHECK_OK(istringstream("-3.1[km]") >> a4)

	.CHECK_OK(istringstream("-3.1[cm]") >> a5)

	.CHECK_OK(istringstream("-3.1[m]") >> a6)

	.CHECK_OK(istringstream("-3.1[hour]") >> a7)

	.CHECK_OK(istringstream("-3.1[min]") >> a8)

	.CHECK_OK(istringstream("-3.1[sec]") >> a9)






      .setname("...")

      .print(cout, /*show_grade=*/false);
    cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl<<a9<<endl;
      grade = testcase.grade();
    } else {
      testcase.print_signal(signal);
      grade = 0;
    }
    cout <<  "*** Grade: " << grade << " ***" << endl;

    return grade;
}

