Algoritmo Suma_alg
	//13. Se pide representar el algoritmo que nos calcule la suma de los N primeros
	//números pares. Es decir, si insertamos un 5, nos haga la suma de
	//6+8+10+12+14.
	Definir X,P Como real
	Escribir "ESTE ALGORITMO NOS PERMITE INSERTAR UN NUMERO Y NOS CALCULA LA SUMA DE LOS 5 PRIMEROS NUMEROS"
	Escribir "Ingrese un numero"
	Leer X
	P=X
	
	Si X MOD 2 ==1 Entonces
		
		num1= (X+1)
		num2= (X+1+2)
		num3= (X+1+4)
		num4= (X+1+6)
		num5= (X+1+8)
		
		Escribir num1
		Escribir num2
		Escribir num3
		Escribir num4
		Escribir num5
		
		suma2= num1+num2+num3+num4+num5
		Escribir"La suma total de los primeros cinco numeros pares es:" suma2 " "
	FinSi
	
	
	Para X=X+2 Hasta X+10 Con Paso 2 Hacer
		Si X mod 2 ==0 Entonces
			Escribir X
	
		FinSi
	FinPara
	
	SI X Mod 2 ==0 Entonces
		
		suma1 = (P+2)+(P+4)+(P+6)+(P+8)+(P+10)
		Escribir "La suma de los cinco  primeros numeros pares es: " suma1
	FinSi
	
FinAlgoritmo
