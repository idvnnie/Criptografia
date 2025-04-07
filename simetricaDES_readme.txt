Este programa en C sirve para cifrar mensajes usando sustitución homofónica. Es decir, cada letra puede ser representada por varios números posibles, lo que hace que el mensaje cifrado sea menos predecible y más difícil de romper con análisis de frecuencia.

¿Cómo funciona?
Primero, se define un mapa de sustitución, donde a cada letra (de la A a la Z) se le asignan de 1 a 4 números que puede usar como reemplazo.
Cuando escribes tu mensaje en mayúsculas, el programa elige al azar uno de esos números para cada letra.

Así, aunque repitas una letra en el mensaje, no siempre se verá igual en el resultado cifrado.
Por ejemplo, si escribes "AA", podrías obtener algo como "10 12" en lugar de "10 10".

También mantiene los espacios usando el símbolo /, para que sea más legible.

Para correrlo solo necesitas compilar y correr el archivo en un entorno que soporte C, como: gcc homofonico.c -o homofonico
./homofonico
Después, escribes tu mensaje en mayúsculas, sin acentos. El programa te lanza la versión cifrada en números.