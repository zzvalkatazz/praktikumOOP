#include"Question.h"
bool Question::validYesNoAnswer(const std::string& ans)
{
	return ans == "yes";
}
bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes)
{
	if ((correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO))
	{
		return true;
	}
	return false;
}
Question::~Question()
{
}

