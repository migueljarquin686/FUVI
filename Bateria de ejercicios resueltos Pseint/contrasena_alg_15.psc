Algoritmo contrasena_alg
//15. Teniendo en cuenta que la clave es "tuani", escribir un algoritmo que nos
//pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3
//intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3
//	intentos. Si acertamos la clave, saldremos directamente del programa.

Definir contador Como Entero
Definir contrasena Como Caracter
Escribir "ESTE ALGORITMO TE DA 3 OPORTUNIDADES PARA INGRESAR LA CONTRASEÑA CORRECTA"
Escribir "*********************************************"
contador = 1
Mientras contador <=3 Hacer
	Escribir "Ingrese la contraseña por favor"
	Leer contrasena
	
	si contrasena == "tuani" Entonces
		Escribir "La contraseña es correcta"
		contador = 4
	
SiNo
	
	 si contador == 3 Entonces
		Escribir " Lo sentimos usted a fallado sus tres intentos el sistema finalizo"
		
SiNo
		Escribir "La contraseña es incorrecta"
	FinSi
	contador = contador + 1
FinSi
	

FinMientras

Escribir "Es un placer servirle"
FinAlgoritmo
