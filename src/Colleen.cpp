#include <iostream>
#include <string>
/*
	Comment
*/
void func(void){}
int main (){char q = 34;std::string c[]={
"#include <iostream>",
"#include <string>",
"/*",
"	Comment",
"*/",
"void func(void){}",
"int main (){char q = 34;std::string c[]={",
"};",
"/*",
"	Comment2",
"*/",
"func();",
"for (int i = 0; i < 7; i++)",
"	std::cout << c[i] << std::endl;",
"for (int i = 0; i < 19; i++)",
"	std::cout << q << c[i] << q << ',' << std::endl;",
"for (int i = 7; i < 19; i++)",
"	std::cout << c[i] << std::endl;",
"}",
};
/*
	Comment2
*/
func();
for (int i = 0; i < 7; i++)
	std::cout << c[i] << std::endl;
for (int i = 0; i < 19; i++)
	std::cout << q << c[i] << q << ',' << std::endl;
for (int i = 7; i < 19; i++)
	std::cout << c[i] << std::endl;
}
