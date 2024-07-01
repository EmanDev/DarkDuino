// This code demonstrates syntax highlighting in the Arduino IDE
// It doesn't have a practical purpose other than to showcase colors

#include <Arduino.h>
#include <Wire.h>

#define LED_PIN 13
#define SAMPLE_RATE 1000
#define PI 3.14159

const int ARRAY_SIZE = 10;
const char* MESSAGE = "Hello, Arduino!";

float globalVariable = 0.0;

enum Colors {
  RED,
  GREEN,
  BLUE
};

struct SensorData {
  int value;
  long timestamp;
};

class LedController {
  private:
    int pin;
    bool state;

  public:
    LedController(int p) : pin(p), state(false) {
      pinMode(pin, OUTPUT);
    }

    void toggle() {
      state = !state;
      digitalWrite(pin, state);
    }
};

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  randomSeed(analogRead(0));
  
  LedController led(LED_PIN);
  
  Serial.println(F("Setup complete"));
}

void loop() {
  static int counter = 0;
  
  if (counter % 2 == 0) {
    Serial.print("Even: ");
  } else {
    Serial.print("Odd: ");
  }
  Serial.println(counter);
  
  float sineWave = sin(2 * PI * counter / SAMPLE_RATE);
  
  globalVariable += 0.1;
  
  for (int i = 0; i < ARRAY_SIZE; i++) {
    int randomValue = random(100);
    Serial.print(randomValue);
    Serial.print(" ");
  }
  Serial.println();
  
  SensorData data = {analogRead(A0), millis()};
  
  Serial.print("Sensor: ");
  Serial.print(data.value);
  Serial.print(", Time: ");
  Serial.println(data.timestamp);
  
  switch (counter % 3) {
    case RED:
      Serial.println("Red");
      break;
    case GREEN:
      Serial.println("Green");
      break;
    case BLUE:
      Serial.println("Blue");
      break;
  }
  
  delay(1000);
  counter++;
}

// Custom functions
int customFunction(int a, int b) {
  return a + b;
}

template <typename T>
T templateFunction(T value) {
  return value * 2;
}

/* Multi-line
   comment block */

#ifdef DEBUG
  #define DEBUG_PRINT(x) Serial.println(x)
#else
  #define DEBUG_PRINT(x)
#endif

// Preprocessor directives
#if defined(__AVR_ATmega328P__)
  // ATmega328P specific code
#elif defined(__AVR_ATmega2560__)
  // ATmega2560 specific code
#endif

// Bitwise operations
uint8_t flags = 0b00000001;
flags |= 0b00000010;
flags &= 0b11111101;

// Hexadecimal and octal numbers
int hexNumber = 0xFF;
int octalNumber = 0755;

// Character and string literals
char newline = '\n';
char* message = "This is a string";

// Floating-point numbers
float pi = 3.14159f;
double avogadro = 6.022e23;

// More advanced concepts
volatile int interruptCounter = 0;
static int staticVariable = 0;

inline void inlineFunction() {
  // Some quick operation
}

// End of demonstration code