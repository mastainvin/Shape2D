# Shape2D
A very simple SDL2 C game engine which can animate and modify rectangles.

La librairie Shape2D est un moteur de jeu gérant, seulement, des rectangles. Les fonctionnalités sont le positionnement et les modifications de formes. C’est une librairie très proche de la SDL, elle existe pour simplifier son utilisation et pour pouvoir très simplement animer des objets.

## Structures

### Le type sprite
```
SHP_Sprite
```
#### Éléments dans le type

```
SDL_Rect background
SDL_Color background_color
char *text
SDL_Color text_color
int text_size
```

Nous ne sommes pas obligés de donner un texte au sprite.

### Le type bool

```
SHP_bool
```


## Fonctions 

```
void SHP_PrintSprite(SHP_Sprite sprite,SDL_Renderer *renderer)
```

Permet d'afficher un sprite précédemment créé

```
void SHP_Limit_FPS(unsigned int limit)
```

Permet de contrôler la limite de fps au sein du jeu

### Son utilisation

À mettre dans la boucle de jeu 

```
int frame_limit = SDL_GetTicks() + SHP_FRAME_PER_SECOND;
SHP_Limit_FPS(frame_limit);
frame_limit = SDL_GetTicks() + SHP_FRAME_PER_SECOND;
```
