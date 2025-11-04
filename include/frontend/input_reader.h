#pragma once
#include <iostream>

namespace scheme::frontend::io {
	class input_reader {
	public:
		explicit input_reader(std::istream& is) : is{is} {};
		std::string process() const;
	private:
		std::istream& is;
	};
}
