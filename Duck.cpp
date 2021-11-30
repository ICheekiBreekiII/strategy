#include "Duck.h"

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}
