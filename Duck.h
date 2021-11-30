#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{

 public:

	 FlyBehavior *flyBehavior;					
	 QuackBehavior *quackBehavior;

	 Duck() {}

	 void performFly();

	 void performQuack();

	 void setFlyBehavior(FlyBehavior *fb) {
		 flyBehavior = fb;
	 }

	 void setQuackBehavior(QuackBehavior *qb){
		 quackBehavior = qb;
	 }

	 virtual void display() = 0;

};

#endif
