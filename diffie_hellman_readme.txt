Este script sirve para simular cómo dos personas pueden generar una clave secreta compartida sin tener que mandársela directamente. Usa el método de Diffie-Hellman, pero explicado paso a paso y de forma amigable.

¿Cómo funciona?
Primero, pide un número primo. Si pones algo que no lo es, te avisa y te da ejemplos para que elijas uno bueno.
Luego, el código busca por su cuenta una raíz primitiva de ese número (porque se necesita para los cálculos).

Después viene la parte divertida: eliges tu clave privada, que es un número que solo tú conoces.
Con esa clave privada, el script calcula tu clave pública. Esa sí la puedes compartir con quien quieras.
Ya que tienes la clave pública de tu compa (la otra persona), la metes en el programa y se hace la magia: ambos terminan con la misma clave de sesión secreta, sin haberla mandado directamente.

¿Para qué nos sirve manejar esto?
Esto es justo lo que pasa en muchos sistemas de comunicación segura. Nadie ve tu clave real, pero aún así puedes tener una sesión privada con otra persona.
Este script es más para entender cómo funciona la idea, sin tanto rollo técnico ni librerías externas.

¿Cómo se usa?
Solo corre el script en consola con la siguiente sentencia: python diffie_hellman.py
