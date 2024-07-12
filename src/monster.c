/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** monster
*/

#include "my.h"

sfFloatRect print_monster(gbl_t global, sfFloatRect frect)
{
    sfst(global.a_monster.monster, global.a_monster.text_monster, sfTrue);
    sfss(global.a_monster.monster, global.a_monster.scale);
    sfsp(global.a_monster.monster, global.a_monster.position);
    sftr(global.a_monster.monster, global.a_monster.rec);
    sfds(global.a_window.window, global.a_monster.monster, NULL);
    frect = sfSprite_getGlobalBounds(global.a_monster.monster);
    return (frect);
}

gbl_t animate_sprite(gbl_t global)
{
    if (global.a_monster.second > 0.05) {
        global.a_monster.rec.left += 32;
        if (global.a_monster.rec.left == 128 && global.a_monster.rec.top == 0)
            global.a_monster.rec = (sfIntRect) {0, 0, 32, 32};
        sfClock_restart(global.a_monster.clock);
    }
    if (global.a_monster.position.x >= 1920) {
        global.a_monster.position.y = rand() % 980;
        global.a_monster.position.x = -32;
        global.life -= 1;
    }
    if (global.a_monster.rec.left == 224) {
        global.a_monster.position.y = rand() % 980;
        global.a_monster.position.x = 0;
        global.a_monster.rec.top = 0;
        global.a_monster.rec.left = 0;
        global.score += 1;
    }
    return (global);
}
