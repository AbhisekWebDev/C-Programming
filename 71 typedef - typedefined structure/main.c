#include <stdio.h>
#include <string.h>

// using typedef to define an alias for structure

typedef struct students {
	char name[50];
	char branch[50];
	int ID_no;
} stu;

int main()
{
	stu st; // stu - custom datatype        st - variable name

	strcpy(st.name, "Abhishek Kumar");
	strcpy(st.branch, "Bachelor of Computer Application");
	st.ID_no = 4;

	printf("Name: %s\n", st.name);
	printf("Branch: %s\n", st.branch);
	printf("ID_no: %d\n", st.ID_no);

	return 0;
}
