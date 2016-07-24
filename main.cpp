#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "mesh.h"
#include "shader.h"

int main(int argc, char* argv[])
{
	Display display(1280, 720, "Hello World!");

	Vertex vertices[] = { Vertex(glm::vec3(-0.5, -0.5, 0)),
			      Vertex(glm::vec3(0, 0.5, 0)),
			      Vertex(glm::vec3(0.5, -0.5, 0)), };

	Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

	Shader shader("./res/basicShader");

	while(!display.IsClosed())
	{
		display.Clear(1.0f, 1.0f, 1.0f, 1.0f);

		mesh.Draw();

		shader.Bind();

		display.Update();
	}

	return 0;
}
