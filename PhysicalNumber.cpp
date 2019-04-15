#include <iostream>
#include <string>
#include <stdexcept>
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
	double PhysicalNumber::size(){
		return this->value;
	}
/*	bool check(PhysicalNumber& a, PhysicalNumber& b){
		if (a.type == b.type){
			return true;
		}
		if (a.type == Unit::KM || a.type == Unit::M || a.type == Unit::CM){
			if (b.type == Unit::KM || b.type == Unit::M || b.type == Unit::CM){
				return true;
			}
			return false;
		}
		if (a.type == Unit::TON || a.type == Unit::KG || a.type == Unit::G){
			if (b.type == Unit::TON || b.type == Unit::KG || b.type == Unit::G){
				return true;
			}
			return false;
		}
		if (a.type == Unit::HOUR || a.type == Unit::MIN || a.type == Unit::SEC){
			if (b.type == Unit::HOUR || b.type == Unit::MIN || b.type == Unit::SEC){
				return true;
			}
			return false;
		}
	}*/

	PhysicalNumber PhysicalNumber::ThisIsTheBestCheckFunctionEverInTheWorld(PhysicalNumber bugi1, PhysicalNumber bugi2){
			if(bugi1.type==bugi2.type){
				return bugi2;
			}
			else if((bugi1.type==KM || bugi1.type==M || bugi1.type==CM) && (bugi2.type==KM || bugi2.type==M || bugi2.type==CM)){
				if(bugi1.type==KM){
					if(bugi2.type==M){
						bugi2.type=KM;
						bugi2.value=bugi2.value/1000;
						return bugi2;
					}

					else{
						bugi2.type=KM;
						bugi2.value=bugi2.value/100000;
						return bugi2;
					}
				}

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
			}
			string type1;
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

	PhysicalNumber::PhysicalNumber(){
		this->value = 0;
		this->value = 500;
	}
	PhysicalNumber PhysicalNumber::operator+(){
		return *this;
	}
	PhysicalNumber PhysicalNumber::operator-(){
		PhysicalNumber temp;
		temp.value = -(this->value);
		temp.type = this->type;
		return temp;
	}
	PhysicalNumber PhysicalNumber::operator-(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		temp.value = this->value-temp.value;
		return temp;
	}
	PhysicalNumber&  PhysicalNumber::operator-=(PhysicalNumber a){
		this->value = (*this-a).value;
		return *this;
	}
	PhysicalNumber&  PhysicalNumber::operator+=(PhysicalNumber a){
		this->value = (*this+a).value;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator+(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		temp.value = this->value+temp.value;
		return temp;
	}
	bool PhysicalNumber::operator==(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if (temp.value == this->value){
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator!=(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if (temp.value != this->value){
			return true;
		}
			return false;
	}
	PhysicalNumber&  PhysicalNumber::operator=(PhysicalNumber a){
		this->value=a.value;
		this->type=a.type;
		return *this;
	}
	bool PhysicalNumber::operator<=(PhysicalNumber a){
		PhysicalNumber temp=ThisIsTheBestCheckFunctionEverInTheWorld(*this,a);
		if(this->value<=temp.value){
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator>=(PhysicalNumber a){
		PhysicalNumber temp=ThisIsTheBestCheckFunctionEverInTheWorld(*this,a);
		if(this->value>=temp.value){
			return true;
		}
		return false;
	}

	bool PhysicalNumber::operator<(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if(this->value < temp.value){
			return true;
		}
		return false;
	}
	bool PhysicalNumber::operator>(PhysicalNumber a){
		PhysicalNumber temp = ThisIsTheBestCheckFunctionEverInTheWorld(*this, a);
		if(this->value > temp.value){
			return true;
		}
		return false;
	}
	PhysicalNumber&  PhysicalNumber::operator++(){
		this->value++;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator++(int){
		PhysicalNumber temp;
		temp.value = this->value;
		temp.type = this->type;
		this->value++;
		return temp;
	}
	PhysicalNumber&  PhysicalNumber::operator--(){
		this->value--;
		return *this;
	}
	PhysicalNumber  PhysicalNumber::operator--(int){
		PhysicalNumber temp;
		temp.value = this->value;
		temp.type = this->type;
		this->value--;
		return temp;
		}
	std::ostream& operator<<(std::ostream& os, const PhysicalNumber& a){
		if (a.type == KM){
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
		is>>temp;
		int type = temp.size()-2;
		string t = "";
		//temp.at(type) != temp.at(0)
		while(temp.at(type) != '[' && type != 0){
			t += temp.at(type--);
		}
		string b = "";
		for(int i = t.size()-1; i>=0; i--){
			b += toupper(t.at(i));
		}
		if (b.compare("TON") == 0){
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
			//throw string("illegal, nothing changed");
			return is;
		}
		type = temp.size()-1;
		while(temp.at(type--) != '['){
			temp.pop_back();
		}
		temp.pop_back();
		a.value = stod(temp);
		return is;
	}
}





/*int main(){
	ariel::PhysicalNumber a;
	//ariel::PhysicalNumber b;
	a.value = 1;
	a.type = ariel::Unit::KM;
	cout<<a.size();
	return 0;
}*/


