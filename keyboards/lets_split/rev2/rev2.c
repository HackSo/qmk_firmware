#include "lets_split.h"


#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    led_set_user(usb_led);
}
#endif

void matrix_init_kb(void) {

<<<<<<< HEAD
    #ifdef AUDIO_ENABLE
        _delay_ms(20); // gets rid of tick
        PLAY_SONG(tone_startup);
    #endif

    // green led on
    DDRD &= ~(1<<5);
    PORTD &= ~(1<<5);
=======
    // // green led on
    // DDRD |= (1<<5);
    // PORTD &= ~(1<<5);
>>>>>>> 7d8a20b07f31309bc41de69583839058040c55b9

    // orange led on
    DDRB &= ~(1<<0);
    PORTB &= ~(1<<0);

	matrix_init_user();
};

