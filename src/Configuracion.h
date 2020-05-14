
// Conexiones Del ESP8266

// ENTRADAS
#define PINHOME D6
#define ENCODER_PUSH_PIN D5
#define ENCODER_CLK D3
#define ENCODER_DATA D4

// Tiempos debounce de los switches y pulsadores
#define DEBOUNCESWHOME 50
#define DEBOUNCESWUSER 50

// SALIDAS
#define PINLED D7

// STEPPER
#define PASOS_MOTOR 200         // Pasos por vuelta
#define DIR_MOTOR D0            // Pin de direccion
#define STEP_MOTOR D1           // Pin de pasos
#define ENABLE_MOTOR D2         // Pin de enable
#define VMAX_MOTOR 400          // Velocidad maxima del motor en pasos por segundo

// Y la geometria de la maquina en mm
#define PASOTRANSMISION 1           // Paso del husillo de la transmision en mm (mm por vuelta)
#define POSABIERTO 30              // Posicion maxima abierto (cambio jeringuilla)
#define POSMAX 29                  // Posicin de la jeringuilla llena
#define POSMIN 16                  // Posicion de la jeringuilla vacia

// CARGA DE LA BATERIA
#define THIBERNADO  60              // Tiempo para despertar y comprobar la bateria (minutos)

// Hola local con respecto a UTC
#define HORA_LOCAL 2

// Para el nombre del fichero de configuracion de comunicaciones
#define FICHERO_CONFIG_COM "/AbonaMaticoCom.json"

// Para el nombre del fichero de configuracion del proyecto
#define FICHERO_CONFIG_PRJ "/AbonaMaticoCfg.json"