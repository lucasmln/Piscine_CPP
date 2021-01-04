#include "array.hpp"
#include <iostream>
#include <fstream>


int main()
{
	std::cout << "       ARRAY OF INT      " << std::endl;

	std::cout << "Create empty array" << std::endl;
	Array<int> array_empty;

	Array<int> array_of_int(5);

	std::cout << "size of array =" << array_of_int.size() << std::endl;
	
	std::cout << "filling array with values ..." << std::endl;
	for (int i = 0; i < array_of_int.size(); i++)
		array_of_int[i] = i * i;
	
	std::cout << "printing values :" << std::endl;
	for (int i = 0; i < array_of_int.size(); i++)
		std::cout << array_of_int[i];

	std::cout << "\ntrying to access value 3 in an array of size : "<< array_of_int.size() << std::endl;
	try
	{
		array_of_int[3] = 1234567;
		std::cout << "Array[3] = " << array_of_int[3];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nCopy the array and change values" << std::endl;

	const Array<int> copy_int(array_of_int);

	for (int i = 0; i < copy_int.size(); i++)
		copy_int[i] *= 2;
	std::cout << "\nprint og and copy\n";
	for (int i = 0; i < array_of_int.size(); i++)
		std::cout << array_of_int[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < copy_int.size(); i++)
		std::cout << copy_int[i] << " ";;
	std::cout << std::endl;


	std::cout << "\ntrying to access value 7 in an array of size : "<< array_of_int.size() << std::endl;
	try
	{
		array_of_int[7] = 8;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n       ARRAY OF STRING      " << std::endl;

	Array<std::string> array_of_string(8);

	std::cout << "size of array =" << array_of_string.size() << std::endl;

	std::cout << "filling array with values ..." << std::endl;
	for (int i = 0; i < array_of_string.size(); i++)
		array_of_string[i] = "test";

	std::cout << "printing values :" << std::endl;
	for (int i = 0; i < array_of_string.size(); i++)
		std::cout << array_of_string[i] << " ";

	std::cout << "\ntrying to access value 1 in an array of size : "<< array_of_int.size() << std::endl;
	try
	{
		array_of_string[1] = "HERE";
		std::cout << "array_of_string[1] = " << array_of_string[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nCopy the array and change values" << std::endl;

	Array<std::string> copy_string(array_of_string);

	for (int i = 0; i < copy_string.size(); i++)
		copy_string[i] = "good";
	std::cout << "\nprint og and copy\n";
	for (int i = 0; i < array_of_string.size(); i++)
		std::cout << array_of_string[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < copy_string.size(); i++)
		std::cout << copy_string[i] << " ";;
	std::cout << std::endl;

	std::cout << "\ntrying to access value -1 in an array of size : "<< array_of_int.size() << std::endl;
	try
	{
		array_of_string[-1] = "here";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n       ARRAY OF DOUBLE      " << std::endl;

	Array<double> array_of_double(8);

	std::cout << "size of array =" << array_of_double.size() << std::endl;

	std::cout << "filling array with values ..." << std::endl;
	for (int i = 0; i < array_of_double.size(); i++)
		array_of_double[i] = 1.37 * i;

	std::cout << "printing values :" << std::endl;
	for (int i = 0; i < array_of_double.size(); i++)
		std::cout << array_of_double[i] << " ";

	std::cout << "\ntrying to access value 1 in an array of size : "<< array_of_double.size() << std::endl;
	try
	{
		array_of_double[1] = 10.01;
		std::cout << "array_of_string[1] = " << array_of_double[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nCopy the array and change values" << std::endl;

	Array<double> copy_double(array_of_double);

	for (int i = 0; i < copy_double.size(); i++)
		copy_double[i] = copy_double[i] * 2.13;
	std::cout << "\nprint og and copy\n";
	for (int i = 0; i < array_of_double.size(); i++)
		std::cout << array_of_double[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < copy_double.size(); i++)
		std::cout << copy_double[i] << " ";;
	std::cout << std::endl;

	std::cout << "\ntrying to access value -1 in an array of size : "<< array_of_double.size() << std::endl;
	try
	{
		array_of_double[-1] = 2.23;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n         GIANT ARRAY        \n";
	Array<int> test(5000);
	std::ofstream	file("Big array");

	if (file)
	{
		std::cout << "Creat array of 5000...\n";
		for (int i = 0; i < test.size() ; i++)
			test[i] = i;

		std::cout << "Print array values...\n";
		for (int i = 0; i < test.size() ; i++)
			file << test[i] << " ";
	}
	std::cout << std::endl;
}
