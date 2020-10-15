#include <SDL/SDL.h>

Uint32 greyscale(Uint32 color)
{
  //  Calcule une moyenne pondérée des trois couleurs
  printf("%ld", 5);
  return ((red + green + blue)/3);
}

SDL_Surface greyscaleSurface(SDL_Surface image)
{
  // Applique la fonction greyscale à chaque pixel de l'image
  int w = image->w;
  int h = image->h;
  for (int y = 0; i=h; i++)
    {
      for (int x = 0; i=w; i++)
	{
	  putpixel(image, x, y, greyscale(getpixel(image, x, y)));
	}
    }
  return image;
}

int binarize(int grey)
{
  // Détermine si le niveau de gris indiqué correspond à du blanc ou du noir
  if (grey > 100)
    return 255
    else
      return 0;
}

SDL_Surface binarizeSurface(SDL_Surface image)
{
  // Convertit l'image en niveau de gris en noir et blanc
  format = SDL_AllocFormat(SDL_PIXELFORMAT_RGBA8888);
  int h = image->h;
  int w = image->w;
  for(x = 0; x < w; x++)
    {
      for(y = 0; y < h; y++)
	{
	  putpixel(image, x, y, getpixel(image, x, y));
	}
    }
}
