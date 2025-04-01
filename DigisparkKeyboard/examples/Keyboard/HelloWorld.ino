/* This example is not included in the .zip File!
*  To include it you will need to download this file and 
*  move it into the examples Folder of the Library.
*
*
*  What this example does is it simulates the WINDOWS + R  key simultaneously, 
*  then it searches for the notepad and finally it prints "Hello World!" onto the
*  Notepad screen. This happens once you plug in your USB and the Bootloader Phase is over
*/

#include <DigiKeyboard.h>

// Platform: Digispark
// Keyboard Layout: DE

// notepad
const uint8_t key_arr_0[] PROGMEM = {0,17, 0,18, 0,23, 0,8, 0,19, 0,4, 0,7};
// Hello World!
const uint8_t key_arr_1[] PROGMEM = {2,11, 0,8, 0,15, 0,15, 0,18, 0,44, 2,26, 0,18, 0,21, 0,15, 0,7, 2,30};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(21, 8); // GUI r
    DigiKeyboard.delay(200);
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING notepad
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING Hello World!
    DigiKeyboard.delay(200);
}

void loop() {}

// Created using duckify.huhn.me  @ dev
