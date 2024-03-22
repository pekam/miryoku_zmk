// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_CODE \
&bootloader,   &to U_TAP,     &to U_EXTRA,   &to U_BASE,  U_NA,      U_NA,      &kp NORDIC_CURLY_BRACE_LEFT,    &kp NORDIC_CURLY_BRACE_RIGHT,    U_NA,          U_NA,             \
&kp LGUI,      &kp LALT,      &kp LSHFT,     &kp LCTRL,   U_NA,      U_NA,      &kp NORDIC_PARENTHESES_LEFT,    &kp NORDIC_PARENTHESES_RIGHT,    &kp NORDIC_AND,        &kp NORDIC_PIPE,         \
U_NA,          &kp RALT,      U_NA,          &to U_CODE,  U_NA,      U_NA,      &kp NORDIC_SQUARE_BRACKET_LEFT, &kp NORDIC_SQUARE_BRACKET_RIGHT, &kp NORDIC_LT,    &kp NORDIC_GT,           \
U_NP,          U_NP,          U_NA,          U_NA,        U_NA,      &kp NORDIC_PLUS,   &kp NORDIC_EQ,         &kp NORDIC_MINUS,           U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(CODE,   "Code")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_CODE   10

#define MIRYOKU_LAYERMAPPING_CODE MIRYOKU_MAPPING

// hyper modifier: shift+control+alt+super
#define HYPER LS(LC(LA(LGUI)))
// meh modifier: shift+control+alt
#define MEH LS(LC(LALT))

/*
Miryoku qwerty layer with:
- code layer on V key
- hyper modifiers on top rows' middle finger keys
*/
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             U_MT(HYPER, E),    &kp R,             &kp T,             &kp Y,             &kp U,             U_MT(HYPER, I),    &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LSHFT, D),    U_MT(LCTRL, F),    &kp G,             &kp H,             U_MT(LCTRL, J),    U_MT(LSHFT, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(MEH, C),      U_LT(U_CODE, V),   &kp B,             &kp N,             &kp M,             U_MT(MEH, COMMA),  U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
