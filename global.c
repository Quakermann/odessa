#include "global.h"

SDL_Window* g_window;			//Define variables. I know, the ones back in the header? Declarations. I guess Declarations = definitions. Fuckin weird.
SDL_GLContext g_context;

int screen_width = 1280;
int screen_height = 720;
int FOV = 90;
bool capture_mouse = true;

float delta = 0.0;

float deg2rad(float deg)
{
	return deg * M_PI / 180.0f;
}

