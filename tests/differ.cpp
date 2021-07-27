#include <string>
#include <vector>
#include <iostream>
#include "difflib.hpp"

int main()
{
	using namespace pydifflib;

	std::vector<std::string> a = { "line one", "line two", "line three" };
	std::vector<std::string> b = { "Line one", "line 2" };
	
	Differ<std::string> differ;
	auto comp = differ.compare(a, b);
	for (const auto& c : comp)
		std::cout << c << '\n';
	return 0;
}
