# PWM (Pulse with modulation)


### Problema

```

Tengo un arduino que suministra 5V a un LED.

A mayor intensidad de corriente (A) el LED brilla mas.

A menor intensidad de corriente (A) el LED brilla menos.

(Ver le de Ohm)

Si subimos o bajamos el voltaje, haremos lo mismo con la intensidad suponiendo que
la resistencia del circuito es la misma.

Si conecto un LED con su resistencia de 220 Omnios a un voltaje de 5V o de 3'3V?

El LED brillara mas con 5V y menos con 3'3V

```

### Que es un pulso

```

Un pulso electrico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar cambios hasta entorno a 12 Hz a partir de 24 - 30Hz
no somos capaces visualmente.

Los pulsos modulados crean la ilusion de voltajes intermedios entre 0 y 5V para ello
usan pulsos muy cortos.

Que usaremos a traves de funcion AnalogWrite(Pin,0-255).

Esta funcion solo funciona en Pines con PWM

Los Pines con PWM estan marcados con el simbolo ~ (la tilde de la Ñ)

La funcion nos pide dos cosas por un lado

- Numero de PIN

- Un umero entre 0 y 255

```
