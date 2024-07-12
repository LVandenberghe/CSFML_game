/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** set_struct
*/

#include "my.h"

t_monster create_monster(t_monster monster)
{
    monster.text_monster = sfcf("./assets/flying_monster.png", NULL);
    monster.monster = sfSprite_create();
    monster.position = (sfVector2f) {0, 0};
    monster.scale = (sfVector2f) {3.7, 3.7};
    monster.rec = (sfIntRect) {0, 0, 32, 32};
    monster.clock = sfClock_create();
    return (monster);
}

t_clock create_clock(t_clock clock)
{
    clock.clock = sfClock_create();
    return (clock);
}

t_window create_window(t_window window)
{
    sfVideoMode mode = {1920, 1080, 32};
    char *name = "my_hunter";

    window.window = sfcw(mode, name, sfResize | sfClose, NULL);
    return (window);
}

t_button create_button(t_button button)
{
    button.text_button = sfcf("./assets/start.png", NULL);
    button.button = sfSprite_create();
    button.scale = (sfVector2f) {0.8, 0.8};
    button.frect = (sfFloatRect) {16, 127, 468, 144};
    return (button);
}

gbl_t create_all(gbl_t global)
{
    t_clock clock = create_clock(clock);
    t_window window = create_window(window);
    t_monster monster = create_monster(monster);
    t_button button = create_button(button);
    global.a_clock = clock;
    global.true = 0;
    global.i = 0;
    global.j = 0;
    global.k = 0;
    global.life = 3;
    global.score = 0;
    global.v = 100;
    global.a_monster = monster;
    global.a_button = button;
    global.a_window = window;
    return (global);
}
