#include <iostream>
#include <GL/glew.h>
#include "display.h"

int main(int argc, char* argv[])
{
	Display display(1280, 720, "Hello World!");

	while(!display.IsClosed())
	{
		display.Clear(1.0f, 1.0f, 1.0f, 1.0f);

		display.Update();
	}
	
	return 0;
}
