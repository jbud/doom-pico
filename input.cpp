//#include <Arduino.h>
#include "input.h"
#include "constants.h"

#ifdef USE_INPUT_PULLUP
  #define INPUT_MODE INPUT_PULLUP
  //#define INPUT_STATE LOW
#else
  #define INPUT_MODE INPUT
  #define INPUT_STATE HIGH
#endif

#ifdef SNES_CONTROLLER
uint16_t buttons = 0;

void input_setup() {
  // Set DATA_CLOCK normally HIGH
  pinMode(DATA_CLOCK, OUTPUT);
  digitalWrite(DATA_CLOCK, HIGH);

  // Set DATA_LATCH normally LOW
  pinMode(DATA_LATCH, OUTPUT);
  digitalWrite(DATA_LATCH, LOW);

  // Set DATA_SERIAL normally HIGH
  pinMode(DATA_SERIAL, OUTPUT);
  digitalWrite(DATA_SERIAL, HIGH);
  pinMode(DATA_SERIAL, INPUT);
}

void getControllerData(void){
  // Latch for 12us
  digitalWrite(DATA_LATCH, HIGH);
  delayMicroseconds(12);
  digitalWrite(DATA_LATCH, LOW);
  delayMicroseconds(6);
  buttons = 0;
  // Retrieve button presses from shift register by pulling the clock high for 6us
  for(uint8_t i = 0; i < 16; ++i){
    digitalWrite(DATA_CLOCK, LOW);
    delayMicroseconds(6);
    buttons |= !digitalRead(DATA_SERIAL) << i;
    digitalWrite(DATA_CLOCK, HIGH);
    delayMicroseconds(6);
  }
}

bool input_left() {
  return buttons & LEFT;
};

bool input_right() {
  return buttons & RIGHT;
};

bool input_up() {
  return buttons & UP;
};

bool input_down() {
  return buttons & DOWN;
};

bool input_fire() {
  return buttons & Y;
};

bool input_start() {
  return buttons & START;
}
#else

void input_setup() {
  gpio_init(K_LEFT);
  gpio_set_dir(K_LEFT, 0);
  gpio_pull_up(K_LEFT);
  gpio_init(K_RIGHT);
  gpio_set_dir(K_RIGHT, 0);
  gpio_pull_up(K_RIGHT);
  gpio_init(K_UP);
  gpio_set_dir(K_UP, 0);
  gpio_pull_up(K_UP);
  gpio_init(K_DOWN);
  gpio_set_dir(K_DOWN, 0);
  gpio_pull_up(K_DOWN);
  gpio_init(K_FIRE);
  gpio_set_dir(K_FIRE, 0);
  gpio_pull_up(K_FIRE);
  /*
  pinMode(K_LEFT, INPUT_MODE);
  pinMode(K_RIGHT, INPUT_MODE);
  pinMode(K_UP, INPUT_MODE);
  pinMode(K_DOWN, INPUT_MODE);
  pinMode(K_FIRE, INPUT_MODE);
  */
}



bool input_left() {
  return gpio_get(K_LEFT) == 0;
};

bool input_right() {
  return gpio_get(K_RIGHT) == 0;
};

bool input_up() {
  return gpio_get(K_UP) == 0;
};

bool input_down() {
  return gpio_get(K_DOWN) == 0;
};

bool input_fire() {
  return gpio_get(K_FIRE) == 0;
};
#endif
