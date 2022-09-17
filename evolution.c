#include <stdio.h> 
#include <SDL2/SDL.h>

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Test", 
                                          SDL_WINDOWPOS_UNDEFINED, 
                                          SDL_WINDOWPOS_UNDEFINED,
                                          800,
                                          800,
                                          SDL_WINDOW_ALLOW_HIGHDPI);

    if (window == NULL) {
        printf("Error initializing SDL, %s\n", SDL_GetError());
        return -1;
    }   

    printf("SDL Successfully initialized");
    SDL_Quit();
    return 0;
}