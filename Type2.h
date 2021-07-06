#ifndef type2_H
#define type2_H
#include "Enemy.h"
#include <iostream>
class type2: public Enemy{
	private:
		string name;
		int ammo;// Keep track of ammo
	public:	
		type2();
		//setter and getter
		void setammo(int am);
		int getammo();
		void setname(string n);	
		string getname();
		//virtual Function		
		void move_position();
		void fire_weapon();
		void updata_status(); 
};
#endif
