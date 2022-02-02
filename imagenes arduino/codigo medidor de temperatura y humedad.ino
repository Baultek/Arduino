#include "DHT.h" 

const int sensor_pin_ky015 = 10;            //pin por donde entra la señal del KY-015
#define DHT1 DHT11                          //define el tipo de DHT a DHT11 para el KY-015

//declaro variables del programa
float humedad_ky015;                        //aqui almacenamos la humedad leida del ky-015
float temperatura_ky015;                    //aqui almacenamos la temperatura leida del ky-015

DHT dht11(sensor_pin_ky015, DHT11);         //inicializamos el sensor KY-015 y le llamamos dht11

void setup() {

 //Configuramos el pueto serie del Arduino Uno
  Serial.begin(9600);                       //Iniciamos la trasmision a 9600 baudios

 dht11.begin ();                           //le indicamos al sensor dht11 que comience a medir

}

void loop() {

 delay(2000);                              //esperamos 2 segundos antes de empezar

  //Leemos el sensor y almacenamos los valores
  humedad_ky015 = dht11.readHumidity();             //leemos la humedad y almacenamos
  temperatura_ky015 = dht11.readTemperature();      //leemos la temperatura y almacenamos


  //Comprobamos si la lectura a fallado. La instruccion isnan, comprueba si la variable
  //que le pasamos tiene un valor representativo.  
  //Primero al dht11 incluido en la placa ky-015
  if (isnan(humedad_ky015) || isnan(temperatura_ky015)) {
    //Si la lectura es incorrecta
    Serial.print ("Error de lectura en KY-015");    //mostramos el mensaje de error en el serial
  }
      else {
    //Si la lectura es correcta

    Serial.print("\tDHT22: ");              //mandamos texto al visor serie
    Serial.print("Humedad = ");             //mandamos texto al visor serie
    Serial.print(" %\t");                   //mandamos el simbolo % y un tabulador
    Serial.print("Temperatura = ");         //mandamos texto al visor serie
    Serial.println("ºC");                   //mandamos texto al visor serie pasamos linea

    }
  
  }
