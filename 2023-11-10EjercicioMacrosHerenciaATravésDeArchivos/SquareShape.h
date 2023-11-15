//clase hija 2
#include "Shape.h"
/*
- Una clase padre con por lo menos 4 atributos, su constructor parametrizado, destructor, getters y setters y un par de metodos propios
- Dos clases hijas que hereden de la clase padre y que cumplan con los mismos requerimientos.
*/
class SquareShape: public Shape{
	public:
		//atributos
		string shade;
		bool build; //is it in a building?
		bool prism; //are all sides the same length?
		bool dimen; //is it a 3d shape?
		
		//constructor que hereda de clase padre
		SquareShape(string name, int sides, int area, int per, string shade, bool build, bool prism, bool dimen):Shape(name, sides, area, per){
			this->shade=shade;
			this->build=build;
			this->prism=prism;
			this->dimen=dimen;
		}
		
		//destructor
		~SquareShape(){
			cout<<"Destorying SquareShape"<<endl;
		}
		
		//getters and setters
		void setShade(string shade){
			this->shade=shade;
		}
		string getShade(){
			return shade;
		}
		
		void setBuild(bool build){
			this->build=build;
		}
		bool getBuild(){
			return build;
		}
		
		void setPrism(bool prism){
			this->prism=prism;
		}
		bool getPrism(){
			return prism;
		}
		
		void setDimen(bool dimen){
			this->dimen=dimen;
		}
		bool getDimen(){
			return dimen;
		}
		
		//metodos
		void brick(){
			if(build==true){
				if(sides==4){
					cout<<"This shape is found in simple structures."<<endl;
				}else if(sides==3||sides>=5){
					cout<<"This shape is found in futuristic structures."<<endl;
				}else{
					cout<<"this shape cannot be found anywhwere."<<endl;
				}
			}
		}
		
		void anim(){
			if(dimen==true){
				cout<<"This shape is 3D and can be seen in the world."<<endl;
			}else{
				cout<<"This shape is only found in drawings and paintings."<<endl;
			}
		}
};
