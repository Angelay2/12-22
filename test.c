#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int one(){
	printf("��������ô�����? 1 ��ʾ��, 0 ��ʾ����!\n");
	int choice = 0;
	scanf("%d", &choice);
	printf("%d\n", choice == 1);
	if (choice == 1){
		printf("����õ�һ�ݺ� offer!\n");
	}else if(choice == 0){
		printf("�ؼ��������!\n");
	}
	else{
	printf("������������!\n");
	}

	system("pause");
	return 0;

}
struct student{
	char name[100];
	int age;
	int score;
};

int two(){
	struct student s = { "����", 18, 100 };
	// . ��Ա���������
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}

//// !cond ���߼�ȡ��
//int func(){
//	if (!cond1){
//		return y;
//	}
//	if (!cond2){
//		return y;
//	}
//	if(!cond3){
//		return y;
//	}
//	return x;// �����������������, ���� x.
//}
int func1(int x, int y){

	if(x > y){
		return 1;
	}
	if(x < y){
		return -1;
	}
	return 0;
}
int three(){
	int x = 0;
	int y = 0;
	printf("��������Ҫ�Ƚϴ�С������������:");
	scanf("%d %d", &x, &y);
	printf("%d\n", func1(x, y));
	system("pause");
	return 0;
}

// ���� ������==��С��д��= ,���ױ�����,linux �ᱨ����
int func2(int num ){

	if(num == 5){
		return 1;
	}
	return 0;
}
void func3(int num){
	if (num == 5){
		printf("haha\n");
	}
		printf("hehe\n");
}
// �������,�����׷��ִ�,����̫��, ���Բ�����
//void func3(){
//	int num = 1;
//	if(5 == num){
//		printf("haha");
//	}else{
//		printf("hehe");
//	}
//}
int four(){
	int num;
	scanf("%d", &num);
	printf("%d", func2(num));
	func3(num);
	system("pause");
	return 0;
}

// ��� x Ϊ����, ���� 1, ���򷵻� 0
int IsOdd(int x){
	// д��(x % 2)Ҳ����
	// ���ǲ���д��(x % 2 == 1),��x Ϊ������,�Է���0,����
	if(x % 2 != 0){
		return 1;
	}
	return 0;
}
// �ж�һ�����Ƿ�Ϊ����
int five(){
	int x;
	scanf("%d", &x);
	printf("%d\n", IsOdd(x));
	system("pause");
	return 0;
}
// ��ӡ1-100 �����������
int main(){
	int num = 1;
	printf("1 - 100�ڵ�������:\n");
	while(num <= 100){
		if(IsOdd(num) == 1){
			printf("%d ", num);
		}
		num += 1;
	}
	system("pause");
	return 0;
}
