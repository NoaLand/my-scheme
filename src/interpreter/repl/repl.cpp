int main() {
	/**
	 * V1
	 * const source src = my_scheme::frontend::io::input_reader{std::cin}.process();
	 * const auto tokens = my_scheme::frontend::lexer.tokenize(src);
	 * const auto ast = my_scheme::frontend::parser.parse(tokens);
	 * my_scheme::repl.execute(ast);
	 */

	/**
	 * V2: use pipeline operator refactor
	 * using namespace my_scheme::frontend;
	 * io::input_reader{std::cin}.process()
	 *     | lexer::tokenize
	 *     | parser::parse
	 *     | repl::execute;
	 */

	return 0;
}