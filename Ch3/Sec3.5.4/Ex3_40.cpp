#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";
	
	const size_t new_size = strlen(s1) + strlen(" ") + strlen(s2);
	char s3[new_size];
	
	strcpy(s3,s1);
	strcat(s3," ");
	strcat(s3,s2);
	
	cout << s3 << endl;
	
	return 0;
}
