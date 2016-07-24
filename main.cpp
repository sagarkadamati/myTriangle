#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shader.h"

int main(int argc, char* argv[])
{
	Display display(1280, 720, "Hello World!");

	Shader shader("./res/basicShader");

	while(!display.IsClosed())
	{
		display.Clear(1.0f, 1.0f, 1.0f, 1.0f);

		shader.Bind();

		display.Update();
	}
	
	return 0;
}
