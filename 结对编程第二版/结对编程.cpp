#include <iostream>
#include <stdlib.h>
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
	int set()
	{
		use = new struct zifu;
		use->next = NULL;
		if (use == NULL)
		{
			cout << "分配内存失败" << endl;
		}
		cout << use << endl;
		return 0;
	}
    int char_counter(char b)
	{
		if (use == NULL)
		{
			return 0;
		}
		struct zifu* p;
	    for (p=use->next; p != NULL; p = p->next)
		{
			if (p->word == b)
			{
				p->number++;
				char_number++;
				return 0;
			}
		}
		p = new struct zifu;
		p->word = b;
		p->number = 1;
		p->next = use->next;
		use->next = p;
		char_number++;
		return 0;
    }

	int show()
	{
		if (use == NULL)
		return 0;
		struct zifu* p;
		char stead;
		cout << "总的字符数为" << char_number << endl;
		for (p = use->next; p != NULL; p = p->next)
		{
			if (p->word >= 65 && p->word <= 90)
				stead = p->word + 32;
			else
				stead = p->word;
			cout << "字符为" << stead << "出现次数为" << p->number<<endl;
		}
		return 0;
	}
	int fun(char b[])
	{
		int a;
		set();
		for (a = 0;b[a]!='\0' ; a++)
		{
			char_counter(b[a]);
		}
		return 0;
	}
private:
	struct zifu *use;
	int char_number = 0;
};

int main()
{
	cout << "输入字符串";
	char usef[100];
	way_to_char c;
	cin >> usef;
	cout << "进行字符串处理"<<endl;
	c.fun(usef);
	cout << "结果展示"<<endl;
	c.show();
}