#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <string>

class Display
{
public:
	Display(int widht, int height, const std::string& title);
	virtual ~Display();

	void Clear(int r, int g, int b, int a);
	void Update();
	bool IsClosed();
protected:
private:
	Display(const Display& other) {}
	void operator=(const Display& other) {}

	SDL_Window* m_window;
	SDL_GLContext m_glContext;

	bool m_isClosed;
};

#endif // DISPLAY_H
