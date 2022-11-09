Algoritmo num_cero_alg
	//16. Algoritmo que lea números enteros hasta teclear 0, y nos muestre el
	//máximo, el mínimo y la media de todos ellos.
	Definir suma,P,Media,Max,Min,num Como Real
	Escribir "ESTE ALGORITMO TE MUESTRA EL NUMERO MAYOR EL MENOR Y LA MEDIA HASTA TECLEAR CERO, QUE LO DISFRUTES"
	band<-Verdadero
	suma = 0
	P = 0
	Repetir
		Escribir "Ingrese un numero:" 
		Leer num
		si(num=0) Entonces
			Escribir ""
			
		SiNo
			suma=suma + num  
			
			P = P+1
			Media = suma/p
			Si band=Verdadero
				Max<-num
				Min<-num
				band=False
				
			SiNo
				Si num > Max Entonces
					Max <-num
					
				SiNo
					Si num < Min Entonces
						Min<-num
					FinSi
				FinSi
			FinSi
		FinSi
	Hasta Que num=0
	
	Escribir "El numero mayor es: " Max
	Escribir "El numero minimo es: " Min
	Escribir "La media es: " Media
FinAlgoritmo
