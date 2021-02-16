#pragma once
#include <string>
#include <fstream>
#include <stdio.h>
#include <iostream>

class fileHandler
{
public:
	//int closeFile();

	int writeFile(std::string fileName, std::string content);
	std::string readFile(std::string fileName);
	bool removeFile(const char * fileName);


private:
	std::fstream file;

	bool openFile(std::string fileName);
	void createFile(std::string fileName);
	void closeFile();

};

