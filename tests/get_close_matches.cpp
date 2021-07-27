#include <string>
#include <iostream>
#include "difflib.hpp"

int main()
{
	using namespace pydifflib;

	std::string word = "hello";
	std::string choices[] = {
		"jello", "holly", "goodbye", "pretty", "halo", "gel"
	};

	auto matches = get_close_matches(word, std::begin(choices), std::end(choices));
	for (const auto& match : matches) {
		std::cout << match << '\n';
	}

	return 0;
}
