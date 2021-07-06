#include "Type2.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Enemy.h"
#include <ctime>
#define random(x)  rand()%(x)
#define randomL(a,b) (rand()%(b-a+1))+a
type2::type2(){
	
	setx(rand()%600);
	
	sety(300);
	setwidth(10);
	setheight(10);
	string name[]={"Jet","Helicopter","Drone"};//set the random select the animal
	string animal="";
	srand((int)time(0));
	int number=randomL(0,2);
	animal=name[number];
	setname(animal);
	setstatus(8);
	setammo(4);
	
}
void type2::setname(string n){
	name=n;
}	
string type2::getname(){
	return name;
}

void type2::setammo(int am){
	ammo=am;
}	
int type2::getammo(){
	return ammo;
}



void type2::move_position(){
	int rd = rand() % 2;
	int move=rand()%15+15;
	if (getstatus()>0){
   		if (rd = 0){
       		if (getx() + move> 800)
          		 setx(getx() - move);
       		else
           		setx(getx() + move);
   		}
   		else{
       		if (getx() - move < 0)
           		setx(getx() + move);
       		else
           		setx(getx() - move);
   			}
   
	}
	cout <<getname()<<" moves to " << getx() << "," << gety() << " ";
}

void type2::fire_weapon(){
	
	cout <<getname()<<" fire weapon: ";
    if (getstatus() > 0){
    	if (getammo()>0){
			setammo(getammo()-1);
        	if (getname()=="Jet")
       			cout<< " missiles" << endl;
       		
       		if (getname()=="Helicopter")
       			cout<< " missiles" << endl;
       		
       		if (getname()=="Drone")	
       			cout<< " bombs" << endl;
       }
       else
       		cout<< " dead!!!!! No fire weapon:" << endl;
    }
    else{
			cout<< " dead!!!!!" << endl;
    }  
}
void type2::updata_status(){
	cout<<getname()<<" update status: ";
    if (getstatus() > 0){
       if (getstatus() - 1 == 0){
           cout << "hit, status points 0 (boom)" << endl;
           setstatus(getstatus() - 1);
           exit (EXIT_FAILURE);
       }
       else{
           setstatus(getstatus() - 1);
           cout << "hit, status points " << getstatus() << " (boom)" << endl;
       }
	}
    else
       cout << "hit, status points 0 (ping)" << endl;
}

