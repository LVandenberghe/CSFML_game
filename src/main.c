/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** main
*/

#include "my.h"

gbl_t set_clock(gbl_t global)
{
    global.a_clock.time = sfClock_getElapsedTime(global.a_clock.clock);
    global.a_clock.second = global.a_clock.time.microseconds / 1000000.0;
    global.a_monster.time = sfClock_getElapsedTime(global.a_monster.clock);
    global.a_monster.second = global.a_monster.time.microseconds / 1000000.0;
    if (global.a_clock.second > 0.25) {
        global.i += 1;
        global.j += 2;
        global.k += 3;
    }
    if (global.a_monster.second > 0.05) {
        global.a_monster.position.x += global.v;
        if (global.v >= 15)
            global.v -= 1;
    }
    return (global);
}

void find_event(gbl_t global, sfEvent event)
{
    while (sfRenderWindow_pollEvent(global.a_window.window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(global.a_window.window);
        }
    }
}

void destroy_object(gbl_t global)
{
    sfClock_destroy(global.a_clock.clock);
    sfClock_destroy(global.a_monster.clock);
    sfRenderWindow_destroy(global.a_window.window);
    sfSprite_destroy(global.a_monster.monster);
    sfTexture_destroy(global.a_monster.text_monster);
}

void loop(gbl_t global, sfEvent event)
{
    while (sfRenderWindow_isOpen(global.a_window.window)) {
        global.current = sfmgp(global.a_window.window);
        global = set_clock(global);
        if (global.true == 0)
            global.true = menu(global);
        if (global.true == 1) {
            global = game(global);
        }
        sfRenderWindow_clear(global.a_window.window, sfBlack);
        find_event(global, event);
    }
    destroy_object(global);
}

int main(int ac, char **av)
{
    gbl_t global = create_all(global);
    sfEvent event;

    if ((ac == 2) && (av[1][0] == '-') && (av[1][1] == 'h')) {
        my_putstr("my_hunter\n - basic reproduction of the game duck hunt\n");
        my_putstr(" - You have to hit the target that appears on the screen\n");
        my_putstr(" - You lose if you don't hit it in time\n");
        return (0);
    }
    if (ac != 1) {
        my_putstr("Usage: my_hunter [-h]\n");
        return 0;
    }
    loop(global, event);
    return (0);
}
