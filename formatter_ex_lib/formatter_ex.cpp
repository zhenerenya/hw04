#include "formatter_ex.h"
#include "formatter.h"

std::ostream& formatter(std::ostream& stream, const std::string& str){
	return stream<<formatter(str);
}
