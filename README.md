# Newton-Raphson-G-H

Gael Alexandro Silva Huacuja 22310258

Hevan Jesus Viscencio Lopez 22310198

Descripcion:
En este trabajo colaborativo realizaremos un programa en c++ para poder resolver ecuaciones mediante el uso del metodo Newton raphson el cual se basa en una serie de formulas utilizando la primer derivada de la ecuacion.

![](assets/images/FormulaNR.jpg)

Funcionalidad:
La funcionalidad de este proyecto es que podran resolver ecuaciones y veran paso a paso necesario para resolverlo mediante Newton Raphson.

Documentacion:

Diagrama PUML:


Funcion de cada clase:

Funcion.hpp: esta clase se encarga de regresar la funcion principal sobre la cual queremos conocer el resultado.(No se puede cambiar desde el Menu)

FDerivada.hpp: Esta clase se encargara de regresar la derivada de la funcion principal la cual igual que la funcion ya vienen en el codigo y no se cambian desde el menu.

Tabula.hpp: Esta clase utiliza las clases FDerivada y Funcion para poder tabular con el intervalo escogido por el usuario a demas de tabular en el numero de iteraciones necesarias para hacer que el error se aprx 0.

NewtonRaphson.hpp: Esta clase es la formula del metodo en si misma la cual utiliza la clase Tabular para poder realizar correctamente el metodo con las iteraciones necesarias para el resultado.

Menu.hpp: Esta clase unicamente da las indicaciones iniciales del programa y te muestra la Funcion con la que estamos trabajando y su Derivada.

Newtonraphson.cpp: este el archivo en el cual juntamos todas las clases de manera que el usuario al iniciarlo conozca la funcion principal y su derivada gracias a Menu y elija el intervalo para encontrar el cambio de signo y ponerlo en el programa el cual se lo va a solicitar asi mismo pedira el numero de decimales y la tolerancia la cual sera 0 la mayoria del tiempo para despues mostrarte el numero de iteraciones que hizo para llegar al resultado y asi mismo el resultado de la funcion todo esto esperando sea el programa lo mas intuitivo posible.

Guia para Usar el Programa:
1- Se mostrara la funcion y su derivada y se te pedira el rango de tabulacion de la funcion.
2- Una vez mostrado la tabulacion observas e identificas el cambio de signo en la tabulacion debes poner el resultado de esos dos numeros y dividirlos entre 2 para sacar el promedio y tener x0.
3- Deberas ingresar el numero de fix que son los decimales a utilizar.
4- Deberas poner 0 en la tolerancia para tener el resultado mas cercano.
5- observa el numero de tabulaciones y el resultado que te da el programa para finalizar el ejercicio teniendo el resultado y el proceso para resolverlo mediante el metodo Newton-Raphson.

Conclusiones: 
En este Proyecto logramos aprender bastante y logramos un proyecto funcional para resolver ecuaciones con un metodo en especifico logrando cumplir los objetivos de las dos materias para las cuales se realizo este programa dando un resultado satisfactorio asi como el aprendizaje recabado nos servira mucho a futuro.

