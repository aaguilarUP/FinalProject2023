//clase hija 1
#include "Shape.h"
/*
- Una clase padre con por lo menos 4 atributos, su constructor parametrizado, destructor, getters y setters y un par de metodos propios
- Dos clases hijas que hereden de la clase padre y que cumplan con los mismos requerimientos.
*/
class RoundShape: public Shape{
	public:
		//atributos
		string color;
		bool roll;
		bool rotate;
		bool ellipse; //is it an oval or a circle 
		
		//constructor que hereda directamente de clase padre
		RoundShape(string name, int sides, int area, int per, string color, bool roll, bool rotate, bool ellipse):Shape(name, sides, area, per){
			this->color=color;
			this->roll=roll;
			this->rotate=rotate;
			this->ellipse;
		}
		
		//destructor
		~RoundShape(){
			cout<<"Destroying RoundShape..."<<endl;
		} 
		
		//getters and setters
		void setColor(string color){
        	this->color=color;
    	}
    	string getColor(){
        	return color;
    	}
    	
    	void setRoll(bool roll){
    		this->roll=roll;
		}
		bool getRoll(){
			return roll;
		}
		
		void setRotate(bool rotate){
    		this->rotate=rotate;
		}
		bool getRotate(){
			return rotate;
		}
		
		void setEllipse(bool ellipse){
    		this->ellipse=ellipse;
		}
		bool getEllipse(){
			return ellipse;
		}
		
		//metodos
		void rollHill(){
			if(roll==true){
				cout<<"This shape can roll downhill. It will roll "<<area*per<<" meters."<<endl;
			} else{
				cout<<"This shape is round; it should be able to roll."<<endl;
			}
		}
		
		void ax(){
			if(rotate==true){
				cout<<"This shape can rotate, but can it spin like a top?"<<endl;
			}else{
				cout<<"Why can't this shape rotate?"<<endl;
			}
		}
};
