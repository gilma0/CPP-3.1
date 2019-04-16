#include <iostream>
#include <string>
#include <stdexcept>
#include "Unit.h"
#include "PhysicalNumber.h"

using namespace std;

namespace ariel{

	double value;
	Unit type;

	PhysicalNumber::PhysicalNumber(double a, Unit type){ //constructor
		this->value = a;
		this->type = type;
	}
	double PhysicalNumber::size(){ //getting value of object
		return this->value;
	}

	PhysicalNumber PhysicalNumber::ThisIsTheBestCheckFunctionEverInTheWorld(PhysicalNumber bugi1, PhysicalNumber bugi2){
			if(bugi1.type==bugi2.type){ //same type case
				return bugi2;
			} //checking type difference
			else if((bugi1.type==KM || bugi1.type==M || bugi1.type==CM) && (bugi2.type==KM || bugi2.type==M || bugi2.type==CM)){
				if(bugi1.type==KM){
					if(bugi2.type==M){
						bugi2.type=KM;
						bugi2.value=bugi2.value/1000; //changing type and value if they can be calculated together
						return bugi2;
					}

					else{ //other scenario
						bugi2.type=KM;
						bugi2.value=bugi2.value/100000;	//changing type and value if they can be calculated together
						return bugi2;
					}
				}
				//the same steps are repeated below for each case
				else if(bugi1.type==M){
					if(bugi2.type==KM){
						bugi2.type=M;
						bugi2.value=bugi2.value*1000;
						return bugi2;
					}
					else{
					bugi2.type=M;
					bugi2.value=bugi2.value/100;
					return bugi2;
					}
				}

				else if(bugi1.type==CM){
					 if(bugi2.type==KM){
						bugi2.type=CM;
						bugi2.value=bugi2.value*100000;
						return bugi2;
					 }

					 else{
						bugi2.type=CM;
						bugi2.value=bugi2.value*100;
						return bugi2;
					 }
				}
			}
			else if((bugi1.type==HOUR || bugi1.type==MIN || bugi1.type==SEC) && (bugi2.type==HOUR || bugi2.type==MIN || bugi2.type==SEC)){
				if(bugi1.type==HOUR){
					if(bugi2.type==MIN){
						bugi2.type=HOUR;
						bugi2.value=bugi2.value/60;
						return bugi2;
					}

					else{
						bugi2.type=HOUR;
						bugi2.value=bugi2.value/60/60;
						return bugi2;
					}
				}
				else if(bugi1.type==MIN){
					if(bugi2.type==HOUR){
						bugi2.type=MIN;
						bugi2.value=bugi2.value*60;
						return bugi2;
					}
					else{
						bugi2.type=MIN;
						bugi2.value=bugi2.value/60;
						return bugi2;
					}
				}

				else if(bugi1.type==SEC){
					 if(bugi2.type==HOUR){
						bugi2.type=SEC;
						bugi2.value=bugi2.value*60*60;
						return bugi2;
					 }
					 else{
						bugi2.type=SEC;
						bugi2.value=bugi2.value*60;
						return bugi2;
					 }
				}
			}
			else if((bugi1.type==TON || bugi1.type==KG || bugi1.type==G) && (bugi2.type==TON || bugi2.type==KG || bugi2.type==G)){
				if(bugi1.type==TON){
					if(bugi2.type==KG){
						bugi2.type=TON;
						bugi2.value=bugi2.value/1000;
						return bugi2;
					}
					else{
						bugi2.type=TON;
						bugi2.value=bugi2.value/1000000;
						return bugi2;
					}
				}
				else if(bugi1.type==KG){
					if(bugi2.type==TON){
						bugi2.type=KG;
						bugi2.value=bugi2.value*1000;
						return bugi2;
					}
					else{
						bugi2.type=KG;
						bugi2.value=bugi2.value/1000;
						return bugi2;
					}
				}
				else if(bugi1.type==G){
					 if(bugi2.type==TON){
						bugi2.type=G;
						bugi2.value=bugi2.value*1000000;
						return bugi2;
					 }
					 else{
						 bugi2.type=G;
						 bugi2.value=bugi2.value*1000;
						 return bugi2;
					 }
				}
			} //if they cant be calculated together
			string type1; //building an exception so you can understand the problem
			if (bugi1.type == KM){
				type1="[km]";
			}
			if (bugi1.type == M){
				type1="[m]";
			}
			if (bugi1.type == CM){
				type1="[cm]";
			}
			if (bugi1.type == HOUR){
				type1="[hour]";
			}
			if (bugi1.type == MIN){
				type1="[min]";
			}
			if (bugi1.type == SEC){
				type1="[sec]";
			}
			if (bugi1.type == TON){
				type1="[ton]";
			}
			if (bugi1.type == KG){
				type1="[kg]";
			}
			if (bugi1.type == G){
				type1="[g]";
			}
			string type2;
			if (bugi2.type == KM){
				type2="[km]";
			}
			if (bugi2.type == M){
				type2="[m]";
			}
			if (bugi2.type == CM){
				type2="[cm]";
			}
			if (bugi2.type == HOUR){
				type2="[hour]";
			}
			if (bugi2.type == MIN){
				type2="[min]";
			}
			if (bugi2.type == SEC){
				type2="[sec]";
			}
			if (bugi2.type == TON){
				type2="[ton]";
			}
			if (bugi2.type == KG){
				type2="[kg]";
			}
			if (bugi2.type == G){
				type2="[g]";
			}
			throw invalid_argument("Units do not match - "+type2+" cannot be converted to "+type1+"\n");
			return bugi2;
		}

