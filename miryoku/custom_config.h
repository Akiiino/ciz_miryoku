// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

// Cross-hand positional home-row mods
#define LHM(MOD, TAP) &lhm MOD TAP
#define RHM(MOD, TAP) &rhm MOD TAP

#define _CORNE_ALPHA_TOP_LEFT 1 2 3 4 5
#define _CORNE_ALPHA_TOP_RIGHT 6 7 8 9 10
#define _CORNE_ALPHA_MID_LEFT 13 14 15 16 17
#define _CORNE_ALPHA_MID_RIGHT 18 19 20 21 22
#define _CORNE_ALPHA_BOTTOM_LEFT 25 26 27 28 29
#define _CORNE_ALPHA_BOTTOM_RIGHT 30 31 32 33 34
#define _CORNE_EXTRA_LEFT 0 12 24
#define _CORNE_EXTRA_RIGHT 11 23 35
#define _CORNE_THUMB_LEFT 36 37 38
#define _CORNE_THUMB_RIGHT 39 40 41

#define MIRYOKU_HOME_MOD_LEFT_POSITIONS < \
    _CORNE_EXTRA_LEFT \
    _CORNE_EXTRA_RIGHT \
    _CORNE_THUMB_LEFT \
    _CORNE_THUMB_RIGHT \
    _CORNE_ALPHA_TOP_LEFT \
    _CORNE_ALPHA_MID_LEFT \
    _CORNE_ALPHA_BOTTOM_LEFT >
#define MIRYOKU_HOME_MOD_RIGHT_POSITIONS < \
    _CORNE_EXTRA_LEFT \
    _CORNE_EXTRA_RIGHT \
    _CORNE_THUMB_LEFT \
    _CORNE_THUMB_RIGHT \
    _CORNE_ALPHA_TOP_RIGHT \
    _CORNE_ALPHA_MID_RIGHT \
    _CORNE_ALPHA_BOTTOM_RIGHT >

// Move upper pinkie keys to outer pinkie keys
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  XXX  K01  K02  K03  K04       K05  K06  K07  K08  XXX  XXX \
K00  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K09 \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

// Remove BUTTON layer from lower pinkie keys
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
LHM(LGUI, A),      LHM(LALT, R),      LHM(LCTRL, S),     LHM(LSHFT, T),     &kp G,             &kp M,             RHM(LSHFT, N),     RHM(LCTRL, E),     RHM(LALT, I),      RHM(LGUI, O),      \
&kp  Z,            U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Remove RGB- and external power- related bindings
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
