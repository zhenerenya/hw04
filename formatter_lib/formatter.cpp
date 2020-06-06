#include "formatter.h"

std::string formatter(const std::string& txt){
	std::string res;
	res += "-------------------------\n";
    res += txt + "\n";
    res += "-------------------------\n";
    return res;
}

