Algoritmo Clasificacion_curso_alg
	
definir Resp1,resp2 como REAL
Definir Nombre como cadena

Escribir " Ingrese su Nombre"
Leer Nombre
Escribir " ¿ USTED A CURSADO SU BACHILLERATO ?  "
Escribir " INGRESE 1 SI ES VERDADERO  Y SI ES FALSO INGRESE OTRO NUMERO"
	Leer Resp1
	
	si resp1 = 1 Entonces
		Escribir " Felicidades " Nombre " " "usted entro al curso de TECNICO SUPERIOR"
		
	SiNo
		Escribir "Lo lamento " Nombre " " "usted no puede entrar al curso"
		
	FinSi
	Escribir "Presione una tecla para continuar"
	Esperar Tecla
	Borrar Pantalla
	
	Escribir "¿ USTED APROBO LA PRUEBA DE ADMISIÓN ?  "
	Escribir " INGRESE 1 SI ES VERDADERO Y SI ES FALSO INGRESE OTRO NUMERO"
	Leer resp2
	
	si resp2 = 1 Entonces
		Escribir " Felicidades " Nombre " " "usted entro al curso de TECNICO SUPERIOR"
		
	SiNo
		Escribir "Lo lamento " Nombre " " "usted no puede ingresar al curso de tecnico superior"
		
	FinSi

Escribir "Es un placer servirle"
FinAlgoritmo
