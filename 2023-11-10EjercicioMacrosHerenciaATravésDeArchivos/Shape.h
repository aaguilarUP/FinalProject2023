//#ifndef Empleado_h // Si no esta definida la clase persona, definela.
#ifndef Shape_h
//#define Empleado_h
#define Shape_h
// #pragma once // En este caso, pragma once es equivalente a las directivas de arriba (y al cierre del #endif) par evitar redefiniciones.
             // pragma es una directiva que se utiliza comunmente para interactuar con el comportamiento del compilador.


//Una clase padre con por lo menos 4 atributos, su constructor parametrizado, destructor, getters y setters y un par de metodos propios
using namespace std;

class Shape{ 
protected:
    string name; 
    int sides;
    float area;
    float per;

public:
    // Metodos
    void prop(){ //properties
        cout << "Name: " << name << endl;
        cout << "Number of sides: " << sides << endl;
        cout << "Area: " << area << endl;
        cout<< "Perimeter: "<<per<<endl;
    }
    
    void id(){
        cout << "Number of sides: "<<sides<<endl;
        if(sides==2||sides<=0){
        	cout<<"This shape is NOT a valid shape"<<endl;
		}
    }
    
    //constructor
    Shape(string name, int sides, float area, float per){
        this->name=name;
        this->sides=sides;
        this->area=area;
        this->per;
    }

	//destructor
    ~Shape(){
        cout << "(Destroying shape)" << endl;
    }

    // Getters y Setters
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setSides(int sides){
        this->sides = sides;
    }
    int getSides(){
        return sides;
    }

    void setArea(){
        this->area=area;
    }
    float getArea(){
        return area;
    }
    
    void setPer(){
    	this->per=per;
	}
	float getPer(){
		return per;
	}

};

#endif
