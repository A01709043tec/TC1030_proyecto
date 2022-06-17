# TC1030_proyecto

Yuna Chung _ A01709043

  A través de este proyecto, tuve el propósito de lograr a crear una sistema de biblioteca donde el usuario puede entrar al sistema y realizar distintas acciones de acuerdo a su rol (Lector o Staff).

# Funcionalidad

Un lector podrá:
- Ver la lista de libros

Un staff podrá:
- Ver la lista de libros
- Ver la lista de Usuarios
- Agregar un libro

# Competencias

Las competencias que me hacían faltas fueron:
SICT0301A
- Genero un diagrama de clases UML correcto y explico su relación con el problema de forma clara

SICT0302A
- Se emplea de manera correcta el concepto de Herencia
    - Se muestra en la línea 45 del archivo usuario.h, ya que se está aplicando la herencia desde la clase de usuario a la clase de lector.
    - De igual manera se puede observar en la línea 79 donde hay una herencia desde la clae usuario pero ahora a la clase de staff.
- Se emplea de manera correcta los modificadores de acceso
    - Se puede observar en todos los archivos (usuario.h, sistemalib.h, libro.h, main.cpp) ya que tengo variables definidos como objetos privados o protegidos y las funciones que son públicos.
- Se emplea de manera correcta la sorecarga y sobreescritura de métodos
    - En la línea 41 del usuario.h, se define un método abstracto que se va a sobreescribir, y por ende, en la línea 59 y 86, se sobreescribe el método ya que utilizo el mismo nombre nada más cambiando los contenidos. 
    - Podemos ver la sobrecarga de métodos desde la línea 51 hasta la línea 54 de main.cpp, ya que estoy utilizando un método definido en la línea 136 de sistemalib.h nada más cambiando su parámetro. Uno es para el staff, y el otro para el lector. 


# Consideraciones

El pin para ingresar al sistema como Staff es: 2673

El programa está hecho con C++ standard por lo que corre en todos los sistemas operativos. 
También, tiene que dar un enter extra después de ingresar los datos (título, autor, género) cuando el staff quiere agregar un nuevo libro.
