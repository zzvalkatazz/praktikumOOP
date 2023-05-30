#ifndef QUESTION_
#define QUESTION_
#include<string>
class Question
{
private:
public:
	bool validYesNoAnswer(const std::string& ans);
	bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
	const std::string YES = "yes";
	const std::string NO = "no";
	virtual void ask() const;
	virtual int grade() const;
	virtual void print()const;
	virtual ~Question();

};












#endif
