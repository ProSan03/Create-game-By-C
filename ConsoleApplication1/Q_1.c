#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date{
	int year;
	int month;
	int day;
};

struct person{
	char name[10];
	int score[4];
	struct date birthday;

};

void output_info(struct person *p, int size);
// void change_name(struct person *p, char *change, int size);
void list_birthday_byMonth(struct person *p, int size);


int main(){
	struct person persons[5] = {
		{ .name = "��浿", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "�輼��", .birthday = { .year = 1994, .month = 6, .day = 20 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "��ȫ��", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "�迵��", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "������", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	int size = sizeof(persons) / sizeof(struct person);
	// output_info(persons, size);
	// change_name(persons, "�輼��", size);
	list_birthday_byMonth(persons, size);
	
	return 0;
}

void output_info(struct person* p, int size){
	for (int i = 0; i < sizeof(p); i++){
	int sum = 0;
		printf("%s %d-%d-%d ", p[i].name, p[i].birthday.year, p[i].birthday.month, p[i].birthday.day);
		for (int j = 0; j < 4; j++){
			printf("%d ", p[i].score[j]);
			sum += p[i].score[j];
		}
		printf("%d %.2lf \n", sum, (double)sum / 4);
	}
}
/*
void change_name(struct person *p, char *change, int size){
	int is_exist = 0;
	for (int i = 0; i < size; i++){
		if (strcmp(change, p[i].name) == 0){
			is_exist = 1;
			char cname[10];
			printf("�ٲ� �̸� �Է� >> ");
			scanf("%s", cname);
			strcpy(p[i].name, cname);
			break;
		}
	}
	if (is_exist == 0){
		printf("%s�� �ش� �̸��� �������� �ʽ��ϴ�. \n", change);
	}

}
*/
void list_birthday_byMonth(struct person *p, int size){
	
	// ���� Ȯ���ϴ� �뵵
	for (int i = 1; i <= 12; i++){
		int count = 0;
		// ��� �˻�
		for (int j = 0; j < size; j++){
			if (p[j].birthday.month == i){
				// ó���� �ƴ� ���
				if (++count > 1){
					printf(", %s \n", i, p[j].name);
				}
				// ó���� ���
				else{
					printf("%2d�� \t ���� : %s \n", i, p[j].name);
				}
			}
		}
	}
	
}