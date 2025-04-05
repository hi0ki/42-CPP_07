#ifndef ITER_HPP
	#define ITER_HPP

	#include <iostream>
	#include <string>
	template <typename T>
	void iter(T *array, T len, void (*func)( T &))
	{
		int i = 0;
		while (len > i)
		{
			func(array[i]);
			i++;
		}
	}

#endif