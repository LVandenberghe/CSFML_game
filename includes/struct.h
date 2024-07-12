/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** struct
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct s_window {
    sfRenderWindow *window;
} t_window;

typedef struct music_s {
    sfMusic *music;
} music_t;

typedef struct s_clock {
    sfTime time;
    sfClock *clock;
    float second;
} t_clock;

typedef struct parallax_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f resize;
    int move_i;
} parallax_t;

typedef struct s_button {
    sfFloatRect frect;
    sfTexture *text_button;
    sfSprite *button;
    sfVector2f scale;
} t_button;

typedef struct s_monster {
    sfIntRect rec;
    sfTexture *text_monster;
    sfSprite *monster;
    sfVector2f position;
    sfVector2f scale;
    sfTime time;
    sfClock *clock;
    float second;
} t_monster;

typedef struct gbl_s {
    t_window a_window;
    music_t music;
    t_clock a_clock;
    t_clock m_clock;
    t_button a_button;
    int i;
    int j;
    int k;
    int v;
    int life;
    int score;
    t_monster a_monster;
    sfVector2i current;
    parallax_t menu_background;
    parallax_t menu_middleground;
    parallax_t menu_foreground;
    int true;
} gbl_t;

#endif /* !STRUCT_H_ */
