#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define HW_VENDOR HardwareModel_PRIVATE_HW
#define SDA 15
#define SCL 18
#define SCK 25
#define MISO 34
#define MOSI 21
#define SS 27

#define digitalPinToInterrupt(p) (((p) < 40) ? (p) : -1)

#endif
