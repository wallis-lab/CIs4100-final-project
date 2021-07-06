#ifndef type3_H
#define type3_H
#include "Enemy.h"
#include <iostream>
class type3: public Enemy{
	private:
		string name;
	public:	
		type3();
		//setter and getter
		void setname(string n);	
		string getname();	
		//virtual Function	
		void move_position();
		void fire_weapon();
		void updata_status(); 
};
#endif
