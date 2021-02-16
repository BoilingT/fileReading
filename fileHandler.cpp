#include "fileHandler.h"

bool fileHandler::openFile(std::string fileName) {
	file.open(fileName);
	if (file.is_open())
	{
		return true;
	}

	return false;
}

void fileHandler::createFile(std::string fileName) {
	std::ofstream outFile(fileName);
	outFile.close();
}

void fileHandler::closeFile() {
	file.close();
}

bool fileHandler::removeFile(const char * fileName) {
	if (file.is_open())
	{
		fileHandler::closeFile();
	}
	if (std::remove(fileName))
	{
		return true;
	}
	else {
		return false;
	}
}

std::string fileHandler::readFile(std::string fileName) {

	//Variable for containing the entire content of the file
	std::string content;
	//Variable for containing a single line of the file
	std::string line;

	file = std::fstream(fileName);

	//Reading the file
	while (std::getline(file, line))
	{
		content += line + "\n";
	}

	file.close();
	return content;
}

int fileHandler::writeFile(std::string fileName, std::string content) {
	//Open and create the file
	if (fileHandler::openFile(fileName)) {
		//Write to the file
		file << content;
		return 0;
	}
	else
	{
		std::cout << "The file could not be opened, creating new file..." << std::endl;
		fileHandler::createFile(fileName);
		file = std::fstream(fileName);

		file << content;
		return 0;
	}

	return -1;
}