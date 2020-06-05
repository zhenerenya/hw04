#include "formatter_ex.hpp"
#include "formatter.hpp"

std::ostream& formatter_ex(std::ostream& stream, const std::string& str){
	return stream<<formatter(str);
}
