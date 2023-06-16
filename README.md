# proyectoTC1030
Este programa es un sistema de gestión de almacenes y trailers para una empresa de transporte. Se utiliza para administrar diferentes tipos de cargamentos transportados en los trailers. Los tipos de cargamentos que puede gestionar son Tauliner, Cisterna y Caja Fría, cada uno con sus características específicas.

El programa permite al usuario interactuar con un menú que ofrece diferentes operaciones, como visualizar la información del almacén, agregar un nuevo trailer al almacén y eliminar un trailer existente.

# Escenarios de fallos

Para empezar es importante que en señalar que el programa es sencible a espacios por lo que es importante remplazarlo con guiones bajos ( - ). Ejemplo: Mi almacen -> Mi_almacen

Un escenario que podría hacer que el programa deje de funcionar correctamente es intentar eliminar un trailer que no existe en el almacén.

Si se intenta eliminar un trailer mediante su placa y dicha placa no corresponde a ningún trailer existente en el almacén, el programa intentará eliminar un objeto que no existe, lo que podría llevar a un comportamiento inesperado.

El programa actualmente no maneja excepciones o errores de entrada del usuario. Por lo tanto, la entrada incorrecta del usuario (como un tipo de cargamento no reconocido) podría hacer que el programa se comporte de manera impredecible o se bloquee.
