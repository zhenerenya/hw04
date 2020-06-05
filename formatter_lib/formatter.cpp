#include "formatter.hpp"

std::string formater(const std::string& txt){
	std::string res;
	res+="print ";
	res+=txt;
	return res;
}