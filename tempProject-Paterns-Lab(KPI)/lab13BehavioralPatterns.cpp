#include "lab13BehavioralPatterns.h"

int Observer::static_number_ = 0;

void Subject::Attach(IObserver * observer)
{
	list_observer_.push_back(observer);
}

void Subject::Detach(IObserver * observer)
{
	list_observer_.remove(observer);
}

void Subject::Notify()
{
	std::list<IObserver *>::iterator iterator = list_observer_.begin();
	while (iterator != list_observer_.end()) {
		(*iterator)->Update(message_);
		++iterator;
	}
}

void Subject::CreateMessage(std::string message)
{
	this->message_ = message;
	Notify();
}

void Subject::SomeBusinessLogic()
{
	this->message_ = "change message message";
	Notify();
	std::cout << "I'm about to do some thing important\n";
}

Observer::Observer(Subject & subject)
	: subject_(subject) {
	this->subject_.Attach(this);
	std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number_ << "\".\n";
	this->number_ = Observer::static_number_;
}

void Observer::Update(const std::string & message_from_subject)
{
	message_from_subject_ = message_from_subject;
	PrintInfo();
}

void Observer::RemoveMeFromTheList()
{
	subject_.Detach(this);
	std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
}

void Observer::PrintInfo()
{
	std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
}

void showBehavioral2Patern()
{
	Subject *subject = new Subject;
	Observer *observer1 = new Observer(*subject);
	Observer *observer2 = new Observer(*subject);
	Observer *observer3 = new Observer(*subject);
	Observer *observer4;

	subject->CreateMessage("Added new tickets for your request");
	observer3->RemoveMeFromTheList();

	subject->CreateMessage("ticket reservation expired ");
	observer4 = new Observer(*subject);

	observer4->RemoveMeFromTheList();
	observer1->RemoveMeFromTheList();

	delete observer4;
	delete observer3;
	delete observer2;
	delete observer1;
	delete subject;
}
