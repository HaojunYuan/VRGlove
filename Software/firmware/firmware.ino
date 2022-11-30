#include "AdvancedConfig.h"

//CONFIGURATION SETTINGS:
#define COMMUNICATION COMM_SERIAL //Which communication protocol to use
//serial over USB
  #define SERIAL_BAUD_RATE 115200
  
//serial over Bluetooth
  #define BTSERIAL_DEVICE_NAME "lucidgloves-left"

//ANALOG INPUT CONFIG
#define FLIP_POTS  false  //Flip values from potentiometers (for fingers!) if they are backwards

//Gesture enables, make false to use button override
#define TRIGGER_GESTURE true
#define GRAB_GESTURE    true
#define PINCH_GESTURE   true


//BUTTON INVERT
#define INVERT_A false
#define INVERT_B false
#define INVERT_JOY false
#define INVERT_MENU false
#define INVERT_CALIB false
#define INVERT_TRIGGER false
#define INVERT_GRAB false
#define INVERT_PINCH false

//joystick configuration
#define JOYSTICK_BLANK false
#define JOY_FLIP_X false
#define JOY_FLIP_Y false
#define JOYSTICK_DEADZONE 10

#define NO_THUMB false

#define USING_CALIB_PIN false 
#define USING_FORCE_FEEDBACK false
#define SERVO_SCALING false

#if defined(ESP32)
  #define PIN_PINKY     36
  #define PIN_RING      39
  #define PIN_MIDDLE    34
  #define PIN_INDEX     35
  #define PIN_THUMB     32
  #define PIN_JOY_X     33
  #define PIN_JOY_Y     25
  #define PIN_JOY_BTN   26
  #define PIN_A_BTN     27 
  #define PIN_B_BTN     14
  #define PIN_TRIG_BTN  12 
  #define PIN_GRAB_BTN  13 
  #define PIN_PNCH_BTN  23 
  #define PIN_CALIB     12 
  #define DEBUG_LED 2
  #define PIN_PINKY_MOTOR     5 
  #define PIN_RING_MOTOR      18
  #define PIN_MIDDLE_MOTOR    19
  #define PIN_INDEX_MOTOR     21
  #define PIN_THUMB_MOTOR     17
  #define PIN_MENU_BTN        27
  
//PINS CONFIGURATION 
#elif defined(__AVR__)
  #define PIN_PINKY     A0
  #define PIN_RING      A1
  #define PIN_MIDDLE    A2
  #define PIN_INDEX     A3
  #define PIN_THUMB     A4
  #define PIN_JOY_X     A6
  #define PIN_JOY_Y     A7
  #define PIN_JOY_BTN   7 
  #define PIN_A_BTN     8 
  #define PIN_B_BTN     9
  #define PIN_TRIG_BTN  10 
  #define PIN_GRAB_BTN  11 
  #define PIN_PNCH_BTN  12 
  #define PIN_CALIB     13 
  #define DEBUG_LED     LED_BUILTIN
  #define PIN_PINKY_MOTOR     2 
  #define PIN_RING_MOTOR      3 
  #define PIN_MIDDLE_MOTOR    4 
  #define PIN_INDEX_MOTOR     5 
  #define PIN_THUMB_MOTOR     6 
  #define PIN_MENU_BTN        8

#endif
