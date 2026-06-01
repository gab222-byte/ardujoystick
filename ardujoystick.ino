#include <Keyboard.h>
#include <Mouse.h>

// ===== PIN JOYSTICK =====

// Tastiera
const int pinY_t = A0;
const int pinX_t = A1;

// Mouse (per dopo)
const int pinX_m = A2;
const int pinY_m = A3;

// ===== STATO TASTI =====

bool aPressed = false;
bool dPressed = false;
bool wPressed = false;
bool sPressed = false;

// ===== PULSANTI DISTRUGGI/CREA =====
const byte Pin_distruggi = 10;
const byte Pin_crea = 9;
// ===== SOGLIE =====

const int LOW_THRESHOLD  = 200;
const int HIGH_THRESHOLD = 800;

void setup() {
  Mouse.#include <Keyboard.h>
#include <Mouse.h>

// ===== PIN JOYSTICK =====

// Tastiera
const int pinY_t = A0;
const int pinX_t = A1;

// Mouse (per dopo)
const int pinX_m = A2;
const int pinY_m = A3;

// ===== STATO TASTI =====

bool aPressed = false;
bool dPressed = false;
bool wPressed = false;
bool sPressed = false;

// ===== PULSANTI DISTRUGGI/CREA =====
const byte Pin_distruggi = 10;
const byte Pin_crea = 9;
// ===== SOGLIE =====

const int LOW_THRESHOLD  = 200;
const int HIGH_THRESHOLD = 800;

void setup() {
  Mouse.begin();
  Serial.begin(9600);
  Keyboard.begin();
  pinMode(Pin_crea, INPUT_PULLUP);
  pinMode(Pin_distruggi, INPUT_PULLUP);

}

void loop() {

  // ===== ATTACCO/CREA =====
  if(digitalRead(Pin_distruggi) == HIGH){
     Mouse.press(MOUSE_RIGHT);
  }else{
    Mouse.release(MOUSE_RIGHT);
  }

  if(digitalRead(Pin_crea) == HIGH){
     Mouse.press(MOUSE_LEFT);
  }else{
    Mouse.release(MOUSE_LEFT);
  }

  // Tastiera
  int yValue_t = analogRead(pinY_t);
  int xValue_t = analogRead(pinX_t);

  // Mouse (non ancora usato)
  int xValue_m = analogRead(pinX_m);
  int yValue_m = analogRead(pinY_m);

  // ==================================================
  //                     TASTIERA
  // ==================================================

  // ===== A =====
  if (xValue_t < LOW_THRESHOLD) {

    if (!aPressed) {
      Keyboard.press('a');
      aPressed = true;
    }

  } else {

    if (aPressed) {
      Keyboard.release('a');
      aPressed = false;
    }
  }

  // ===== D =====
  if (xValue_t > HIGH_THRESHOLD) {

    if (!dPressed) {
      Keyboard.press('d');
      dPressed = true;
    }

  } else {

    if (dPressed) {
      Keyboard.release('d');
      dPressed = false;
    }
  }

  // ===== W =====
  if (yValue_t < LOW_THRESHOLD) {

    if (!wPressed) {
      Keyboard.press('w');
      wPressed = true;
    }

  } else {

    if (wPressed) {
      Keyboard.release('w');
      wPressed = false;
    }
  }

  // ===== S =====
  if(yValue_t > HIGH_THRESHOLD) {

    if (!sPressed) {
      Keyboard.press('s');
      sPressed = true;
    }

  } else {

    if (sPressed) {
      Keyboard.release('s');
      sPressed = false;
    }
  }

  delay(10);
}begin();
  Serial.begin(9600);
  Keyboard.begin();
  pinMode(Pin_crea, INPUT_PULLUP);
  pinMode(Pin_distruggi, INPUT_PULLUP);

}

void loop() {

  // ===== DISTRUGGI/CREA =====
  if(digitalRead(Pin_distruggi) == HIGH){
     Mouse.press(MOUSE_RIGHT);
  }else{
    Mouse.release(MOUSE_RIGHT);
  }

  if(digitalRead(Pin_crea) == HIGH){
     Mouse.press(MOUSE_LEFT);
  }else{
    Mouse.release(MOUSE_LEFT);
  }

  // Tastiera
  int yValue_t = analogRead(pinY_t);
  int xValue_t = analogRead(pinX_t);

  // Mouse (non ancora usato)
  int xValue_m = analogRead(pinX_m);
  int yValue_m = analogRead(pinY_m);

  // ==================================================
  //                     TASTIERA
  // ==================================================

  // ===== A =====
  if (xValue_t < LOW_THRESHOLD) {

    if (!aPressed) {
      Keyboard.press('a');
      aPressed = true;
    }

  } else {

    if (aPressed) {
      Keyboard.release('a');
      aPressed = false;
    }
  }

  // ===== D =====
  if (xValue_t > HIGH_THRESHOLD) {

    if (!dPressed) {
      Keyboard.press('d');
      dPressed = true;
    }

  } else {

    if (dPressed) {
      Keyboard.release('d');
      dPressed = false;
    }
  }

  // ===== W =====
  if (yValue_t < LOW_THRESHOLD) {

    if (!wPressed) {
      Keyboard.press('w');
      wPressed = true;
    }

  } else {

    if (wPressed) {
      Keyboard.release('w');
      wPressed = false;
    }
  }

  // ===== S =====
  if(yValue_t > HIGH_THRESHOLD) {

    if (!sPressed) {
      Keyboard.press('s');
      sPressed = true;
    }

  } else {

    if (sPressed) {
      Keyboard.release('s');
      sPressed = false;
    }
  }

  delay(10);
}
