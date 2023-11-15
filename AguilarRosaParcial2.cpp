/*Angel Aguilar, Henrik Axel
2023 oct 27
Test 2, examen 2
all code is original
*/

#include<bits/stdc++.h>
using namespace std;

// abstract class
class AbsChar{
    virtual void attack()=0; //virtual method
};

//parent class 1
class Magic:AbsChar{  // 
protected:
    string name;  //

private:    // Estan encapsuladas. Son privadas y nadie fuera de la clase pueda accesar a ellas.
    int intel;
    int hp;

public:
    // Metodo
    void MagicAttack(){
        cout <<name<<" uses a magic attack!"<<endl;
    }

    // Constructor

    Magic(string name, int intel, int hp){
        this->name=name;
        this->intel=intel;
        this->hp=hp;
    }
	//destructor
    ~Magic(){
        cout << "Magic destructor invoked." << endl;
    }

    // Getters Setters
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    void setIntel(int intel){
        this->intel = intel;
    }

    int getIntel(){
        return intel;
    }

    void setHP(int hp){
        this->hp = hp;
    }

    int getHP(){
        return hp;
    }

    // Implementing abstract method
    void attack(){
        cout << "We must attack the enemy!"<<endl;
    }

    // proper functions
    //polymorphism
    virtual void classJob(){ 
        cout << "This class can work with its intelligence." << endl;
    }
	//inherit easy
    void magicAttack(){
        cout << name << " uses a magic attack equal to " <<intel<< endl;
    }
    
    //constructor copy
		Magic(const Magic& original){
			this->intel=original.intel;
			this->hp=original.hp;
			this->name=original.name
			
		}
		
		~Magic(){
			cout<<"Destructor invocated for magic"<<endl;
			delete Magic;
			
		}
};

// parent class 2
class Strong:AbsChar{
protected:
    string name;

private:
    int hp;
    int str;
    int def;

public:

    // Constructor
    Strong(string name, int hp, int str, int def){
        this->name=name;
        this->hp=hp;
        this->str=str;
        this->def=def;
    }
    //constructor copy
		Strong(const Strong& original){
			this->name=name;
			this->hp=original.hp;
			this->str=original.str;
			this->def=original.def;
			
		}
		
		~Strong(){
			cout<<"Destructor invocated for strong"<<endl;
			delete Strong;
			
		}

    // getters setters
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    void setHP(int hp){
        this->hp = hp;
    }

    int getHp(int hp){
        return hp;
    }

    void setStr(int str){
        this->str = str;
    }

    int getDef(){
        return def;
    }

	//functions
	//abstract method
    void attack(){
        cout << "We must attack the enemy!"<<endl;
        cout<<" unleash an attack equal to "<<str;
    }
    void strongAttack(){
    	cout<<"use a stregnth attack"<<endl;
	}

};


// Inherit from magic-1
class Wiz: public Magic{
public:
    int wis;

    // Constructor
    Wiz(string name, int hp, int intel, int wis)
        :Magic(name, hp, intel){  // using parent construct
            this->wis = wis;
            
        }
        //constructor copy
		Wiz(const Wiz& original){
			this->wis=original.wis;
			this->intel=original.intel;
			this->hp=original.hp;
			this->name=original.name
			
		}
		
		~Wiz(){
			cout<<"Destructor invocated for wiz"<<endl;
			delete Wiz;
			
		}
    
    // Getters setters
    int getWis(){
        return wis;
    }

    void setWis(int wis){
        this->wis = wis;
    }
    // proper method
    void Spell(){
        cout <<name << " casts a spell but takes " << hp-3<<"Damage." << endl;
    }

    // implementing polymorphism.
    void classJob(){
        cout << "due to int stat of " << intel << ", you can work as";
        if(intel>=5){
        	cout<<" a researcher"<<endl;
		}else{
			cout<<"a librarian"<<endl;
		}
    }
};

// Inherit from magic-2
class Warlock: public Magic{
public:
    int charisma;

    // Constructor
    Warlock(string name, int hp, int intel, int charisma)
        :Magic(name, hp, intel){  // using parent construct
            this->charisma = charisma;
        }
        //constructor copy
		Magic(const Warlock& original){
			this->charisma=original.charisma;
			this->intel=intel;
			this->hp=original.hp;
			this->name=original.name
			
		}
		
		~Warlock(){
			cout<<"Destructor invocated for Warlock"<<endl;
			
		}
    
    // Getters setters
    int getCharisma(){
        return charisma;
    }

    void setWis(int wis){
        this->charisma = charisma;
    }
    // proper method
    void Blast(){
        cout <<name << " casts Eldritch Blast but takes " << hp-7<<"Damage." << endl;
    }

    // implementing polymorphism.
    void classJob(){
        cout << "due to charisma stat of " << charisma << ", you can form contracts with";
        if(charimsa>=5){
        	cout<<" a Celestial"<<endl;
		}else{
			cout<<"an elf"<<endl;
		}
    }
};

// inherit from Strong 1
class Fighter: public Strong{
public:
    int constit;

    // Constructor
    Fighter(string name, int hp, int str, int def, int constit)
    : Strong(name, hp, str, def){
        this->constit=constit
    }

    // Getters y setters
    int getConstit(){
        return constit;
    }

    void setConstit(int constit){
        this->constit = constit;
    }


    // Methof
    void choose(){
        cout << "your stregnth stat of "<<str<<"allows for a weapon of";
        if(str>=5){
        	cout<<"a hammer"<<endl;
		}else{
			cout<<"a sword"<<endl;
		}
    }
};
// inherit from Strong 2
class Rogue: public Strong{
public:
    int dex;

    // Constructor
    Rogue(string name, int hp, int str, int def, int dex)
    : Strong(name, hp, str, def){
        this->dex=dex
    }

    // Getters y setters
    int getDex(){
        return dex;
    }

    void setDex(int dex){
        this->dex = dex;
    }


    // Methof
    void choose(){
        cout << "your stregnth stat of "<<str<<"allows for a weapon of";
        if(str>=5){
        	cout<<"a bow"<<endl;
		}else{
			cout<<"a knife"<<endl;
		}
    }
    
    
    
};

//multi inherit
class BattleMage: public Magic, public Strong{
    string power;

public:
    // Constructor
    BattleMage(int name, int intel, int hp, int str, int def, string power)
                :Magic(name, intel, hp), Strong(str, def){
                    this->power = power;
                }

    void doubleAttack(){
       Magic::magicAttack();
       Strong::strongAttack();
    }

};

