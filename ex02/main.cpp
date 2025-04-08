#include "Array.hpp"

int main()
{
	Array <int>arr(2);
	Array <int>arr2(arr);

	try
	{
		arr2[0] = 20;
		std::cout << arr2[0] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------" << std::endl;
	try
	{
		arr2[0] = 20;
		std::cout << arr2[-1] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}