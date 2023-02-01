#include<stdio.h>

//1.2变量与算术表达式

//main() {
//	float fahr, celsius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//	fahr = lower;
//	printf("华氏温度对应摄氏温度转换表\n");
//	printf("%3s\t%6s\n", "华氏度", "摄氏度");
//	while (fahr <= upper) {
//		celsius = (5.0/9.0)* (fahr - 32.0) ;
//		printf("%3.0f\t%6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}

//main() {
//	float fahr, celsius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 100;
//	step = 10;
//	celsius = lower;
//	printf("摄氏温度对应华氏温度转换表\n");
//	printf("%3s\t%6s\n", "摄氏度", "华氏度");
//	while (celsius <= upper) {
//		
//		fahr = celsius * 9.0 / 5.0 + 32.0;
//		printf("%3.0f\t%6.1f\n", celsius,fahr);
//		celsius = celsius + step;
//	}
//}



//1.3 for语句 && 1.4 符号常量

//#define UPPER 300
//#define LOWER 0
//#define STEP 20
//
//main() {
//	int fahr;
//
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
//		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
//	}
//} 




//1.5 字符输入/输出


//main() {
//	char c = getchar();
//	putchar(c);
//}

//main() {
//	int c;
//	while ((c = getchar()) != EOF)
//		putchar(c);
//}

//练习1-7输出EOF的值
//main() {
//	printf("%d",EOF);
//}

//统计输入的字符数；版本1
//main() {
//	long nc;
//
//	nc = 0;
//	while (getchar() != EOF)
//		++nc;
//	printf("%ld\n", nc);
//}

//统计输入的字符数；版本2
//main() {
//	double nc;
//	for (nc = 0; getchar() != EOF; ++nc) {
//		
//	}
//	printf("%3.0f\n", nc);
//}


//统计输入的行数
//main() {
//	int c, nl=0;
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			++nl;
//	printf("%d\n", nl);
//}


//统计空格、制表符与换行符个数
//main() {
//	int c, nt1 = 0, nt2 = 0, nt3 = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ') {
//			++nt1;
//		}
//		if (c == '\t') {
//			++nt2;
//		}
//		if (c == '\n') {
//			++nt3;
//		}
//	}
//	printf("%d\t%d\t%d\n", nt1, nt2, nt3);
//}



//将输入复制到输出，并将其中连续的多个空格用一个空格代替
//main() {
//	int c, nt = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ') {
//			++nt;
//			if (nt > 1) {
//
//			}
//			else {
//				putchar(c);
//			}
//		}
//		else {
//			nt = 0;
//			putchar(c);
//		}
//	}
//}//方法一

//#define NONBLANK 'a'
//main() {
//	int c;
//	int lastc = NONBLANK;
//	while ((c = getchar()) != EOF) {
//		if (c != ' ' || lastc != ' ') {
//			putchar(c);
//			lastc = c;
//		}
//	}
//}//方法二



//将输入复制到输出，并将其中的制表符替换为\t，将回退符替换为\b，将反斜杠替换为\\。
//main() {
//	int c;
//	while ((c = getchar()) != EOF) {
//		if (c == '\t')
//			printf("\\t");
//		if (c == '\b')
//			printf("\\b");
//		if (c == '\\')
//			printf("\\\\");
//		else
//			putchar(c);
//	}
//} 



//1.5.4单词计数


//#define IN 1 //在单词内
//#define OUT 0 //在单词外
//
////统计输入的行数、单词数与字符数
//main() {
//	int c, nl, nw, nc, state;
//
//	state = OUT;
//	nl = nw = nc = 0;
//	while ((c = getchar()) != EOF) {
//		++nc;
//		if (c == '\n') {
//			++nl;
//		}
//		if (c == ' ' || c == '\n' || c == '\t') {
//			state = OUT;
//		}
//		else if (state == OUT) {
//			state = IN;
//			++nw;
//		}
//	}
//	printf("%d %d %d\n", nl, nw, nc);
//}


//以每行一个单词的形式打印其输入
//#define OUT 0
//#define IN 1
//
//main() {
//	int c,state=OUT;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {//单词结束
//			printf("\n");
//			state = OUT;
//		}
//		else if (state == OUT) {//单词开始
//			state = IN;
//			putchar(c);
//		}
//		else {//单词中
//			putchar(c);
//		}
//	}
//}//方法一

//main() {
//	int c, state;
//
//	state = OUT;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\t' || c == '\n') {
//			if (state == IN) {//单词结束
//				putchar('\n');
//				state = OUT;
//			}
//		}else if (state == OUT) {//单词开始
//			state = IN;
//			putchar(c);
//		}else {//单词中间
//			putchar(c);
//		}
//	}
//}//方法二



