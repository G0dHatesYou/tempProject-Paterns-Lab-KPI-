#include "lab10CreationalPatterns.h"

void UserRole::showRights()
{
	std::cout << "I can only buy tickets" << std::endl;
}

AbstractRole * UserCreator::factoryMethod()
{
	return new UserRole;
}

void ModerRole::showRights()
{
	std::cout << "I can add or remove tickets" << std::endl;
}

AbstractRole * ModerCreator::factoryMethod()
{
	return new ModerRole;
}

void AdminrRole::showRights()
{
	std::cout << "I can add or remove tickets and create new moders" << std::endl;
}

AbstractRole * AdminCreator::factoryMethod()
{
	return new AdminrRole;
}

void showFactoryMethodPatern()
{
	UserCreator userCreator;
	std::unique_ptr<AbstractRole> userRole(userCreator.factoryMethod());
	userRole->showRights();

	ModerCreator moderCreator;
	std::unique_ptr<AbstractRole> moderRole(moderCreator.factoryMethod());
	moderRole->showRights();

	AdminCreator adminCreator;
	std::unique_ptr<AbstractRole> adminRole(adminCreator.factoryMethod());
	adminRole->showRights();
}
