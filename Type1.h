#ifndef type1_H
#define type1_H
#include "Enemy.h"
#include <iostream>
class type1: public Enemy{
	private:
		string name;
	public:	
		type1();
		//setter and getter
		void setname(string n);	
		string getname();
		//virtual Function		
		void move_position();
		void fire_weapon();
		void updata_status(); 
};
#endif
