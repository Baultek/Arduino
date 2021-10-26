# PROYECTO MEDIDOR DE AMOR

### Teoria

```

Este es un programa que mide temperatura y enciende LEDs.

setup:

Serial.begin (9600);

Incia la comunicacion por via USB

for: sirve para repetir cosas

loop:

Primero declara una variable.

int sensorVal = analogRead (sensorpin)

Lee el voltage que teiene el pin.

SensorPin ( en este caso A0= y lo magca a valoes entre 0 y 1023. 0 significa 0V o GND y 1023 significa SV.

Serial.print (" sensor valve: ",);

Serial,print (sensor val);

( sensor valve: ,); a esto se le llama STRING o cadena de caracteres.

float voltage = (sensorVal/124.0) * 5.0;

Temperatura: float temperature = (voltage - 0.5) * 100;

Loop: Leer sensores Tratar los datos del sensor Pasamos de 0-023 a una temperatura Decidir que leds se encienden

if (temperature <baselineTemp){

```

---

### Codigo

![](https://raw.githubusercontent.com/Baultek/Arduino/main/imagenes%20arduino/Captura%20de%20pantalla%20de%202021-10-26%2014-04-21.png)

![](https://raw.githubusercontent.com/Baultek/Arduino/main/imagenes%20arduino/Captura%20de%20pantalla%20de%202021-10-26%2014-04-53.png)

---

### Circuito

![](https://raw.githubusercontent.com/Baultek/Arduino/main/imagenes%20arduino/Captura%20de%20pantalla%20de%202021-10-26%2013-59-29.png)

---
