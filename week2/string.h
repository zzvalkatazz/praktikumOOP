#ifndef STRING
#define STRING
class myString
{
private:
	char* string;
public:
	myString(const char* str="\0");
	~myString();
    int length();
	int find(char c, unsigned startPos = 0);
	bool empty();
	myString substr(unsigned pos = 0, unsigned n = 0);
	char* append(const myString& str);
	void print() const;
};

#endif
