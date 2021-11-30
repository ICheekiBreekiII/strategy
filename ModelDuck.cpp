#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "iostream"

using namespace std;


ModelDuck::ModelDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new Quack();
}

void ModelDuck::display()
{
	cout << "I'm a Model Duck" << endl;
}
