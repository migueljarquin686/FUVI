Algoritmo credito_alg
//39.Suponga que usted es un ejecutivo de una microfinanciera, encargado de
//entregar cr�ditos a las personas. De acuerdo a las reglas del banco para
//el que usted trabaja, el monto del cr�dito al que una persona puede
//acceder depende de su sueldo.
	Escribir "ESTE ALGORITMO TE MUESTRA SI TIENES CREDITO EN ESTA MICROFINANCIERA."
	Escribir "*********************************************"
	Escribir "Ingrese el nombre del solicitante de credito"
	Leer nombre
	Escribir "Ingrese su sueldo por favor"
	Leer sueldo
	
	si sueldo < 200000 Entonces
	Escribir nombre " Usted no tiene cr�dito, lo sentimos "
FinSi

si sueldo >= 200000 y sueldo < 500000 Entonces
	Escribir nombre " Usted tiene derecho a un credito de 500,000 C$"
FinSi

si sueldo >= 500000 y sueldO <= 1000000 Entonces
	Escribir nombre " Usted tiene derecho a un cr�dito de 2,000,000 C$"
FinSi

Escribir "Es un placer servirle"
FinAlgoritmo
