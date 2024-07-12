/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** game
*/

#include "my.h"

void get_b(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/Layers/1.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *textu2 = sfcf("./assets/Layers/2.png", NULL);
    sfSprite *sprite2 = sfSprite_create();
    sfVector2f resize = {6, 4.2};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setTexture(sprite2, textu2, sfTrue);
    sfSprite_setTextureRect(sprite2, rect);
    sfSprite_setScale(sprite, resize);
    sfSprite_setScale(sprite2, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfTexture_setRepeated(textu2, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_drawSprite(window, sprite2, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite2);
    sfTexture_destroy(textu2);
}

void get_m(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/Layers/3.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *textu2 = sfcf("./assets/Layers/4.png", NULL);
    sfSprite *sprite2 = sfSprite_create();
    sfVector2f resize = {6, 4.2};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setTexture(sprite2, textu2, sfTrue);
    sfSprite_setTextureRect(sprite2, rect);
    sfSprite_setScale(sprite, resize);
    sfSprite_setScale(sprite2, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfTexture_setRepeated(textu2, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_drawSprite(window, sprite2, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite2);
    sfTexture_destroy(textu2);
}

void get_f(sfRenderWindow *window, sfIntRect rect)
{
    sfTexture *texture = sfcf("./assets/Layers/5.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *textu2 = sfcf("./assets/Layers/6.png", NULL);
    sfSprite *sprite2 = sfSprite_create();
    sfVector2f resize = {6, 4.2};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setTexture(sprite2, textu2, sfTrue);
    sfSprite_setTextureRect(sprite2, rect);
    sfSprite_setScale(sprite, resize);
    sfSprite_setScale(sprite2, resize);
    sfTexture_setRepeated(texture, sfTrue);
    sfTexture_setRepeated(textu2, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_drawSprite(window, sprite2, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite2);
    sfTexture_destroy(textu2);
}

gbl_t game(gbl_t global)
{
    sfFloatRect frect;

    get_b(global.a_window.window, (sfIntRect) {0, 0, 800, 600});
    get_m(global.a_window.window, (sfIntRect) {global.i, 0, 800, 600});
    get_f(global.a_window.window, (sfIntRect) {global.j, 0, 800, 600});
    frect = print_monster(global, frect);
    global = animate_sprite(global);
    sfRenderWindow_display(global.a_window.window);
    if (sfFRc(&frect, global.current.x, global.current.y) == sfTrue) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            global.a_monster.rec.top = 96;
            global.a_monster.rec.left = 0;
            global.v += 1;
        }
    }
    return (global);
}
