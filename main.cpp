
#include <iostream>
#include <sys/select.h>
#include <string>
#include "Engine.h"

using namespace std;

int main(int argc, char const *argv[])
{
	fd_set set;
	struct timeval tv;
	string input;
	Engine engine;

	for(;;)
	{
		engine.run(input);

		FD_ZERO(&set);
		FD_SET(0, &set);
		tv.tv_sec = 1;
		tv.tv_usec = 200;

		if(select(0+1, &set, NULL, NULL, NULL) > 0){
			getline(std::cin, input);

			engine.run(input);
		}
	}





	return 0;
}

