#pragma once
#include "frost_applicationfour.h"
#include <string>
#include <iostream>
#include "patient.h"
#include <fstream>


class Logger {

private:
	Logger();
	Logger(const Logger& l);
	static Logger* logger;


public:
	static void log(std::string output);
	static void log(const Patient* p, int c);
	static Logger* getLogger();
	~Logger();


};
