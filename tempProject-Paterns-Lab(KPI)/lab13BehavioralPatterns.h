#include <iostream>
#include <list>
#include <string>

void showBehavioral2Patern();

class IObserver {
public:
	virtual ~IObserver() {};
	virtual void Update(const std::string &message_from_subject) = 0;
};

class ISubject {
public:
	virtual ~ISubject() {};
	virtual void Attach(IObserver *observer) = 0;
	virtual void Detach(IObserver *observer) = 0;
	virtual void Notify() = 0;
};

class Subject : public ISubject {
public:
	void Attach(IObserver *observer) override;
	void Detach(IObserver *observer) override;

	void Notify() override;

	void CreateMessage(std::string message = "Empty");

	void SomeBusinessLogic();

private:
	std::list<IObserver *> list_observer_;
	std::string message_;
};

class Observer : public IObserver {
public:
	Observer(Subject &subject);

	void Update(const std::string &message_from_subject) override;

	void RemoveMeFromTheList();

	void PrintInfo();

private:
	std::string message_from_subject_;
	Subject &subject_;
	static int static_number_;
	int number_;
};
