Este programa está creado para cifrar y descifrar mensajes usando un sistema de claves binarias. Cada letra del alfabeto tiene asignadas varias combinaciones de 0 y 1, asegurando que haya al menos tres y como máximo diez opciones por letra. Cuando se cifra un mensaje, cada letra se reemplaza por una de sus claves binarias de forma aleatoria, lo que significa que un mismo texto puede tener distintas representaciones cifradas dependiendo de las claves elegidas.

Para descifrar, el programa toma el mensaje cifrado y busca cada clave binaria en un diccionario inverso que asocia cada código con su respectiva letra. Esto permite reconstruir el mensaje original, aunque si alguna clave no se encuentra en el diccionario, se reemplaza por un ? para señalar que no se puede descifrar.

Antes de ejecutar cualquier operación, el programa verifica que no haya claves repetidas en diferentes letras. Si encuentra alguna clave duplicada, genera un error y detiene la ejecución para evitar conflictos en el descifrado.

El usuario interactúa con el programa a través de un menú en la terminal. Cuando se ejecuta el script en Python, aparece un menú con tres opciones:

Para cifrar un mensaje, se debe escribir 1 y presionar Enter, luego ingresar el texto a cifrar y presionar Enter nuevamente. El programa mostrará el mensaje cifrado en código binario.
Para descifrar, se debe escribir 2 y presionar Enter, luego ingresar el mensaje cifrado y presionar Enter otra vez. El programa mostrará el mensaje original.
Para salir, se debe escribir 3 y presionar Enter, lo que cerrará el programa.
Durante el cifrado y descifrado, los espacios y caracteres especiales como signos de puntuación se mantienen sin cambios para conservar la estructura del mensaje.