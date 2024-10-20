#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[50];
	int age;
	struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
/* add other prototypes if needed */

int main(void) {
	struct student *start, *newStudptr, *end, *tmp;
	int ageP, ageR, ageM;

	scanf("%d %d %d", &ageP, &ageR, &ageM);
	start = createStudent("Petra", ageP);
	end = start;
	newStudptr = createStudent("Remi", ageR);
	end = append(end, newStudptr);
	newStudptr = createStudent("Mike", ageM);
	end = append(end, newStudptr);

	printf("%s is %d years old.\n", start->name, start->age);
	printf("%s is %d years old.\n", start->next->name, start->next->age);
	printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

	tmp = start->next;
	free(start);
	start = tmp;
	tmp = start->next;
	free(start);
	free(tmp);

	return 0;
}

/* Place your function definitions here. Be sure to include the definition for createStudent() and any other functions you created for the previous task. */

struct student *createStudent(char studentName[], int studentAge)
{
	struct student *ptr;
	int i;

	ptr = (struct student *)malloc(1 * sizeof(struct student));
	i = 0;
	while (studentName[i] != '\0')
	{
		ptr->name[i] = studentName[i];
		i++;
	}
	ptr->name[i] = '\0';
	ptr->age = studentAge;
	ptr->next = NULL;

	return (ptr);
}

struct student *append(struct student * end, struct student * newStudptr)
{
	end->next = newStudptr;
	end = newStudptr;
	return (end);
}
