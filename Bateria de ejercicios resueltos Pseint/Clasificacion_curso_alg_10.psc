Algoritmo Clasificacion_curso_alg
//10. Algoritmo que nos diga si una persona puede acceder a cursar un ciclo
//formativo de grado superior o no. Para acceder a un grado superior, si se
//tiene un t�tulo de bachiller, en caso de no tenerlo, se puede acceder si
//hemos superado una prueba de acceso (admisi�n).

definir Resp1,resp2 como REAL
Definir Nombre como cadena
Escribir "ESTE ALGORITMO TE MUESTRA SI UNA PERSONA PUEDE ACCEDER A UN CURSO"
Escribir "*********************************************"
Escribir " Ingrese su Nombre"
Leer Nombre
Escribir " � USTED A CURSADO SU BACHILLERATO ?  "
Escribir " INGRESE 1 SI ES VERDADERO  Y SI ES FALSO INGRESE OTRO NUMERO"
	Leer Resp1
	
	si resp1 = 1 Entonces
		Escribir " Felicidades " Nombre " " "usted entro al curso de TECNICO SUPERIOR"
		
	SiNo
		Escribir "Lo lamento " Nombre " " "usted no puede entrar al curso temporalmente"
		
	FinSi
	Escribir "Presione una tecla para continuar"
	Esperar Tecla
	Borrar Pantalla
	
	Escribir "� USTED APROBO LA PRUEBA DE ADMISI�N ?  "
	Escribir " INGRESE 1 SI ES VERDADERO Y SI ES FALSO INGRESE OTRO NUMERO"
	Leer resp2
	
	si resp2 = 1 Entonces
		Escribir " Felicidades " Nombre " " "usted entro al curso de TECNICO SUPERIOR"
		
	SiNo
		Escribir "Lo lamento " Nombre " " "usted no puede ingresar al curso de tecnico superior"
		
	FinSi

Escribir "Es un placer servirle"
FinAlgoritmo
