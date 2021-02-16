#include <iostream>
#include <string>
#include "fileHandler.h"

using namespace std;

int main() {

	fileHandler fHandler;
	string content;

	//fHandler.removeFile("textFile.txt");
	fHandler.writeFile("textFile.txt", "This is a textfile with\nMultiple lines!");
	if (fHandler.readFile("textFile.txt", content)) {
		std::cout << content << std::endl;
	}

	return 0;
}