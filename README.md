# Shape2D
A very simple SDL2 C game engine which can animate and modify rectangles.

La librairie Shape2D est un moteur de jeu gérant, seulement, des rectangles. Les fonctionnalités sont le positionnement et les modifications de formes. C’est une librairie très proche de la SDL, elle existe pour simplifier son utilisation et pour pouvoir très simplement animer des objets.



## Fonctions disponibles

'''
void SHP_PrintSprite(SHP_Sprite sprite,SDL_Renderer *renderer)
'''

Permet d'afficher un sprite précédemment créé

'''
void SHP_Limit_FPS(unsigned int limit)
'''

Permet de contrôler la limite de fps au sein du jeu
