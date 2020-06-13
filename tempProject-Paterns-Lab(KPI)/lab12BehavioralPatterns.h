#pragma once

#include <iostream>

void showBehavioral1Patern();

class AbstractRoleStrategy
{
public:

	virtual void showRights() = 0;
};

class RoleManager
{
public:
	RoleManager();
	void showRightsStrategy();
	void setNewStrategy(AbstractRoleStrategy* strategy);

private:
	std::unique_ptr<AbstractRoleStrategy> mStrategy;
};

class DefaultRoleStrategy : public AbstractRoleStrategy
{
public:

	void showRights() override;
};

class UserRoleStrategy : public AbstractRoleStrategy
{
public:

	void showRights() override;
};

class ModerRoleStrategy : public AbstractRoleStrategy
{
public:

	void showRights() override;
};

class AdminrRoleStrategy : public AbstractRoleStrategy
{
public:

	void showRights() override;
};

