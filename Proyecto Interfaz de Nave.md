# Proyecto : Interfaz de Nave

### Resumen

```

El LED permanecera encendido ahsta que pulses un botón. Cuando el arduino reciba una señal
del boton, la luz se apagara y las otras 2 luces empezaran a parpadear.

```

---

### Introduccio teórica

```

- Construir circuito

- Programar circuito

- Variaciones

Ordenador:

Input:

- Ratón
- Teclado
- Micro
- Webcam

Output:

- Altavoces
- Monitor

Teléfono:

- Entradas: micrófono, cámaras, pantallas táctil, giroscópio, acelerómetro.

- Salidas: pantalla, altavoces, linterna, motor vibración

ARDUINO - 18 pines

```

---

### Proceso de montaje

Programación - pág 34-35 Resistencias - página 41. 220 - azules

SwitchState = 0; SwitchState es una variable es de tipo "INT" que signifíca que es un número entero.

---

### Codigo

![](https://raw.githubusercontent.com/Baultek/Arduino/main/imagenes%20arduino/Captura%20de%20pantalla%20de%202021-10-26%2010-25-29.png)

---

### Circuito

![](https://raw.githubusercontent.com/Baultek/Arduino/main/imagenes%20arduino/Captura%20de%20pantalla%20de%202021-10-26%2010-35-39.png)

---

### Variacion

```

Vamos a añadir un botón al pin 3 de tal forma que solo cuando se pulse el led 3
se encienda. El resto del proyecto ( hardware y software ) es el mismo.

Antes LED 220

Pin 3-----LED/-----ww ---- GND

Después

PIN 3-----LED/----- WW---- GND

```

---