//1.6数组

//统计各个数字、空白符及其他字符出现的次数
//main() {
//	//定义变量
//	int c, i, nwhite, nother;
//	int ndigit[10];
//
//	//变量及数组初始化
//	nwhite = nother = 0;
//	for (i = 0; i < 10; ++i) {
//		ndigit[i] = 0;
//	}
//
//	//计数逻辑
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9') {
//			++ndigit[c - '0'];
//		}
//		else if (c == ' ' || c == '\n' || c == '\t') {
//			++nwhite;
//		}
//		else {
//			++nother;
//		}
//	}
//
//	//打印计数结果
//	printf("digits=");
//	for (i = 0; i < 10; ++i) {
//		printf("%d",ndigit[i]);
//	}
//
//	printf(",white space=%d,other=%d\n", nwhite, nother);
//}


//练习1-13：编写程序打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。

//#define MAXHIST 15 //直方图的最大长度
//#define MAXWORD 11 //单个单词的最大长度
//#define OUT 0 //在单词外
//#define IN 1 //在单词内
//
////打印水平直方图
//main() {
//	//定义所需变量
//	int c, i, nc, state;
//	int len; //每条直方图的长度
//	int maxvalue; //wl[]中的最大值（某特定长度单词的个数最多，maxvalue记录其个数）
//	int ovflow; //超长单词的数量
//	int wl[MAXWORD]; //特定长度单词个数计数器
//	
//	//变量初始化
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i) {
//		wl[i] = 0;
//	}
//
//	//单词长度与特定长度单词数的计数逻辑
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {  //单词结束,更新该长度单词数的记录
//			state = OUT;
//			if (nc > 0) {
//				if (nc < MAXWORD) {  //如果单词长度未超过11个字母，则在对应长度处计数+1
//					++wl[nc];
//				}
//				else {  //单词长度超过最大长度限制，超长单词数+1
//					++ovflow;
//				}
//			}
//			nc = 0; //准备对下一单词长度计数，将计数器重置为0
//		}
//		else if (state = OUT) {  //检查到单词首字母，开始对单词长度计数
//			state = IN;
//			nc = 1;
//		}
//		else {  //单词中对单词长度计数
//			++nc;
//		}
//	}
//
//	//对maxvalue初始化
//	maxvalue = 0;
//	//检查实际的maxvalue值，并将其赋给maxvalue
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//打印直方图
//	for (i = 1; i < MAXWORD; ++i) { //单词长度未超过11个字母的情况，从1个字母的单词开始绘制
//		printf("%5d - %5d:", i, wl[i]);//打印单词长度及该长度单词的个数
//
//		//计算该长度单词对应直方图的长度（在直方图最大长度中应占的比例）
//		if (wl[i] > 0) {
//			if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {//如果该长度单词的数量较少导致对应长度未达到1，但又不应为0，则至少将长度记为1（画一个*）
//				len = 1; //
//			}
//		}
//		else { //如果该长度单词数为0，则对应直方图长度为0
//			len = 0;
//		}
//		
//		//打印与长度相应个数的*
//		while (len > 0) {
//			putchar('*');
//			--len;
//		}
//		putchar('\n'); //该长度单词的直方图绘制结束，换行打印下一长度单词的直方图
//	}
//	if (ovflow > 0) { //如果存在长度超过11个字母的单词则需对其进行说明
//		printf("这里有%d个单词长度超过%d个字母\n", ovflow, MAXWORD-1);
//	}
//}



//绘制垂直直方图

//方法一
//#define MAXHIST 15 //直方图的最大长度
//#define MAXWORD 11 //单个单词的最大长度
//#define OUT 0 //在单词外
//#define IN 1 //在单词内
//
//main() {
//	//定义所需变量
//	int c, i, nc, state;
//	int len; //每条直方图的长度
//	int maxvalue; //wl[]中的最大值（某特定长度单词的个数最多，maxvalue记录其个数）
//	int ovflow; //超长单词的数量
//	int wl[MAXWORD]; //特定长度单词个数计数器
//	int lenth[MAXWORD];  //记录各个长度单词对应的直方图长度
//
//	//变量初始化
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i) {
//		wl[i] = 0;
//		lenth[i] = 0;
//	}
//
//	//单词长度与特定长度单词数的计数逻辑
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {  //单词结束,更新该长度单词数的记录
//			state = OUT;
//			if (nc > 0) {
//				if (nc < MAXWORD) {  //如果单词长度未超过11个字母，则在对应长度处计数+1
//					++wl[nc];
//				}
//				else {  //单词长度超过最大长度限制，超长单词数+1
//					++ovflow;
//				}
//			}
//			nc = 0; //准备对下一单词长度计数，将计数器重置为0
//		}
//		else if (state = OUT) {  //检查到单词首字母，开始对单词长度计数
//			state = IN;
//			nc = 1;
//		}
//		else {  //单词中对单词长度计数
//			++nc;
//		}
//	}
//
//	//对maxvalue初始化
//	maxvalue = 0;
//	//检查实际的maxvalue值，并将其赋给maxvalue
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//计算各单词对应直方图长度(在本题中其实没必要，可优化，见方法二）
//	for (i = 1; i < MAXWORD; ++i) {
//		//计算该长度单词对应直方图的长度（在直方图最大长度中应占的比例）
//			if (wl[i] > 0) {
//				if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {//如果该长度单词的数量较少导致对应长度未达到1，但又不应为0，则至少将长度记为1（画一个*）
//					len = 1; //
//				}
//			}
//			else { //如果该长度单词数为0，则对应直方图长度为0
//				len = 0;
//			}
//			lenth[i] = len;		
//	}
//
//	//打印直方图
//	for (int a = 1; a <= MAXHIST;++a) { //a为直方图的行数，逐行打印
//		for (i = 1; i<MAXWORD;++i) { //i为单词长度，依次判断各长度单词的情况
//			if (lenth[i] - (MAXHIST - a) > 0) { //根据该长度单词对应的直方图长度判断是否应在此行绘图
//				printf("%4c\t",'*');//长度够，绘图
//			}
//			else {
//				printf("%4c\t",' ');//长度未达到该行，不绘图
//			}
//		}
//		printf("\n");
//	}
//	for (i = 1; i < MAXWORD; ++i) {
//		printf("%4d\t", i);
//	}
//	printf("\n");
//	for (i = 1; i < MAXWORD; ++i) {
//		printf("%4d\t", wl[i]);
//	}
//	printf("\n");
//	if (ovflow > 0) { //如果存在长度超过10个字母的单词则需对其进行说明
//		printf("\n这里有%d个单词长度超过%d个字母\n", ovflow, MAXWORD-1);
//	}
//}

//方法二，即课本答案(比我的答案更好）
//#define MAXHIST 15  //直方图最大长度
//#define MAXWORD 11  //单个单词最长长度
//#define IN 1  //在单词内
//#define OUT 0  //在单词外
//
////打印垂直直方图
//main() {
//	//定义变量及变量初始化
//	int c, i, j, nc, state;
//	int maxvalue;
//	int ovflow;
//	int wl[MAXWORD];
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i) {
//		wl[i] = 0;
//	}
//
//	//统计数据
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {
//			state = OUT;
//			if (nc > 0) {
//				if (nc < MAXWORD) {
//					++wl[nc];
//				}
//				else{
//					++ovflow;
//				}
//				nc = 0;
//			}
//		}
//		else if (state == OUT) {
//			state = IN;
//			nc = 1;
//		}
//		else {
//			++nc;
//		}
//		
//	}
//
//	//根据统计数据为maxvalue赋值
//	maxvalue = 0;
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//打印直方图 方法一中我自己的尝试陷入了思维定式，其实完全不需要统计len，len的存在是为了判断在该行是否应该画*，课本答案只用了一个变量就搞定了，我做的过于复杂
//	for (i = MAXHIST; i > 0; --i) {
//		for (j = 1; j < MAXWORD; ++j) {
//			if (wl[j] * MAXHIST / maxvalue >= i) {
//				printf("%4c\t",'*');
//			}
//			else {
//				printf("%4c\t",' ');
//			}
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i < MAXWORD; ++i) {
//		printf("%4d\t", i);
//	}
//	printf("\n");
//	for (i = 1; i < MAXWORD; ++i) {
//		printf("%4d\t", wl[i]);
//	}
//	printf("\n");
//	if (ovflow > 0) {
//		printf("有%d个单词长度超过%d个字母", ovflow, MAXWORD - 1);
//	}
//}


//练习1-14：编写程序打印输入中各个字符出现频度的直方图
//#include<ctype.h>
//
//#define MAXHIST 15
////#define MAXCHAR 128  //绘水平直方图时使用
//#define MAXCHAR 10 //绘垂直直方图时使用
//
//main() {
//	int c, i;
//	int len;
//	int maxvalue;
//	int cc[MAXCHAR];
//
//	for (i = 0; i < MAXCHAR; ++i) {
//		cc[i] = 0;
//	}
//
//	//绘制水平直方图时使用
//	/*while ((c = getchar()) != EOF) {
//		if (c < MAXCHAR) {
//			++cc[c];
//		}
//	}*/
//	
//	//绘制垂直直方图时使用
//	while ((c = getchar()) != EOF) {
//		if (c < MAXCHAR + 96 && c>96) {
//			++cc[c - 96];
//		}
//	}
//
//	maxvalue = 0;
//	for (i = 1; i < MAXCHAR; ++i) {
//		if (maxvalue < cc[i]) {
//			maxvalue = cc[i];
//		}
//	}
//
//	//绘制水平直方图
//	//方法一
//	//for (i = 1; i < MAXCHAR; ++i) {
//	//	//打印表头
//	//	if (isprint(i)) {
//	//		printf("%5d-%c-%5d:\t", i, i, cc[i]);
//	//	}
//	//	else {
//	//		printf("%5d-  %5d:\t", i, cc[i]);
//	//	}
//	//	//打印图
//	//	if ((len = cc[i] * MAXHIST / maxvalue) > 0) {
//	//		for (; len > 0; --len) {
//	//			printf("*");
//	//		}
//	//	}
//	//	else if (cc[i] > 0) {
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//	//方法二
//	//for (i = 1; i < MAXCHAR; ++i) {
//	//	//打印表头
//	//	if (isprint(i)) {
//	//		printf("%5d-%c-%5d:\t", i, i, cc[i]);
//	//	}
//	//	else {
//	//		printf("%5d-  %5d:\t", i, cc[i]);
//	//	}
//	//	//打印图
//	//	if (cc[i] > 0) {
//	//		if ((len = cc[i] * MAXHIST / maxvalue) <= 0) {
//	//			len = 1;
//	//		}
//	//	}
//	//	else {
//	//		len = 0;
//	//	}
//	//	while (len > 0) {
//	//		printf("*");
//	//		--len;
//	//	}
//	//	printf("\n");
//	//}
//
//	//绘制垂直直方图
//	//这里书中只给出了水平直方图的代码，所以一下代码仅有我给出的答案
//	//垂直直方图中如果MAXCHAR设置为128太夸张，屏幕放不下，所以把MAXCHAR改动一下
//	
//	//打印图
//	int j;
//	for (j = MAXHIST; j > 0; --j) {
//		for (i = 1; i < MAXCHAR; ++i) {
//			if (cc[i] > 0) {
//				if (cc[i] * MAXHIST / maxvalue >= j) {
//					printf("   *\t");
//				}
//				else {
//					printf("    \t");
//				}
//			}
//			else {
//				printf("    \t");
//			}
//		}
//		printf("\n");
//	}
//
//	//打印表头
//	for (i = 1; i < MAXCHAR; ++i) {
//		if (isprint(i+96)) {
//			printf("%1d-%c-%2d\t", i, 96+i, cc[i]);
//		}
//		else {
//			printf("%1d- -%2d\t", i, cc[i]);
//		}
//	}
//	printf("\n");
//}


//1.7函数

//int power(int m, int n);
//
//main() {
//	int i;
//	for (i = 0; i < 10; ++i) {
//		printf("%d %d %d\n", i, power(2, i), power(-3, i));
//	}
//
//	return 0;
//}
//
//int power(int base, int n) {
//	int i, p;
//	p = 1;
//	for (i = 1; i <= n; ++i) {
//		p = p * base;
//	}
//	return p;
//}


//练习1-15用函数实现温度转换计算

//double Trans_to_celsius(double n);
//double Trans_to_fahr(double celsius);
//
//main() {
//	double i, step=20;
//	printf("华氏度转摄氏度对照表\n");
//	for (i = 0; i <= 200; i+=step) {
//		printf("%3.1f\t%3.1f\n", i, Trans_to_celsius(i));
//	}
//	printf("\n\n");
//	printf("摄氏度转华氏度对照表\n");
//	for (i = -100; i <= 100; i += step) {
//		printf("%3.1f\t%3.1f\n", i, Trans_to_fahr(i));
//	}
//}
//
//double Trans_to_celsius(double fahr) {
//	double celsius;
//	celsius = 5.0 / 9.0 * (fahr - 32.0);
//	return celsius;
//}
//
//double Trans_to_fahr(double celsius) {
//	double fahr;
//	fahr = celsius * 9.0 / 5.0 + 32.0;
//	return fahr;
//}


//1.8 参数——传值调用

//int power(int base, int n) { //传值调用 函数power并不访问变量n本身，而是通过一个本地的临时量（局部变量）获得n的值，因此在power内改变n的值并不会导致函数外变量n发生变化
//	int p;
//	for (p = 1; n > 0; --n) {
//		p = p * base;
//	}
//	return p;
//}


//1.9 字符数组

#define MAXLINE 1000 //允许输入的最大行

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//打印最大的输入行
main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}