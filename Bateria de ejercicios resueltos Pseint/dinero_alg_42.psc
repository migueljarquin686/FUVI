Algoritmo Dinero_alg
//42.Diseñar el algoritmo que, al introducir una cantidad de dinero expresado
//en Córdobas, nos indique cuántos billetes y monedas se puede tener
//según Billetes y monedas en circulación
//(https://www.bcn.gob.ni/billetes_monedas/circulacion/circulacion.php )
//del Banco Central de Nicaragua
	Definir cant Como Entero
	Escribir "ESTE ALGORITMO TE MUESTRA UNA CANTIDAD INGRESADA EN LOS POSIBLES CAMBIOS DE BILLETES Y MONEDAS DEL PAIS"
	Escribir "**********************************************"
	Repetir
	Escribir "Ingrese una cantidad"
	Leer cant
Hasta Que cant>0

cB1000<-(cant/1000)
cB500<-(cant/500)
cB200<-(cant/200)
cB100<-(cant/100)
cB50<-(cant/50)
cB20<-(cant/20)
cB10<-(cant/10)
cB5<-(cant/5)
cM1<-(cant/1)

SI cant mod 1000=0 Entonces
	Escribir "Tiene una cantidad de ",cB1000," Billetes de 1000"
FinSi

SI cant mod 500=0 Entonces
	Escribir "Tiene una cantidad de ",cB500," Billetes de 500"
FinSi

SI cant mod 200=0 Entonces
	Escribir "Tiene una cantidad de ",cB200," Billetes de 200"
FinSi

SI cant mod 100=0 Entonces
	Escribir "Tiene una cantidad de ",cB100," Billetes de 100"
FinSi

SI cant mod 50=0 Entonces
	Escribir "Tiene una cantidad de ",cB50," Billetes de 50"
FinSi

SI cant mod 20=0 Entonces
	Escribir "Tiene una cantidad de ",cB20," Billetes de 20"
FinSi

SI cant mod 10=0 Entonces
	Escribir "Tiene una cantidad de ",cB10," Billetes de 10"
FinSi

SI cant mod 5=0 Entonces
	Escribir "Tiene una cantidad de ",cB5," Billetes de 5"
FinSi

SI cant mod 1=0 Entonces
	Escribir "Tiene una cantidad de ",cM1," Monedas de 1 córdoba"
FinSi
Escribir "Es un placer servile"
FinAlgoritmo
