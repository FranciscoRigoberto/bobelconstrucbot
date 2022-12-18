#include <SoftwareSerial.h>
SoftwareSerial SerialBT(3, 2); //estos son RX, TX para definir el control remoto 
char state;
int motor1=8; //aqui definimos los pines que controlan los puentes h 
int motor2=10;
int motor3=11;
int motor4=12;
int motor5=9;
int motor6=6;
int motor7=5;
int motor8=4;
int arma=14;
void setup() {

  SerialBT.begin(9600); //definimos el serial que recibe información del modulo bluethoot
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);//definimos los tipos de pines
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);  
  pinMode(motor5,OUTPUT);
  pinMode(motor6,OUTPUT);
  pinMode(motor7,OUTPUT);
  pinMode(motor8,OUTPUT); 
  pinMode(arma,OUTPUT);
  digitalWrite(motor1,1);//les damos una configuración inicial
  digitalWrite(motor2,1);
  digitalWrite(motor3,1);
  digitalWrite(motor4,1);
  digitalWrite(motor5,1);
  digitalWrite(motor6,1);
  digitalWrite(motor7,1);
  digitalWrite(motor8,1);
  digitalWrite(arma,HIGH);//por el relé cuando el pin está high el arma esta apagada esto depende de sus conexiones
  delay(2000);
  
}

void loop() {
  if (SerialBT.available()>0){
    state = SerialBT.read();//definmos que solo si hay información disponible se aplica este loop
    if (state == 'S'){//para retroceder llega la letra S
      delay(70);//es necesario un retrazo o delay entre cada cambio de sentido de cada rueda ya que al tener 6 ruedas que cambien de sentido al mismo tiempo generaba problemas
      digitalWrite(motor1,0);
      digitalWrite(motor2,1);
      delay(70);
      digitalWrite(motor3,1);
      digitalWrite(motor4,0);
      delay(70);
      digitalWrite(motor5,1);
      digitalWrite(motor6,0);
      delay(70);
      digitalWrite(motor7,0);
      digitalWrite(motor8,1);
      
      
    }
    else if (state == 'B'){//este es el boton que detiene el robot
      delay(70);
      digitalWrite(motor1,1);
      digitalWrite(motor2,1);
      delay(70);
      digitalWrite(motor3,1);
      digitalWrite(motor4,1);
      delay(70);
      digitalWrite(motor5,1);
      digitalWrite(motor6,1);
      delay(70);
      digitalWrite(motor7,1);
      digitalWrite(motor8,1); 
    }
    else if(state =='W'){//aqui es la configuración para avanzar
      delay(70);
      digitalWrite(motor1,1);
      digitalWrite(motor2,0);
      delay(70);
      digitalWrite(motor3,0);
      digitalWrite(motor4,1);
      delay(70);
      digitalWrite(motor5,0);
      digitalWrite(motor6,1);
      delay(70);
      digitalWrite(motor7,1);
      digitalWrite(motor8,0);
    }
    else if(state=='A '){//para girar a la izquierda
      delay(70);
      digitalWrite(motor1,1);
      digitalWrite(motor2,0);
      delay(70);
      digitalWrite(motor3,1);
      digitalWrite(motor4,0);
      delay(70);
      digitalWrite(motor5,1);
      digitalWrite(motor6,0);
      delay(70);
      digitalWrite(motor7,1);
      digitalWrite(motor8,0);
    }
    else if(state=='D'){//girar a la derecha
      delay(70);
      digitalWrite(motor1,0);
      digitalWrite(motor2,1);
      delay(70);
      digitalWrite(motor3,0);
      digitalWrite(motor4,1);
      delay(70);
      digitalWrite(motor5,0);
      digitalWrite(motor6,1);
      delay(70);
      digitalWrite(motor7,0);
      digitalWrite(motor8,1);
    }
    else if(state=='J'){//esto activa el arma
      digitalWrite(arma,LOW);
    }
    else if(state=='K'){
      digitalWrite(arma,HIGH);//desactiva el arma
    }
  } 
}
