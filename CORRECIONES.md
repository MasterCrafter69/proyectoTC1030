# Retroalimentación 1:

Creo que es un buen avance pero ten en cuenta las siguientes observaciones:
-Hace falta que explicas más tu proyecto y tu diagrama UML.
-No has incluido herencia, eso se te va a pedir más adelante, revísalo.
-Te hace falta agregar cardinalidad.
-No identificas casos en los que tu proyecto dejará de funcionar.
-Tienes algunos errores de dedo, revísalos.

# Corrección 1:
El proyecto ahora está mejor explicado en la documentación proporcionada, incluyendo una descripción detallada de las funcionalidades y potenciales problemas.
Se ha implementado la herencia en el código, las clases tauliner, cisterna y caja_fria heredan de la clase abstracta cargamento.
La cardinalidad se ve a través de la relación entre almacen y trailer, donde un almacen puede tener muchos trailers.

# Retroalimentación 2:
Tus clases deberían de estar en archivos .h, revisa eso. Por otro lado no has incluido herencia y tampoco sobrecarga y/o sobreescritura de métodos

# Corrección 2:
Ahora, todas las clases están en archivos .h separados.
Se ha incluido la herencia en el diseño de las clases, como se mencionó anteriormente.
Se implementó la sobreescritura de métodos con el método informacion() en las clases que heredan de cargamento.

# Retroalimentación 3:
Parece ser que estás implementando polimorfismo con funciones virtuales, pero no se puede comprobar que esto funcione correctamente porque no hay una funcion int main() en la que instancies objetos y mandes a llamar métodos. 
Solo como recomendación separa tus clases en archivos .h y tu función main en un archivo main.cpp, esto facilita la lectura y entendimiento de tu código.

# Correción 3:
Ahora el proyecto incluye una función main() en un archivo separado main.cpp
Con la implementación actual del main(), ahora se puede comprobar el correcto funcionamiento de las funciones virtuales y el polimorfismo.

# Retroalimentación 4:
Parece ser que empleas correctamente las clases abstractas sin embargo no lo puedo comprobar porque no hay una función int main() donde podamos probar todo.

# Correción 4:
Se puede probar el uso correcto de las clases abstractas mediante la creación de diferentes tipos de cargamentos en el main().