	PhysicalNumber::PhysicalNumber(){ //default constructor
		this->value = 0;
		this->value = 500;
	}
	PhysicalNumber PhysicalNumber::operator+(){ //getting the object as is
		return *this;
	}
	PhysicalNumber PhysicalNumber::operator-(){ //getting the object as a negative of it
		PhysicalNumber temp;
		temp.value = -(this->value);
		temp.type = this->type;
		return temp;
	}
	PhysicalNumber PhysicalNumber::operator-(PhysicalNumber a){ //calculate minus two objects
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a); //checking if they can be calculated together
		temp.value = this->value-temp.value; //calculation
		return temp;
	}
	PhysicalNumber&  PhysicalNumber::operator-=(PhysicalNumber a){ //changing the current object value using the "-" function
		this->value = (*this-a).value;
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator+=(PhysicalNumber a){ //changing the current object value using the "+" function
		this->value = (*this+a).value;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator+(PhysicalNumber a){ //calculate plus two objects
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a); //checking if they can be calculated together
		temp.value = this->value+temp.value; //calculation
		return temp;
	}
	bool PhysicalNumber::operator==(PhysicalNumber a){ //checking if two objects are equal in value
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a); //checking if they are the same type
		if (temp.value == this->value){ //check if equal
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator!=(PhysicalNumber a){ //checking if two objects are unequal in value
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a); //checking if they are the same type
		if (temp.value != this->value){ //check if unequal
			return true;
		}
			return false;
	}
	PhysicalNumber&  PhysicalNumber::operator=(PhysicalNumber a){ //assign a object to a different one
		this->value=a.value;
		this->type=a.type;
		return *this;
	}
	bool PhysicalNumber::operator<=(PhysicalNumber a){ //checking if less or equal
		PhysicalNumber temp=ThisIsTheBestCheckFunctionEverInTheWorld(*this,a);
		if(this->value<=temp.value){
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator>=(PhysicalNumber a){ //checking if more or equal
		PhysicalNumber temp=ThisIsTheBestCheckFunctionEverInTheWorld(*this,a);
		if(this->value>=temp.value){
			return true;
		}
		return false;
	}

	bool PhysicalNumber::operator<(PhysicalNumber a){ //check if less
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if(this->value < temp.value){
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator>(PhysicalNumber a){ //check if more
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if(this->value > temp.value){
			return true;
		}
		return false;
	}
	PhysicalNumber&  PhysicalNumber::operator++(){ //adding one to object before
		this->value++;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator++(int){ //adding one to object after
		PhysicalNumber temp; //copy of the object
		temp.value = this->value;
		temp.type = this->type;
		this->value++; //changing original object value
		return temp; //returning copy
	}
	PhysicalNumber&  PhysicalNumber::operator--(){
		this->value--;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator--(int){ //subtract object by one
		PhysicalNumber temp; //copy of original
		temp.value = this->value;
		temp.type = this->type;
		this->value--; //changing original value
		return temp; //return copy
		}
	std::ostream& operator<<(std::ostream& os, const PhysicalNumber& a){
		if (a.type == KM){       //checking type of object and building the ostream accordingly
			os<<a.value<<"[km]";
			return os;
		}
		if (a.type == M){
			os<<a.value<<"[m]";
			return os;
		}
		if (a.type == CM){
			os<<a.value<<"[cm]";
			return os;
		}
		if (a.type == HOUR){
			os<<a.value<<"[hour]";
			return os;
		}
		if (a.type == MIN){
			os<<a.value<<"[min]";
			return os;
		}
		if (a.type == SEC){
			os<<a.value<<"[sec]";
			return os;
		}
		if (a.type == TON){
			os<<a.value<<"[ton]";
			return os;
		}
		if (a.type == KG){
			os<<a.value<<"[kg]";
			return os;
		}
		if (a.type == G){
			os<<a.value<<"[g]";
			return os;
		}
		return os;
	}
	std::istream& operator>>(std::istream& is, PhysicalNumber& a){
		string temp;
		is>>temp; //string for cin
		int type = temp.size()-2;
		string t = ""; //string to type
		while(temp.at(type) != '[' && type != 0){ //building the string until getting the type
			t += temp.at(type--);
		}
		string b = "";
		for(int i = t.size()-1; i>=0; i--){
			b += toupper(t.at(i));
		}
		if (b.compare("TON") == 0){ //getting right type
			a.type = TON;
		}
		else if (b.compare("KG") == 0){
			a.type = KG;
		}
		else if (b.compare("G") == 0){
			a.type = G;
		}
		else if (b.compare("HOUR") == 0){
			a.type = HOUR;
		}
		else if (b.compare("MIN") == 0){
			a.type = MIN;
		}
		else if (b.compare("SEC") == 0){
			a.type = SEC;
		}
		else if (b.compare("KM") == 0){
			a.type = KM;
		}
		else if (b.compare("M") == 0){
			a.type = M;
		}
		else if (b.compare("CM") == 0){
			a.type = CM;
		}
		else{
			return is; //if theres a problem nothing changes
		}
		type = temp.size()-1; //getting the value
		while(temp.at(type--) != '['){
			temp.pop_back();
		}
		temp.pop_back();
		a.value = stod(temp); //assign value
		return is;
	}
}


