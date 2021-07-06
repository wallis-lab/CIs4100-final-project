#include "type3.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Enemy.h"
#include <ctime>
#define random(x)  rand()%(x)
#define randomL(a,b) (rand()%(b-a+1))+a
type3::type3(){
	
	setx(rand()%500);
	sety(500);
	setwidth(3);
	setheight(10);
	string name[]={"Soldier","Robot","BadCop"};//set the random select the animal
	string animal="";
	srand((int)time(0));
	int number=randomL(0,2);
	animal=name[number];
	setname(animal);
	setstatus(5);
}
void type3::setname(string n){
	name=n;
}	
string type3::getname(){
	return name;
}


void type3::move_position(){
	int rd = rand() % 2;
	int move=3; 
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

void type3::fire_weapon(){
	cout <<getname()<<" fire weapon: ";
   if (getstatus() > 0){
       cout<< " rifle " << endl;
   }
   else{
       cout<< " dead!!!!!" << endl;
   }
}
void type3::updata_status(){
	cout<<getname()<<" update status: ";
    if (getstatus() > 0){
       if (getstatus() - 1 == 0){
           cout << "hit, status points 0 (ARRRGH)" << endl;
           setstatus(getstatus() - 1);        
       }
       else{
           setstatus(getstatus() - 1);
           cout << "hit, status points " << getstatus() << " (ouch)" << endl;
       }
	}
    else
       cout << "hit, status points 0  (ARRRGH)" << endl;
}

