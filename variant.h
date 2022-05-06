#define I2C_SDA 15
#define I2C_SCL 25

#undef RF95_SCK
#undef RF95_MISO
#undef RF95_MOSI
#undef RF95_NSS

#define RF95_SCK 14
#define RF95_MISO 12
#define RF95_MOSI 13
#define RF95_NSS 27

#define USE_RF95
#define LORA_DIO0 38
#define LORA_RESET -1
#define LORA_DIO1 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC

// This board has no GPS or Screen for now
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define NO_GPS
#define NO_SCREEN