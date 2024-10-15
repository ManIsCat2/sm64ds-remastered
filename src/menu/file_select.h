#ifndef FILE_SELECT_H
#define FILE_SELECT_H

#include <PR/ultratypes.h>
#include <PR/gbi.h>

#include "types.h"

enum MainMenuButtonStates {
    MENU_BUTTON_STATE_DEFAULT,
    MENU_BUTTON_STATE_FADING,
    MENU_BUTTON_STATE_FULLSCREEN
};

enum MenuButtonTypes {
    MENU_BUTTON_NONE = -1, // no button selected (on main menu screen)

    // Main Menu (SELECT FILE)
    MENU_BUTTON_MAIN_MIN,
    MENU_BUTTON_PLAY_FILE_A = MENU_BUTTON_MAIN_MIN,
    MENU_BUTTON_PLAY_FILE_B,
    MENU_BUTTON_PLAY_FILE_C,
    MENU_BUTTON_OPTIONS,
    MENU_BUTTON_RETURN,
    MENU_BUTTON_MAIN_MAX,

    // Misc
    MENU_BUTTON_OPTION_MIN,
    MENU_BUTTON_OPTION_MAX
};

void bhv_menu_button_init(void);
void bhv_menu_button_loop(void);
void bhv_menu_button_manager_init(void);
void bhv_menu_button_manager_loop(void);
s32 lvl_init_menu_values_and_cursor_pos(UNUSED s32 arg, UNUSED s32 unused);
s32 lvl_update_obj_and_load_file_selected(UNUSED s32 arg, UNUSED s32 unused);
Gfx *geo_file_select_strings_and_menu_cursor(s32 callContext, UNUSED struct GraphNode *node, UNUSED Mat4 mtx);

#endif // FILE_SELECT_H
