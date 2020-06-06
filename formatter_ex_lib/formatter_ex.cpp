#include "formatter_ex.h"
#include "formatter.h"

std::ostream& formatter_ex(std::ostream& stream, const std::string& str){
	return stream<<formatter(str);
}
