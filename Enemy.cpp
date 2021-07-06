#include "Enemy.h"
#include <iostream>
using namespace std;
//setter
void Enemy::setx(int x){
	x_position=x;
}
void Enemy::sety(int y){
	y_position=y;
}
void Enemy::setwidth(int w){
	width=w;
}
void Enemy::setheight(int h){
	height=h;
}
void Enemy::setstatus(int s){
	status=s;
}
//getter
int Enemy::getstatus(){
	return status;
}
int Enemy::getx(){
	return x_position;
}
int Enemy::gety(){
	return y_position;
}
int Enemy::getwidth(){
	return width;
}
int Enemy::getheight(){
	return height;
}

