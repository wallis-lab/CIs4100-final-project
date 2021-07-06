#ifndef Enemy_H
#define Enemy_H
#include <iostream>
using namespace std;
class Enemy{
	private:
		int x_position,y_position,width,height,status;

	public:
		//setters
		void setx(int x); 
		void sety(int y);
		void setwidth(int w);
		void setheight(int h);
		void setstatus(int s);	
		//getters	
    	int getx();
    	int gety();
    	int getwidth();
    	int getheight();
    	int getstatus();
		//virtual Function
		virtual void move_position()=0;
		virtual void fire_weapon()=0;
		virtual void updata_status()=0;
	
};

#endif
