#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"


MallardDuck::MallardDuck()
{
	quackBehavior = new Quack();
	flyBehavior = new FlyWithWings();
}

void MallardDuck::display()
{
	cout << "Mallard Duck" << endl;
}
