Algoritmo num_cero_alg
	
	Definir suma,P,Media,Max,Min,num Como Real
	
	band<-Verdadero
	suma = 0
	P = 0
	Repetir
		Escribir "Ingrese un numero:" 
		Leer num
		suma=suma + num  
			
		P = P+1
		Media = suma/P
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
	Hasta Que num=0
	
	Escribir "El numero mayor es: " Max
	Escribir "El numero minimo es: " Min
	Escribir "La media es: " Media

	Escribir "Es un placer servirle"
FinAlgoritmo
