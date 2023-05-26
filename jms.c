#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include<SDL.h>


int main(int arg,char **argv) {
    SDL_Window *Window;
    SDL_Renderer *Renderer;
      if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("ERREUR : Initialisation SDL > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    Window = SDL_CreateWindow("Main", SDL_WINDOWPOS_CENTERED,  SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    if(Window  == NULL)
    {
        SDL_Log("ERREUR : Creation de la fenetre echouée > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    if(Renderer == NULL){
        SDL_Log("ERREUR : Creation du rendu echouée > %s\n", SDL_GetError());
    }
return 0;
}
