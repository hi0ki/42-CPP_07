#include "iter.hpp"

void printElement(std::string &element) {
    std::cout << element << std::endl;
}

int main()
{
	std::string arr[3] = {"mehdi", "el ansary", "20"};
	::iter(arr, 3, printElement);
}