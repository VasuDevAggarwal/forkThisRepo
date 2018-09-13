#ifndef PERSON_H
#define PERSON_H
class Person
{
protected:
	char *name;
	int code;
public:
	Person():code(0),name(nullptr){};
	Person(const char *, int );
	Person(const Person &);
	void update_code(int);
	void update_name(const char *);
	char * getName();
	int getCode();
	~Person()
	{
		delete name;
	}
};
#endif