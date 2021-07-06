#include <iostream>
#include "Enemy.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"
#include <stdlib.h>

using namespace std;
int main(){
	
	const int max_enemy = 20;
 	Enemy* enemy_ptr[max_enemy];
 	int num_enemy=3,num1=0,num2=0;
 	
	type1* anim = new type1();
	type2* weapon = new type2();
    type3* person = new type3();
    
	enemy_ptr[0]=anim;
	enemy_ptr[1]=weapon;
	enemy_ptr[2]=person;
 	while( true ){
		for(int i=0;i<num_enemy;i++){
			enemy_ptr[i]->move_position();
		}
		cout<<endl;
		num1 = rand() % num_enemy;
    	enemy_ptr[num1]->fire_weapon();
    	num2 = rand() % num_enemy;
    	enemy_ptr[num2]->updata_status();
    	cout<<endl;
 	}
	return 0;
}
