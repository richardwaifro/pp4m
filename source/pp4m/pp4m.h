/* Private Project Four Me */

#ifndef _PP4M_H
#define _PP4M_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDl2/SDL_ttf.h>

extern SDL_Color PP4M_BLACK;
extern SDL_Color PP4M_WHITE;

extern SDL_Color PP4M_RED;
extern SDL_Color PP4M_GREEN;
extern SDL_Color PP4M_BLUE;

extern SDL_Color PP4M_YELLOW;
extern SDL_Color PP4M_PINK;
extern SDL_Color PP4M_CYAN;

typedef struct {
    char text[1024];
    SDL_Rect rect;
    SDL_Color color;
    TTF_Font *font;
    SDL_Surface *surface;
    SDL_Texture *texture;
} PP4M_SDL;

SDL_Renderer *pp4m_Init(SDL_Window *window, char title[256], int width, int height);
void pp4m_Quit(void);

void pp4m_GetDateAndTime(char *dst);

int pp4m_SecondsTick(void) ;
int pp4m_Framerate(void);

#endif // _PP4M_H
