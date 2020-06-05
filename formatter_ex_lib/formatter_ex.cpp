#include "formatter_ex.hpp"
#include "../formatter_lib/formatter.hpp"

std::ostream& formatter_ex(std::ostream& stream, const std::string& str){
	return stream<<formatter(str);
}