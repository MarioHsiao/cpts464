#include <string>
#include <iostream>

std::string cpu_usage(){
	char input[] =
 "top -bn1 | grep \"Cpu(s)\" | sed \"s/.*, *\\([0-9.]*\\)%* id.*/\\1/\" | awk '{print 100 - $1}'}";
 return input;
}

int main(int argc, const char *argv[])
{
	std::cout << cpu_usage();
	return 0;
}
