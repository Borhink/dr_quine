#include <unistd.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
extern char *__progname;
string c[] = {
"Sully_",
".cpp",
"g++ -Wall -Wextra -Werror Sully_",
" -o ",
"./",
"#include <unistd.h>",
"#include <cstdio>",
"#include <iostream>",
"#include <fstream>",
"#include <string>",
"using namespace std;",
"extern char *__progname;",
"string c[] = {",
"};",
"int i = ",
"int main()",
"{",
"	ofstream f;",
"	char q = 34;",
"	if (__progname[0] == 0)",
"		i--;",
"	f.open(c[0] + to_string(i) + c[1]);",
"	for (int j = 5; j < 13; j++)",
"		f << c[j] << endl;",
"	for (int j = 0; j < 34; j++)",
"		f << q << c[j] << q << ',' << endl;",
"	f << c[13] << endl;",
"	f << c[14] << to_string(i) << ';' << endl;",
"	for (int j = 15; j < 34; j++)",
"		f << c[j] << endl;",
"	std::system((c[2] + to_string(i) + c[1] + c[3] + c[0] + to_string(i)).c_str());",
"	if (i > 0)",
"		execv((c[0] + to_string(i)).c_str(), NULL);",
"}",
};
int i = 5;
int main()
{
	ofstream f;
	char q = 34;
	if (__progname[0] == 0)
		i--;
	f.open(c[0] + to_string(i) + c[1]);
	for (int j = 5; j < 13; j++)
		f << c[j] << endl;
	for (int j = 0; j < 34; j++)
		f << q << c[j] << q << ',' << endl;
	f << c[13] << endl;
	f << c[14] << to_string(i) << ';' << endl;
	for (int j = 15; j < 34; j++)
		f << c[j] << endl;
	std::system((c[2] + to_string(i) + c[1] + c[3] + c[0] + to_string(i)).c_str());
	if (i > 0)
		execv((c[0] + to_string(i)).c_str(), NULL);
}
// g++ -Wall -Wextra -Werror ../src/Sully.cpp -o Sully; ./Sully
