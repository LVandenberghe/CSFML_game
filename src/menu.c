/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** menu
*/

#include "my.h"

void foreground(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/front.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f resize = {3, 6};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setScale(sprite, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}

void middleground(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/middle.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f resize = {3, 6};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setScale(sprite, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}

void background(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/back.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f resize = {3, 6};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setScale(sprite, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}

sfFloatRect print_button(gbl_t global, sfFloatRect frect)
{
    sfst(global.a_button.button, global.a_button.text_button, sfTrue);
    sfss(global.a_button.button, global.a_button.scale);
    sfsp(global.a_button.button, (sfVector2f) {770, 340});
    sfds(global.a_window.window, global.a_button.button, NULL);
    frect = sfSprite_getGlobalBounds(global.a_button.button);
    return (frect);
}

int menu(gbl_t global)
{
    sfVector2i current = {0, 0};
    sfFloatRect frect;

    current = sfMouse_getPositionRenderWindow(global.a_window.window);
    sfRenderWindow_clear(global.a_window.window, sfBlack);
    background(global.a_window.window, (sfIntRect) {global.i, 0, 800, 600});
    middleground(global.a_window.window, (sfIntRect) {global.j, 0, 800, 600});
    foreground(global.a_window.window, (sfIntRect) {global.k, 0, 800, 600});
    frect = print_button(global, frect);
    if (sfFRc(&frect, current.x, current.y) == sfTrue) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfSprite_destroy(global.a_button.button);
            sfTexture_destroy(global.a_button.text_button);
            return (1);
        }
    }
    sfRenderWindow_display(global.a_window.window);
    return (0);
}
