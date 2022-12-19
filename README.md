# El Bicho - 2022
"El Bicho" es un robot de combate diseñado para participar de batallas al estilo "battlebot", una competencia de pequeños robots que luchan entre si.

![Robot Ejemplo](/multimedia/El_bicho_terminado.jpeg)



## Integrantes
- Francisco Álvarez - <FCFM>
- Alejandro Mori - <FCFM>
- Agustin Montero - <FCFM>
- Alfredo Waught - <FCFM>


## Descripción del proyecto

### Estrategia utilizada
#### Ofensiva
El robot tiene un rodillo con muescas y cortes que gira hacia arriba, de manera que al entrar en contacto con el oponente, este sufra un golpe que lo levante del suelo. La idea del arma es voltear al oponente si es posible.

#### Defensiva
La coraza que tiene el robot debe ser altamente resistente, ya que al momento de defenderse, "El bicho" querrá mover al oponente usando la fuerza de sus ruedas. Las 6 ruedas que lleva el robot tienen la finalidad de generar más roce con el piso, de manera que la máquina pueda mover con mayor facilidad al contrincante hacia donde quiere, como las trampas de la arena por ejemplo. 

### Diagrama funcional
![Diagrama Ejemplo](/multimedia/Diagrama.png)

En el diagrama podemos asociarlo a ver el bot desde arriba de izquierda a derecha, los motores que se ven arriba son una línea y los de abajo son otra línea de ruedas, por eso, en el código hace que arriba y abajo se muevan al unísonos. En el código vemos que combinación hace que avance, retroceda y gire en un sentido u otro. Por último tenemos el la “punta” el motor que funciona con un relé, para poder utilizar mayor voltaje sin poner en riesgo el arduino.

## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.
