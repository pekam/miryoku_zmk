// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_CODE \
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

// qwerty with code layer on V key
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LSHFT D,       &hm LCTRL F,       &kp G,             &kp H,             &hm LCTRL J,       &hm LSHFT K,       &hm LALT L,        &hm LGUI SEMI,      \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &lt U_CODE V,      &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP
