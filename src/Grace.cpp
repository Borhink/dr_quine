#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
	Comment
*/
string c[]={
"#include <iostream>",
"#include <fstream>",
"#include <string>",
"using namespace std;",
"/*",
"	Comment",
"*/",
"string c[]={",
"};",
"#define OK 1",
"#define FT(x)int main(){ x }",
"#define MAIN FT(ofstream f;char q = 34;char b = 92;",
"f.open(c[23]);",
"for (int i = 0; i < 8; i++)",
"	f << c[i] << endl;",
"for (int i = 0; i < 24; i++)",
"	f << q << c[i] << q << ',' << endl;",
"for (int i = 8; i < 11; i++)",
"	f << c[i] << endl;",
"for (int i = 11; i < 23; i++)",
"	{f << c[i]; if (i < 21) f << b; f << endl;}",
")",
"MAIN",
"Grace_kid.cpp",
};
#define OK 1
#define FT(x)int main(){ x }
#define MAIN FT(ofstream f;char q = 34;char b = 92;\
f.open(c[23]);\
for (int i = 0; i < 8; i++)\
	f << c[i] << endl;\
for (int i = 0; i < 24; i++)\
	f << q << c[i] << q << ',' << endl;\
for (int i = 8; i < 11; i++)\
	f << c[i] << endl;\
for (int i = 11; i < 23; i++)\
	{f << c[i]; if (i < 21) f << b; f << endl;}\
)
MAIN
