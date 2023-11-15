/*
Angel Aguilar, Axel Rosa
2023 nov 10

Realicen un programa de tematica libre sobre POO que tenga los siguientes requerimientos:
- Una clase padre con por lo menos 4 atributos, su constructor parametrizado, destructor, getters y setters y un par de metodos propios
- Dos clases hijas que hereden de la clase padre y que cumplan con los mismos requerimientos.
- Cada clase (la clase padre y las hijas) deben estar en un archivo de cabecera separado (.h), utilicen las diretivas para que no haya problemas.
- Realicen la llamada a un objeto de cada clase en un archivo main.cpp
- En el main definan tambien un macro (con el proposito que gusten)
- Definan tambien constantes con las cuales interactuen los objetos (por ejemplo, alguna operacion matematica basica).

codigo basado en los programas main.cpp, empleado.h, ingenierobioelectronico.h e ingenieromecatronico.h del maestro Eduardo Emmanuel Rodríguez López en Moodle
*/

#include <bits/stdc++.h>
using namespace std;

//macros
// Deficion de macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define DATE 

// Los macros tambien pueden tener parametros
#define REP(i, a, b) for(size_t i=a; i<b; i++)
#define AREA(l, b) (l * b)

//constantes
// Definicion de constantes
#define PI 3.1416
#define PHI 1.618

//clases padre e hijas
#include "Shape.h"
#include "RoundShape.h"
#include "SquareShape.h"

int main(){
	//creando objeto de clase padre
	int l1 = 10, l2 = 5, area;
 
    // usando macro
    area = AREA(l1, l2);
	
    Shape shape1 = Shape("circle0", 3, PI*pow(3,2), PI*2*3); // Contenida en cmath
    shape1.prop();
    
    RoundShape round1 = RoundShape("oval0", 1, 3, 9, "brown", false, true, true);
    round1.prop();
    round1.ax();
    
    SquareShape square1 = SquareShape("square0", 4, 3, 8, "light", true, false, true);
    square1.id();
    square1.anim();
}
