#include "lab12BehavioralPatterns.h"

void showBehavioral1Patern()
{
	RoleManager roleManager;
	roleManager.showRightsStrategy();

	roleManager.setNewStrategy(new UserRoleStrategy);
	roleManager.showRightsStrategy();

	roleManager.setNewStrategy(new ModerRoleStrategy);
	roleManager.showRightsStrategy();

	roleManager.setNewStrategy(new AdminrRoleStrategy);
	roleManager.showRightsStrategy();
}

RoleManager::RoleManager():
	mStrategy(new DefaultRoleStrategy)
{
}

void RoleManager::showRightsStrategy()
{
	mStrategy->showRights();
}

void RoleManager::setNewStrategy(AbstractRoleStrategy* strategy)
{
	mStrategy.reset(strategy);
}

void UserRoleStrategy::showRights()
{
	std::cout << "I can only buy tickets" << std::endl;
}

void ModerRoleStrategy::showRights()
{
	std::cout << "I can add or remove tickets" << std::endl;
}

void AdminrRoleStrategy::showRights()
{
	std::cout << "I can add or remove tickets and create new moders" << std::endl;
}

void DefaultRoleStrategy::showRights()
{
	std::cout << "Default strategy" << std::endl;
}
