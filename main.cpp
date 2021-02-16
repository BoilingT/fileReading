#include <iostream>
#include <string>
#include "fileHandler.h"

int main() {

	fileHandler fHandler;

	fHandler.writeFile("textFile.txt", "Hello, World!");
	std::cout << fHandler.readFile("textFile.txt");
	
	return 0;
}