#pragma once

#include <iostream>

void showFactoryMethodPatern();

class AbstractRole
{
public:

	virtual void showRights() = 0;
};

class AbstractCreator
{
public:

	virtual AbstractRole* factoryMethod() = 0;
};

class UserRole : public AbstractRole
{
public:

	void showRights() override;
};

class UserCreator : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};

class ModerRole : public AbstractRole
{
public:

	void showRights() override;
};

class ModerCreator : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};

class AdminrRole : public AbstractRole
{
public:

	void showRights() override;
};

class AdminCreator : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};
