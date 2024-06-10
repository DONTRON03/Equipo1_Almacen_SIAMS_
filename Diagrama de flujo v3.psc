Funcion z <- Opcio ( y1 )
	z = y1
	
Fin Funcion

Funcion x <- agr ( cantidad , y1 )
	x <- Cantidad + y1
Fin Funcion

Funcion x <- eli ( cantidad , y1 )
	x <- Cantidad - y1
Fin Funcion

Algoritmo AgregarProductos
	Definir opc, opc2, a, z Como Entero
	p <- 0
	s <- 0
	g <- 0
	j <- 0
	c <- 0
	Repetir
		Escribir 'Presionen 1 para agregar productos al inventario: '
		Escribir 'Presionen 2 para revisar los precios de los productos'
		Escribir 'Presionen 3 para actualizarte sobre los productos que hay'
		Escribir 'Presionen 4 para eliminar productos del inventario'
		Escribir 'Presionen 0 para salir'
		Leer opc
		Según opc Hacer
			1:
				Repetir
					Escribir 'Presionen 1 para agregar papas'
					Escribir 'Presionen 2 para agregar sodas'
					Escribir 'Presionen 3 para agregar media docena de galletas'
					Escribir 'Presionen 4 para agregar jugos'
					Escribir 'Presionen 5 para agregar cerveza'
					Escribir 'Presionen 0 para volver al menú principal'
					Leer opc2
					Según opc2 Hacer
						1:
							Repetir
								Escribir 'Cuántas papas deseas agregar: '
								Leer z
								p = agr (p, z)
								Escribir 'Desea agregar más papas? (1: Sí, 0: No)'
								Leer a
							Hasta Que a=0
						2:
							Repetir
								Escribir 'Cuántas sodas deseas agregar: '
								Leer z
								s = agr (s, z)
								Escribir 'Desea agregar más sodas? (1: Sí, 0: No)'
								Leer a
							Hasta Que a=0
						3:
							Repetir
								Escribir 'Cuántas galletas deseas agregar: '
								Leer z
								g = agr (s, z)
								Escribir 'Desea agregar más galletas? (1: Sí, 0: No)'
								Leer a
							Hasta Que a=0
						4:
							Repetir
								Escribir 'Cuántos jugos deseas agregar: '
								Leer z
								j = agr (j, z)
								Escribir 'Desea agregar más jugos? (1: Sí, 0: No)'
								Leer a
							Hasta Que a=0
						5:
							Repetir
								Escribir 'Cuántas cervezas deseas agregar: '
								Leer z
								c = agr (c, z)
								Escribir 'Desea agregar más cervezas? (1: Sí, 0: No)'
								Leer a
							Hasta Que a=0
					FinSegún
				Hasta Que opc2=0
			2:
				Escribir '** Los productos están registrados por docena **'
				Escribir 'papas: $230.00'
				Escribir 'sodas: $240.00'
				Escribir '1/2 docena de galletas: $100.00'
				Escribir 'jugos: $300.00'
				Escribir 'cerveza: $500.00'
			3:
				Escribir 'Hay ', p, ' papas'
				Escribir 'Hay ', s, ' sodas'
				Escribir 'Hay ', g, ' galletas'
				Escribir 'Hay ', j, ' jugos'
				Escribir 'Hay ', c, ' cervezas'
			4:
				Escribir 'Qué producto quitaron:'
				Escribir 'Presionen 1 para quitar papas'
				Escribir 'Presionen 2 para quitar sodas'
				Escribir 'Presionen 3 para quitar galletas'
				Escribir 'Presionen 4 para quitar jugos'
				Escribir 'Presionen 5 para quitar cervezas'
				Leer z
				Según z Hacer
					1:
						Escribir 'Cuántas papas quitaron: '
						Leer z
						p = eli (p, z)
						Si p<0 Entonces
							p <- 0
						FinSi
						Escribir 'Ok, menos eso aún nos quedan: ', p
					2:
						Escribir 'Cuántas sodas quitaron: '
						Leer z
						s = eli (s, z)
						Si s<0 Entonces
							s <- 0
						FinSi
						Escribir 'Ok, menos eso aún nos quedan: ', s
					3:
						Escribir 'Cuántas galletas quitaron: '
						Leer z
						g = eli (g, z)
						Si g<0 Entonces
							g <- 0
						FinSi
						Escribir 'Ok, menos eso aún nos quedan: ', g
					4:
						Escribir 'Cuántos jugos quitaron: '
						Leer z
						j = eli (j, z)
						Si j<0 Entonces
							j <- 0
						FinSi
						Escribir 'Ok, menos eso aún nos quedan: ', j
					5:
						Escribir 'Cuántas cervezas quitaron: '
						Leer z
						c = eli (c, z)
						Si c<0 Entonces
							c <- 0
						FinSi
						Escribir 'Ok, menos eso aún nos quedan: ', c
				FinSegún
			0:
				Escribir "De acuerdo, hasta luego"
		FinSegún
	Hasta Que opc=0
FinAlgoritmo
