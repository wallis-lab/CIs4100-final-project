#include "type1.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "Enemy.h"
#define random(x)  rand()%(x)
#define randomL(a,b) (rand()%(b-a+1))+a

type1::type1(){
	
	setx(rand()%600);
	sety(500);
	setwidth(5);
	setheight(12);
	string name[]={"PitBull","Lion","Tiger"};//set the random select the animal
	string animal="";
	srand((int)time(0));
	int number=randomL(0,2);
	animal=name[number];
	setname(animal);
	setstatus(2);
}
void type1::setname(string n){
	name=n;
}	
string type1::getname(){
	return name;
}


void type1::move_position(){
	int rd = rand() % 2;
	if (getstatus()>0){
    	if (rd = 0){
       		if (getx() + 6 > 800)
           		setx(getx() - 6);
        	else
           		setx(getx() + 6);
    	}
    	else{
       		if (getx() - 6 < 0)
          		 setx(getx() + 6);
       		else
          		 setx(getx() - 6);
   		}
	}
   cout <<getname()<<" moves to " << getx() << "," << gety() << " ";
}

void type1::fire_weapon(){
	cout <<getname()<<" fire weapon: ";
    if (getstatus() > 0){
   		if (getname()=="PitBull")
       		cout<< " bite leg" << endl;
       	if (getname()=="Lion")
       		cout<< " bite chest" << endl;
       	if (getname()=="Tiger")	
       		cout<< " bite neck" << endl;
   }
    else{
       cout<< " dead!!!!!" << endl;
   }
}
void type1::updata_status(){
	cout<<getname()<<" update status: ";
    if (getstatus() > 0){
       if (getstatus() - 1 == 0){
           cout << "hit, status points 0 (roar)" << endl;
           setstatus(getstatus() - 1);
           //exit (EXIT_FAILURE);// make sure one character death then the program stop 
       }
       else{
           setstatus(getstatus() - 1);
           cout << "hit, status points " << getstatus() << " (roar)" << endl;
       }
	}
    else
       cout << "hit, status points 0 (roar)" << endl;
}

