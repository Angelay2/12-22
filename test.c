#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int one(){
	printf("你会认真敲代码吗? 1 表示会, 0 表示不会!\n");
	int choice = 0;
	scanf("%d", &choice);
	printf("%d\n", choice == 1);
	if (choice == 1){
		printf("你会拿到一份好 offer!\n");
	}else if(choice == 0){
		printf("回家卖红薯吧!\n");
	}
	else{
	printf("您的输入有误!\n");
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
	struct student s = { "张三", 18, 100 };
	// . 成员访问运算符
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}

//// !cond 表逻辑取反
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
//	return x;// 如果所有条件都满足, 返回 x.
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
	printf("请输入你要比较大小的两个操作数:");
	scanf("%d %d", &x, &y);
	printf("%d\n", func1(x, y));
	system("pause");
	return 0;
}

// 更好 虽若将==不小心写成= ,不易被发现,linux 会报警告
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
// 相比上面,更容易发现错,但是太丑, 所以不建议
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

// 如果 x 为奇数, 返回 1, 否则返回 0
int IsOdd(int x){
	// 写成(x % 2)也可以
	// 但是不能写成(x % 2 == 1),若x 为负奇数,仍返回0,出错
	if(x % 2 != 0){
		return 1;
	}
	return 0;
}
// 判断一个数是否为奇数
int five(){
	int x;
	scanf("%d", &x);
	printf("%d\n", IsOdd(x));
	system("pause");
	return 0;
}
// 打印1-100 里的所有奇数
int main(){
	int num = 1;
	printf("1 - 100内的奇数有:\n");
	while(num <= 100){
		if(IsOdd(num) == 1){
			printf("%d ", num);
		}
		num += 1;
	}
	system("pause");
	return 0;
}
