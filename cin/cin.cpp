#include <CCTYPE>
#include <IOSTREAM>
#include <STRING>

using namespace std;

istream& fun(istream& i)
{
	char c;
	do 
	{
		i>>c;
	} while (!isdigit(c));
	i.putback(c);
	return i;
}

void main()
{
	char str;
	fun(cin)>>str;
	cout<<str;
}