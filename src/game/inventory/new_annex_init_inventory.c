/*
** EPITECH PROJECT, 2022
** new_annex_innit_inventory.c
** File description:
** new annex init iinventory
*/

#include "my_rpg.h"

void annex_init_inventory(game_t *game)
{
    game->rpg->inv->butt = malloc(sizeof(button_t *) * 1);
    game->rpg->inv->texts = malloc(sizeof(texte_t *) * 11);
    game->rpg->inv->icon_path = NULL;
    game->rpg->inv->spr_bk = sfSprite_create();
    game->rpg->inv->txt_bk = sfTexture_createFromFile
    ("assets/env/inventory/inventorysheet.png", NULL);
    game->rpg->inv->hide = true;
    game->rpg->inv->visible = 0;
    sfSprite_setTexture(game->rpg->inv->spr_bk,
        game->rpg->inv->txt_bk, sfTrue);
    game->rpg->inv->spr_ic = sfSprite_create();
    game->rpg->inv->pos_ic = (sfVector2f){1170, 340};
    sfSprite_setPosition(game->rpg->inv->spr_ic,
        game->rpg->inv->pos_ic);
    game->rpg->inv->scale_ic = (sfVector2f){2, 2};
    sfSprite_setScale(game->rpg->inv->spr_ic, game->rpg->inv->scale_ic);
    game->rpg->inv->butt->aspect = malloc(sizeof(gameobj_t));
    game->rpg->inv->butt->aspect->pos = (sfVector2f){1345, 785};
    game->rpg->inv->butt->aspect->rect = (sfIntRect){0, 0, 112, 32};
    game->rpg->inv->butt->aspect->spr = sfSprite_create();
}
