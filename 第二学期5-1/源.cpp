#include <iostream>  
#include <string>  

using namespace std;

string ReverseSentence(string str)
{
	string res = "", tmp = "";

	for (unsigned int i = 0; i < str.size(); ++i)
	{
		// �����ո�  
		if (str[i] == ' ')
		{
			res = " " + tmp + res;
			tmp = "";
		}
		else
		{
			tmp += str[i];
		}
	}

	// ���һ���ַ�  
	if (tmp.size())
		res = tmp + res;

	return res;
}

int main(void)
{
	string str = "";
	getline(cin, str);
	cout << ReverseSentence(str) << endl;
	//system("pause");
	return 0;
}