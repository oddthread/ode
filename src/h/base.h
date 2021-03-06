#ifndef d_base_h
#define d_base_h

#include "oul/src/h/oul.h"
#include <stdio.h>

extern u32 num_spaces_to_insert_on_tab;
extern char ote_log_buffer[1000];
extern u32 const LOG_TYPE_ACTION;
extern u32 const LOG_TYPE_STRINGS;
extern u32 const LOG_TYPE_OTE;
extern bool log_type_enabled[3];

extern s32 const EXIT_CODE_ALL_WINDOWS_CLOSED;

extern bool const AUTO_CURLY_BRACE;
extern bool const AUTO_INDENT;

extern s32 const LINES_ON_PAGE_DOWNUP;

extern s32 const REQUEST_SPAWN_EDITOR;

void ote_log(char *text, u32 type);

s32 indentation_level_spaces(char *line);

extern char const *global_font_url;
extern u32 global_font_size;
extern s32 global_text_margin; /*if 0 line numbers wont render*/

extern s32 standard_button_width;
extern s32 standard_button_height;

extern r32 standard_button_alpha;
extern r32 standard_button_hover_alpha;
extern r32 standard_button_selected_alpha;

typedef struct keystate_interpreter_info
{
    bool shift_pressed;
    bool alt_pressed; //?
    bool ctrl_pressed;
    s64 *pressed_keys;
    u32 pressed_keys_size;
} keystate_interpreter_info;

#endif
