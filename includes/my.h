/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** for functions
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

#ifndef MY_H_
    #define MY_H_

    int my_putstr(char const *str);
    int my_strlen(char const *str);
    sfFloatRect print_button(gbl_t global, sfFloatRect frect);
    int menu(gbl_t global);
    gbl_t game(gbl_t global);
    gbl_t move_sprite(gbl_t global);
    gbl_t create_all(gbl_t global);
    sfFloatRect print_monster(gbl_t global, sfFloatRect frect);
    gbl_t animate_sprite(gbl_t global);
    gbl_t death_animation(gbl_t global);
    #define sfcf sfTexture_createFromFile
    #define sfcw sfRenderWindow_create
    #define sfst sfSprite_setTexture
    #define sfss sfSprite_setScale
    #define sfsp sfSprite_setPosition
    #define sfds sfRenderWindow_drawSprite
    #define sfFRc sfFloatRect_contains
    #define sftr sfSprite_setTextureRect
    #define sfmgp sfMouse_getPositionRenderWindow

#endif /* !MY_H_ */
