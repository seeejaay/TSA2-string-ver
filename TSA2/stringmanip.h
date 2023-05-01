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
	stringmanip(int cap=50);
	~stringmanip();
	void convert(string& in);
	/*void convert(string in, string in1);*/
	int length(string& in);
	
};

#endif 


