#include <iostream>
#ifndef STRINGMANIP//.H


using namespace std;
class stringmanip
{
private: 
	 char* input;
	char* input1;
	int capacity;
public:
	stringmanip(int cap);
	~stringmanip();
	void convert(char* in);
	void convert(char* in, char* in1);
	int length(char* in);
	string compare(char* in, char* in1);
	
};

#endif 


