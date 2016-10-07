#ifndef THEME_H
#define THEME_H

enum {
    THEME_DEFAULT,
    THEME_LIGHT,
    THEME_DARK,
    THEME_HIGHCONTRAST,
    THEME_CUSTOM,
    THEME_ZENBURN, // !!!!
    THEME_SOLARIZED_LIGHT,
    THEME_SOLARIZED_DARK,
    // @TODO
    // THEME_XRESOURCE
};

/* Colors for drawing the backgrounds */
uint32_t COLOR_BKGRND_MAIN;
uint32_t COLOR_BKGRND_ALT;
uint32_t COLOR_BKGRND_AUX;
uint32_t COLOR_BKGRND_MENU;
uint32_t COLOR_BKGRND_MENU_HOVER;
uint32_t COLOR_BKGRND_MENU_ACTIVE;
uint32_t COLOR_BKGRND_LIST;
uint32_t COLOR_BKGRND_LIST_HOVER;

uint32_t COLOR_MAIN_TEXT;
uint32_t COLOR_MAIN_TEXT_CHAT;
uint32_t COLOR_MAIN_TEXT_SUBTEXT;
uint32_t COLOR_MAIN_TEXT_ACTION;
uint32_t COLOR_MAIN_TEXT_QUOTE;
uint32_t COLOR_MAIN_TEXT_RED;
uint32_t COLOR_MAIN_TEXT_URL;
uint32_t COLOR_MAIN_TEXT_HINT;

uint32_t COLOR_MSG_USER;
uint32_t COLOR_MSG_USER_PEND;
uint32_t COLOR_MSG_USER_ERROR;
uint32_t COLOR_MSG_CONTACT;

uint32_t COLOR_MENU_TEXT;
uint32_t COLOR_MENU_TEXT_SUBTEXT;
uint32_t COLOR_MENU_TEXT_ACTIVE;

uint32_t COLOR_LIST_TEXT;
uint32_t COLOR_LIST_TEXT_SUBTEXT;

uint32_t COLOR_AUX_EDGE_NORMAL;
uint32_t COLOR_AUX_EDGE_HOVER;
uint32_t COLOR_AUX_EDGE_ACTIVE;
uint32_t COLOR_AUX_TEXT;
uint32_t COLOR_AUX_ACTIVEOPTION_BKGRND;
uint32_t COLOR_AUX_ACTIVEOPTION_TEXT;

uint32_t COLOR_GROUP_SELF;
uint32_t COLOR_GROUP_PEER;
uint32_t COLOR_GROUP_AUDIO;
uint32_t COLOR_GROUP_MUTED;

uint32_t COLOR_SELECTION_BACKGROUND;
uint32_t COLOR_SELECTION_TEXT;

uint32_t COLOR_EDGE_NORMAL;
uint32_t COLOR_EDGE_ACTIVE;
uint32_t COLOR_EDGE_HOVER;

uint32_t COLOR_ACTIVEOPTION_BKGRND;
uint32_t COLOR_ACTIVEOPTION_TEXT;

uint32_t COLOR_STATUS_ONLINE;
uint32_t COLOR_STATUS_AWAY;

uint32_t COLOR_STATUS_BUSY;
uint32_t COLOR_BTN_SUCCESS_BKGRND;
uint32_t COLOR_BTN_SUCCESS_TEXT;
uint32_t COLOR_BTN_SUCCESS_BKGRND_HOVER;
uint32_t COLOR_BTN_SUCCESS_TEXT_HOVER;

uint32_t COLOR_BTN_WARNING_BKGRND;
uint32_t COLOR_BTN_WARNING_TEXT;
uint32_t COLOR_BTN_WARNING_BKGRND_HOVER;
uint32_t COLOR_BTN_WARNING_TEXT_HOVER;

uint32_t COLOR_BTN_DANGER_BACKGROUND;
uint32_t COLOR_BTN_DANGER_TEXT;
uint32_t COLOR_BTN_DANGER_BKGRND_HOVER;
uint32_t COLOR_BTN_DANGER_TEXT_HOVER;

uint32_t COLOR_BTN_DISABLED_BKGRND;
uint32_t COLOR_BTN_DISABLED_TEXT;
uint32_t COLOR_BTN_DISABLED_BKGRND_HOVER;
uint32_t COLOR_BTN_DISABLED_TRANSFER;

uint32_t COLOR_BTN_INPROGRESS_BKGRND;
uint32_t COLOR_BTN_INPROGRESS_TEXT;
uint32_t COLOR_BTN_DISABLED_FORGRND;
uint32_t COLOR_BTN_INPROGRESS_FORGRND;

void theme_load(char loadtheme);
void read_custom_theme(const char *path);

uint32_t status_color[4];

uint32_t theme;

extern const char *COLOUR_NAME_TABLE[];
extern uint32_t *  COLOUR_POINTER_TABLE[];

#endif
