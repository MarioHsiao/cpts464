#include "util.cpp"
#include <iostream>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	std::cout << "user "  + get_user() << std::endl;
	std::cout << "hostname " + get_hostname() << std::endl;
	std::cout << "time " + get_time() << std::endl;
	std::cout << "procs " + get_procs() << std::endl;
	std::cout << "cpu " + cpu_usage() << std::endl;
	std::cout << "mem " + (float)mem_usage() << std::endl;
	return 0;
}
