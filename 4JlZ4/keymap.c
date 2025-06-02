#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    CW_TOGG,        MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,           KC_MINUS,                                                                       KC_EQUAL,       KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LCTL, KC_SCLN),KC_QUOTE,       
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       SC_RSPC,        
    KC_MEH,         KC_HYPR,        KC_LEFT,        KC_RIGHT,       LT(3, KC_ESCAPE),LGUI(LSFT(KC_5)),                                                                                                KC_CAPS,        LT(6, KC_DELETE),KC_DOWN,        KC_UP,          KC_HYPR,        KC_MEH,         
    LT(1, KC_SPACE),LT(2, KC_TAB),  LGUI(KC_SPACE),                 LGUI(LSFT(KC_SPACE)),LT(5, KC_ENTER),LT(4, KC_BSPC)
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MAC_PASTE,   KC_MAC_COPY,    KC_MAC_CUT,     KC_MAC_UNDO,    LSFT(KC_MAC_UNDO),KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_CAPS,        KC_NO,          
    KC_NO,          KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MAC_PASTE,   KC_MAC_COPY,    KC_MAC_CUT,     KC_MAC_UNDO,    LSFT(KC_MAC_UNDO),KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_BTN2,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_NO,                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RGB_TOG,        RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                                                          KC_SYSTEM_POWER,KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_NO,          
    KC_NO,          KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_NO,                                                                          KC_NO,          KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_LEFT_ALT,    KC_RIGHT_CTRL,  KC_NO,          
    KC_NO,          KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DOT,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_0,           KC_MINUS,       KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_NO,          
    KC_NO,          KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,        ST_MACRO_0,                                                                     KC_NO,          KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_LEFT_ALT,    KC_RIGHT_CTRL,  KC_NO,          
    KC_NO,          KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                        KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LPRN,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_RPRN,        KC_UNDS,        KC_TRANSPARENT,                 KC_NO,          KC_TRANSPARENT, KC_NO
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_F15,         KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_NO,          
    KC_F14,         KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,        KC_NO,                                                                          KC_NO,          KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_LEFT_ALT,    KC_RIGHT_CTRL,  KC_NO,          
    KC_F13,         KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,                                       KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SYSTEM_WAKE, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_SPACE,       KC_TAB,         KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {32,255,234}, {32,255,234}, {152,255,255}, {32,255,234}, {152,255,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {188,255,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,0,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,0,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,205,155}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {141,255,233}, {141,255,233}, {32,255,234}, {12,225,241}, {0,205,155}, {32,255,234}, {32,255,234}, {32,255,234}, {152,255,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {188,255,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,0,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,0,255}, {32,255,234}, {32,255,234}, {85,203,158}, {32,255,234}, {0,205,155}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {32,255,234}, {0,205,155}, {141,255,233}, {32,255,234}, {32,255,234} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {41,255,255}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {10,225,255}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,255}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,255}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,255}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,255}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {146,224,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {146,224,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {146,224,255}, {33,255,255}, {0,0,255}, {0,0,0}, {0,0,255}, {146,224,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {105,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {249,228,255}, {0,0,255}, {10,225,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,205,155}, {85,203,158}, {243,222,234}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {32,255,234}, {0,0,0}, {0,0,0}, {12,225,241}, {12,225,241}, {12,225,241}, {0,0,0}, {0,0,0}, {0,204,255}, {0,204,255}, {0,204,255}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {146,224,255}, {146,224,255}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,222,242}, {14,222,242}, {14,222,242}, {0,0,0}, {0,0,0}, {255,220,201}, {255,220,201}, {255,220,201}, {0,0,0}, {0,0,0}, {233,218,217}, {233,218,217}, {233,218,217}, {0,0,0}, {0,0,0}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {0,0,0}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



