Algoritmo contrasena_alg
	
Definir contador Como Entero
Definir contrasena Como Caracter

contador = 1
Mientras contador <=3 Hacer
	Escribir "Ingrese la contrasena por favor"
	Leer contrasena
	
	si contrasena == "tuani" Entonces
		Escribir "La contrasena es correcta"
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
