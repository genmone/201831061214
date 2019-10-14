#include <iostream>
using namespace std;

struct zifu
{
	char word;
	int number;
	struct zifu* next;
};

class way_to_char
{
public:
	void  char_tatol(struct zifu *a,char b)
	{
		struct zifu* p;
		p = a;
		for (; p != NULL; p = p->next)
		{
			if (a->word == b)
			{
				a->number++;
				break;
			}
		}
	}
	int char_each(struct zifu *a,char b)
	{
		struct zifu *p;
		for (p = a; p != NULL; p = p->next)
		{
			if (b == p->word)
			{
				return 0;
			}
		}
		p = (struct zifu*)malloc(sizeof(struct zifu));
		p->word = b;
		p->number = 1;
		p->next = a->next;
		a->next = p;
		char_number++;
		return 0;
	}
	void show(struct zifu *a)
	{
		struct zifu* p;
		char stead;
		cout << "总的字符数为" << char_number << endl;
		for (p = a; p != NULL; p = p->next)
		{
			if (p->word >= 65 && p->word <= 90)
				stead = p->word + 32;
			else
				stead = p->word;
			cout << "字符为" << p->word << "出现次数为" << p->number<<endl;
		}
	}
private:
	struct zifu *use;
	int char_number = 0;
};

int main()
{

}