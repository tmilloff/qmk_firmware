#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

#define MIDI_BASIC

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
#define PREVENT_STUCK_MODIFIERS
#define FORCE_NKRO
#define RETRO_TAPPING

#define DYNAMIC_MACRO_NO_NESTING
