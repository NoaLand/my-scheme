#include "gtest/gtest.h"

#include "frontend/input_reader.h"

TEST(input_reader_test, should_successfully_get_hello_world) {
	std::istringstream is;
	is.str("helloworld!");
	const scheme::frontend::io::input_reader reader{is};
	const auto src = reader.process();

	ASSERT_EQ(src, "helloworld!");
}