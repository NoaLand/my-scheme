#include "frontend/input_reader.h"

std::string scheme::frontend::io::input_reader::process() const {
	std::string src;
	is >> src;
	return src;
}
