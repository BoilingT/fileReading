#pragma once
#include <string>
#include <fstream>
#include <stdio.h>
#include <iostream>

class fileHandler
{
public:
	int writeFile(std::string fileName, std::string content);
	bool readFile(std::string fileName, std::string & content);
	bool removeFile(const char * fileName);


private:
	std::fstream file;

	bool createDirectory(std::string path, std::string directoryName);
	bool openFile(std::string fileName);
	bool createFile(std::string fileName);
	void closeFile();

};

