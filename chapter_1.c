#include<stdio.h>

//1.2�������������ʽ

//main() {
//	float fahr, celsius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//	fahr = lower;
//	printf("�����¶ȶ�Ӧ�����¶�ת����\n");
//	printf("%3s\t%6s\n", "���϶�", "���϶�");
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
//	printf("�����¶ȶ�Ӧ�����¶�ת����\n");
//	printf("%3s\t%6s\n", "���϶�", "���϶�");
//	while (celsius <= upper) {
//		
//		fahr = celsius * 9.0 / 5.0 + 32.0;
//		printf("%3.0f\t%6.1f\n", celsius,fahr);
//		celsius = celsius + step;
//	}
//}



//1.3 for��� && 1.4 ���ų���

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




//1.5 �ַ�����/���


//main() {
//	char c = getchar();
//	putchar(c);
//}

//main() {
//	int c;
//	while ((c = getchar()) != EOF)
//		putchar(c);
//}

//��ϰ1-7���EOF��ֵ
//main() {
//	printf("%d",EOF);
//}

//ͳ��������ַ������汾1
//main() {
//	long nc;
//
//	nc = 0;
//	while (getchar() != EOF)
//		++nc;
//	printf("%ld\n", nc);
//}

//ͳ��������ַ������汾2
//main() {
//	double nc;
//	for (nc = 0; getchar() != EOF; ++nc) {
//		
//	}
//	printf("%3.0f\n", nc);
//}


//ͳ�����������
//main() {
//	int c, nl=0;
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			++nl;
//	printf("%d\n", nl);
//}


//ͳ�ƿո��Ʊ���뻻�з�����
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



//�����븴�Ƶ�������������������Ķ���ո���һ���ո����
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
//}//����һ

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
//}//������



//�����븴�Ƶ�������������е��Ʊ���滻Ϊ\t�������˷��滻Ϊ\b������б���滻Ϊ\\��
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



//1.5.4���ʼ���


//#define IN 1 //�ڵ�����
//#define OUT 0 //�ڵ�����
//
////ͳ����������������������ַ���
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


//��ÿ��һ�����ʵ���ʽ��ӡ������
//#define OUT 0
//#define IN 1
//
//main() {
//	int c,state=OUT;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {//���ʽ���
//			printf("\n");
//			state = OUT;
//		}
//		else if (state == OUT) {//���ʿ�ʼ
//			state = IN;
//			putchar(c);
//		}
//		else {//������
//			putchar(c);
//		}
//	}
//}//����һ

//main() {
//	int c, state;
//
//	state = OUT;
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\t' || c == '\n') {
//			if (state == IN) {//���ʽ���
//				putchar('\n');
//				state = OUT;
//			}
//		}else if (state == OUT) {//���ʿ�ʼ
//			state = IN;
//			putchar(c);
//		}else {//�����м�
//			putchar(c);
//		}
//	}
//}//������



//1.6����

//ͳ�Ƹ������֡��հ׷��������ַ����ֵĴ���
//main() {
//	//�������
//	int c, i, nwhite, nother;
//	int ndigit[10];
//
//	//�����������ʼ��
//	nwhite = nother = 0;
//	for (i = 0; i < 10; ++i) {
//		ndigit[i] = 0;
//	}
//
//	//�����߼�
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
//	//��ӡ�������
//	printf("digits=");
//	for (i = 0; i < 10; ++i) {
//		printf("%d",ndigit[i]);
//	}
//
//	printf(",white space=%d,other=%d\n", nwhite, nother);
//}


//��ϰ1-13����д�����ӡ�����е��ʳ��ȵ�ֱ��ͼ��ˮƽ�����ֱ��ͼ�Ƚ����׻��ƣ���ֱ�����ֱ��ͼ��Ҫ����Щ��

//#define MAXHIST 15 //ֱ��ͼ����󳤶�
//#define MAXWORD 11 //�������ʵ���󳤶�
//#define OUT 0 //�ڵ�����
//#define IN 1 //�ڵ�����
//
////��ӡˮƽֱ��ͼ
//main() {
//	//�����������
//	int c, i, nc, state;
//	int len; //ÿ��ֱ��ͼ�ĳ���
//	int maxvalue; //wl[]�е����ֵ��ĳ�ض����ȵ��ʵĸ�����࣬maxvalue��¼�������
//	int ovflow; //�������ʵ�����
//	int wl[MAXWORD]; //�ض����ȵ��ʸ���������
//	
//	//������ʼ��
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i) {
//		wl[i] = 0;
//	}
//
//	//���ʳ������ض����ȵ������ļ����߼�
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {  //���ʽ���,���¸ó��ȵ������ļ�¼
//			state = OUT;
//			if (nc > 0) {
//				if (nc < MAXWORD) {  //������ʳ���δ����11����ĸ�����ڶ�Ӧ���ȴ�����+1
//					++wl[nc];
//				}
//				else {  //���ʳ��ȳ�����󳤶����ƣ�����������+1
//					++ovflow;
//				}
//			}
//			nc = 0; //׼������һ���ʳ��ȼ�����������������Ϊ0
//		}
//		else if (state = OUT) {  //��鵽��������ĸ����ʼ�Ե��ʳ��ȼ���
//			state = IN;
//			nc = 1;
//		}
//		else {  //�����жԵ��ʳ��ȼ���
//			++nc;
//		}
//	}
//
//	//��maxvalue��ʼ��
//	maxvalue = 0;
//	//���ʵ�ʵ�maxvalueֵ�������丳��maxvalue
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//��ӡֱ��ͼ
//	for (i = 1; i < MAXWORD; ++i) { //���ʳ���δ����11����ĸ���������1����ĸ�ĵ��ʿ�ʼ����
//		printf("%5d - %5d:", i, wl[i]);//��ӡ���ʳ��ȼ��ó��ȵ��ʵĸ���
//
//		//����ó��ȵ��ʶ�Ӧֱ��ͼ�ĳ��ȣ���ֱ��ͼ��󳤶���Ӧռ�ı�����
//		if (wl[i] > 0) {
//			if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {//����ó��ȵ��ʵ��������ٵ��¶�Ӧ����δ�ﵽ1�����ֲ�ӦΪ0�������ٽ����ȼ�Ϊ1����һ��*��
//				len = 1; //
//			}
//		}
//		else { //����ó��ȵ�����Ϊ0�����Ӧֱ��ͼ����Ϊ0
//			len = 0;
//		}
//		
//		//��ӡ�볤����Ӧ������*
//		while (len > 0) {
//			putchar('*');
//			--len;
//		}
//		putchar('\n'); //�ó��ȵ��ʵ�ֱ��ͼ���ƽ��������д�ӡ��һ���ȵ��ʵ�ֱ��ͼ
//	}
//	if (ovflow > 0) { //������ڳ��ȳ���11����ĸ�ĵ�������������˵��
//		printf("������%d�����ʳ��ȳ���%d����ĸ\n", ovflow, MAXWORD-1);
//	}
//}



//���ƴ�ֱֱ��ͼ

//����һ
//#define MAXHIST 15 //ֱ��ͼ����󳤶�
//#define MAXWORD 11 //�������ʵ���󳤶�
//#define OUT 0 //�ڵ�����
//#define IN 1 //�ڵ�����
//
//main() {
//	//�����������
//	int c, i, nc, state;
//	int len; //ÿ��ֱ��ͼ�ĳ���
//	int maxvalue; //wl[]�е����ֵ��ĳ�ض����ȵ��ʵĸ�����࣬maxvalue��¼�������
//	int ovflow; //�������ʵ�����
//	int wl[MAXWORD]; //�ض����ȵ��ʸ���������
//	int lenth[MAXWORD];  //��¼�������ȵ��ʶ�Ӧ��ֱ��ͼ����
//
//	//������ʼ��
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i) {
//		wl[i] = 0;
//		lenth[i] = 0;
//	}
//
//	//���ʳ������ض����ȵ������ļ����߼�
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {  //���ʽ���,���¸ó��ȵ������ļ�¼
//			state = OUT;
//			if (nc > 0) {
//				if (nc < MAXWORD) {  //������ʳ���δ����11����ĸ�����ڶ�Ӧ���ȴ�����+1
//					++wl[nc];
//				}
//				else {  //���ʳ��ȳ�����󳤶����ƣ�����������+1
//					++ovflow;
//				}
//			}
//			nc = 0; //׼������һ���ʳ��ȼ�����������������Ϊ0
//		}
//		else if (state = OUT) {  //��鵽��������ĸ����ʼ�Ե��ʳ��ȼ���
//			state = IN;
//			nc = 1;
//		}
//		else {  //�����жԵ��ʳ��ȼ���
//			++nc;
//		}
//	}
//
//	//��maxvalue��ʼ��
//	maxvalue = 0;
//	//���ʵ�ʵ�maxvalueֵ�������丳��maxvalue
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//��������ʶ�Ӧֱ��ͼ����(�ڱ�������ʵû��Ҫ�����Ż�������������
//	for (i = 1; i < MAXWORD; ++i) {
//		//����ó��ȵ��ʶ�Ӧֱ��ͼ�ĳ��ȣ���ֱ��ͼ��󳤶���Ӧռ�ı�����
//			if (wl[i] > 0) {
//				if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {//����ó��ȵ��ʵ��������ٵ��¶�Ӧ����δ�ﵽ1�����ֲ�ӦΪ0�������ٽ����ȼ�Ϊ1����һ��*��
//					len = 1; //
//				}
//			}
//			else { //����ó��ȵ�����Ϊ0�����Ӧֱ��ͼ����Ϊ0
//				len = 0;
//			}
//			lenth[i] = len;		
//	}
//
//	//��ӡֱ��ͼ
//	for (int a = 1; a <= MAXHIST;++a) { //aΪֱ��ͼ�����������д�ӡ
//		for (i = 1; i<MAXWORD;++i) { //iΪ���ʳ��ȣ������жϸ����ȵ��ʵ����
//			if (lenth[i] - (MAXHIST - a) > 0) { //���ݸó��ȵ��ʶ�Ӧ��ֱ��ͼ�����ж��Ƿ�Ӧ�ڴ��л�ͼ
//				printf("%4c\t",'*');//���ȹ�����ͼ
//			}
//			else {
//				printf("%4c\t",' ');//����δ�ﵽ���У�����ͼ
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
//	if (ovflow > 0) { //������ڳ��ȳ���10����ĸ�ĵ�������������˵��
//		printf("\n������%d�����ʳ��ȳ���%d����ĸ\n", ovflow, MAXWORD-1);
//	}
//}

//�����������α���(���ҵĴ𰸸��ã�
//#define MAXHIST 15  //ֱ��ͼ��󳤶�
//#define MAXWORD 11  //�������������
//#define IN 1  //�ڵ�����
//#define OUT 0  //�ڵ�����
//
////��ӡ��ֱֱ��ͼ
//main() {
//	//���������������ʼ��
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
//	//ͳ������
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
//	//����ͳ������Ϊmaxvalue��ֵ
//	maxvalue = 0;
//	for (i = 1; i < MAXWORD; ++i) {
//		if (wl[i] > maxvalue) {
//			maxvalue = wl[i];
//		}
//	}
//
//	//��ӡֱ��ͼ ����һ�����Լ��ĳ���������˼ά��ʽ����ʵ��ȫ����Ҫͳ��len��len�Ĵ�����Ϊ���ж��ڸ����Ƿ�Ӧ�û�*���α���ֻ����һ�������͸㶨�ˣ������Ĺ��ڸ���
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
//		printf("��%d�����ʳ��ȳ���%d����ĸ", ovflow, MAXWORD - 1);
//	}
//}


//��ϰ1-14����д�����ӡ�����и����ַ�����Ƶ�ȵ�ֱ��ͼ
//#include<ctype.h>
//
//#define MAXHIST 15
////#define MAXCHAR 128  //��ˮƽֱ��ͼʱʹ��
//#define MAXCHAR 10 //�洹ֱֱ��ͼʱʹ��
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
//	//����ˮƽֱ��ͼʱʹ��
//	/*while ((c = getchar()) != EOF) {
//		if (c < MAXCHAR) {
//			++cc[c];
//		}
//	}*/
//	
//	//���ƴ�ֱֱ��ͼʱʹ��
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
//	//����ˮƽֱ��ͼ
//	//����һ
//	//for (i = 1; i < MAXCHAR; ++i) {
//	//	//��ӡ��ͷ
//	//	if (isprint(i)) {
//	//		printf("%5d-%c-%5d:\t", i, i, cc[i]);
//	//	}
//	//	else {
//	//		printf("%5d-  %5d:\t", i, cc[i]);
//	//	}
//	//	//��ӡͼ
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
//	//������
//	//for (i = 1; i < MAXCHAR; ++i) {
//	//	//��ӡ��ͷ
//	//	if (isprint(i)) {
//	//		printf("%5d-%c-%5d:\t", i, i, cc[i]);
//	//	}
//	//	else {
//	//		printf("%5d-  %5d:\t", i, cc[i]);
//	//	}
//	//	//��ӡͼ
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
//	//���ƴ�ֱֱ��ͼ
//	//��������ֻ������ˮƽֱ��ͼ�Ĵ��룬����һ�´�������Ҹ����Ĵ�
//	//��ֱֱ��ͼ�����MAXCHAR����Ϊ128̫���ţ���Ļ�Ų��£����԰�MAXCHAR�Ķ�һ��
//	
//	//��ӡͼ
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
//	//��ӡ��ͷ
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


//1.7����

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


//��ϰ1-15�ú���ʵ���¶�ת������

//double Trans_to_celsius(double n);
//double Trans_to_fahr(double celsius);
//
//main() {
//	double i, step=20;
//	printf("���϶�ת���϶ȶ��ձ�\n");
//	for (i = 0; i <= 200; i+=step) {
//		printf("%3.1f\t%3.1f\n", i, Trans_to_celsius(i));
//	}
//	printf("\n\n");
//	printf("���϶�ת���϶ȶ��ձ�\n");
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


//1.8 ����������ֵ����

//int power(int base, int n) { //��ֵ���� ����power�������ʱ���n��������ͨ��һ�����ص���ʱ�����ֲ����������n��ֵ�������power�ڸı�n��ֵ�����ᵼ�º��������n�����仯
//	int p;
//	for (p = 1; n > 0; --n) {
//		p = p * base;
//	}
//	return p;
//}


//1.9 �ַ�����

//#define MAXLINE 1000 //���������һ�е���󳤶�
//
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);
//
////��ӡ����������
//main() {
//	int len;//��ǰ�г���
//	int max;//ĿǰΪֹ����г���
//	char line[MAXLINE];//��ǰ������
//	char longest[MAXLINE];//ĿǰΪֹ���������
//
//	max = 0;
//	while ((len = getline(line, MAXLINE)) > 0) {//�������г��ȴ���0ʱ��ִ�и�ѭ�������г���Ϊ1��ͬ��ִ�У�
//		if (len > max) {//�����ǰ�г��ȳ����Ѿ���������У����������Ȳ���longest�м�¼�����ݸ���
//			max = len;
//			copy(longest, line);
//		}
//	}
//	if (max > 0) {//������ڣ����������ݣ����max=0����˵��û�������κ��У���˲����������
//		printf("%s", longest);
//	}
//	return 0;
//}
//
//int getline(char s[], int lim) {//���ظ��г��ȣ�����¼��������
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {//��¼�������У�δ�����ȣ��޽��������޻��з���������������֮һ���жϸ��н�����������һ����
//		s[i] = c;
//	}
//	if (c == '\n') {//��¼���з��������Ϊ���У������л��з������������Լ�¼�������ݣ������з�������¼����Ϊ1
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';//�������б�ǽ���
//	return i;//���س���
//}
//
//void copy(char to[], char from[]) {//��from[]�����е����ݸ��Ƶ�to[]������
//	int i;
//
//	i = 0;
//	while ((to[i] = from[i]) != '\0') {
//		++i;
//	}
//}


//��ϰ1-16��ӡ���ⳤ�ȵ������еĳ���

//#define MAXLINE 1000 //���������һ�е���󳤶�
//
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);
//
////��ӡ����������
//main() {
//	int len;//��ǰ�г���
//	int max;//ĿǰΪֹ����г���
//	char line[MAXLINE];//��ǰ������
//	char longest[MAXLINE];//ĿǰΪֹ���������
//	max = 0;
//	while ((len = getline(line, MAXLINE)) > 0) {//�������г��ȴ���0ʱ��ִ�и�ѭ�������г���Ϊ1��ͬ��ִ�У�
//		printf("%d,%s", len, line);
//		if (len > max) {//�����ǰ�г��ȳ����Ѿ���������У����������Ȳ���longest�м�¼�����ݸ���
//			max = len;
//			copy(longest, line);
//		}
//	}
//	if (max > 0) {
//		printf("%s", longest);
//	}
//	return 0;
//}
//
//int getline(char s[], int lim) {//���ظ��г��ȣ�����¼��������
//	int c, i,j=0;//����j���ڼ�¼�����Ƶ��ַ���s�е��ַ��ĸ�����i���ڼ�¼���ȣ���������ַ������ȳ���maxlineʱ���߽���������
//
//	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {//��¼�������У��޽��������޻��з���������������֮һ���жϸ��н�����������һ������i��������¼���г��ȼ�ʹ���ȳ�����maxline
//		if (i < lim - 2) {//ʵ����ĿҪ�󡰾����ܶ�Ĵ�ӡ�ı���������maxline�Ĳ��������������еĲ���ȫ����ӡ��
//			s[j] = c;
//			++j; 
//		}
//	}
//	if (c == '\n') {//��¼���з��������Ϊ���У������л��з������������Լ�¼�������ݣ������з�������¼����Ϊ1
//		s[j] = c;
//		++j;
//		++i;
//	}
//	s[j] = '\0';//�������б�ǽ���
//	return i;//���س��ȣ�������г��ȴ���maxlineͬ���ܷ�����ʵ���ȣ�
//}

//void copy(char to[], char from[]) {//��from[]�����е����ݸ��Ƶ�to[]������
//	int i;
//
//	i = 0;
//	while ((to[i] = from[i]) != '\0') {
//		++i;
//	}
//}

//��ϰ1-17 ��ӡ���ȴ���80���ַ�������������
//#define MAXLINE 1000
//#define LONGLINE 80
//
//int getline(char line[], int maxline);
//
//main() {
//	int len;
//	char line[MAXLINE];
//
//	while ((len = getline(line, MAXLINE)) > 0) {
//		if (len > LONGLINE) {
//			printf("%s", line);
//		}
//	}
//	return 0;
//}
//
//int getline(char s[], int lim) {//���ظ��г��ȣ�����¼��������
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {//��¼�������У�δ�����ȣ��޽��������޻��з���������������֮һ���жϸ��н�����������һ����
//		s[i] = c;
//	}
//
//	if (c =='\n') {//��¼���з��������Ϊ���У������л��з������������Լ�¼�������ݣ������з�������¼����Ϊ1
//		s[i] = c;
//		++i;
//	}
//
//	s[i] = '\0';//��ǽ���
//	return i;//���س���
//}

//��ϰ1-18 ɾ��ÿ��������ĩβ�Ŀո��Ʊ������ɾ����ȫ�ǿո����
//#define MAXLINE 1000
//int getline(char line, int maxline);
//int remove(char s[]);
//
//main() {
//	char line[MAXLINE];
//
//	while (getline(line, MAXLINE) > 0) {
//		if (remove(line) > 0) {//���ĳ��ȫΪ�ո�remove�᷵��-1.�˴�������Ϊfalse
//			printf("%s", line);//��ӡ�����޸ĺ���У������ȫΪ�ո�ᱻ����
//		}
//	}
//	return 0;
//}
//
//int getline(char s[], int lim) {//���ظ��г��ȣ�����¼��������
//	int c, i,j=0;
//	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {//��¼�������У�δ�����ȣ��޽��������޻��з���������������֮һ���жϸ��н�����������һ����
//		if(i<lim-2){
//			s[j] = c;
//			++j;
//		}
//	}
//	if (c =='\n') {//��¼���з��������Ϊ���У������л��з������������Լ�¼�������ݣ������з�������¼����Ϊ1
//		s[j] = c;
//		++j;
//		++i;
//	}
//	s[j] = '\0';//��ǽ���
//	return i;//���س���
//}
//
//int remove(char s[]) {
//	int i=0;
//	//��iָ����β�Ļ��з�
//	while (s[i] != '\n') {
//		++i;
//	}
//	//��iָ�����һ���ǿո��ַ�
//	--i;
//	while ((s[i] == ' ' || s[i] == '\t')&&i>=0) {
//		--i;
//	}
//	//�����з��ͽ������������һ����Ч�ַ���
//	if (i >= 0) {
//		++i;
//		s[i] = '\n';
//		++i;
//		s[i] = '\0';
//	}
//	return i;//�����޸ĺ���еĳ���
//}


//��ϰ1-19 ��д����reverse(s)�����ַ���s�е��ַ�˳��ߵ�������ʹ�øú�����дһ������ÿ�εߵ�һ���������е��ַ�˳��
//#define MAXLINE 1000
//
//main() {
//	char line[MAXLINE];
//	void reverse(char line[]);
//
//	while (getline(line,MAXLINE) > 0) {	
//			reverse(line);
//			printf("%s", line);
//	}
//}
//
//int getline(char s[], int lim) {
//	int i, c,j=0;
//	for (i = 0; (c = getchar()) != EOF && c != '\n';++i) {
//		if (i < lim - 2) {
//			s[j] = c;
//			++j;
//		}
//	}
//	if (c == '\n') {
//		s[j] =c;
//		++j;
//		++i;
//	}
//	s[j] = '\0';
//	return i;
//}
//
//void reverse(char s[]) {
//	int i, j;
//	char temp;
//	i = 0;
//	while (s[i] != '\0') {
//		++i;
//	}
//	--i;
//	if (s[i] == '\n') {
//		--i;
//	}
//	j = 0;
//	while (j < i) {
//		temp = s[j];
//		s[j] = s[i];
//		s[i] = temp;
//		--i;
//		++j;
//	}
//}



//1.10�ⲿ������������

//��д1.9�еĳ��򣬽�line��longest��max����Ϊ�ⲿ����
//��γ���û��1.9�еĳ���ã���Ϊ���ｫmax��line��longest������Ϊ���ⲿ�������ں�����ֱ�Ӳ����⼸����������˺���getline��copyʧȥ��ͨ���ԣ�����ʹ���ⲿ����Ҳ�����˷���
//#define MAXLINE 1000
//
//int max;
//char line[MAXLINE];
//char longest[MAXLINE];
//
//int getline(void);
//void copy(void);
//
//main() {
//	int len;
//	extern int max;
//	extern char longest[];
//
//	max = 0;
//	while ((len = getline()) > 0) {
//		if (len > max) {
//			max = len;
//			copy();
//		}
//	}
//	if (max > 0) {
//		printf("%d,%s",max, longest);
//	}
//	return 0;
//}
//
//int getline(void) {
//	int c, i;
//	extern char line[];
//
//	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n';++i) {
//		line[i] = c;
//	}
//	if (c = '\n') {
//		line[i] = c;
//		++i;
//	}
//	line[i] = '\0';
//	return i;
//}
//
//void copy(void) {
//	int i;
//	extern char line[], longest[];
//	for (i = 0; (longest[i] = line[i]) != '\0'; ++i) {
//
//	}
//}


//��ϰ1-20 ��дdetab���򣬽������е��Ʊ���滻���ʵ���Ŀ�Ŀո�ʹ�ո��������һ���Ʊ����ֹλ�ĵط���
//�����Ʊ����ֹλ��λ���ǹ̶��ģ�����ÿ��n�оͻ����һ���Ʊ����ֹλ��nӦ����Ϊ�������Ƿ��ų�����
//#define TABINC 8
//
//main() {
//	int c, nb, pos;
//
//	nb = 0;//��¼��Ҫ�Ŀո����
//	pos = 1;//��¼�ַ��ڸ����е�λ��
//	while ((c = getchar()) != EOF) {
//		if (c == '\t') { //�������tab
//			nb = TABINC - (pos - 1) % TABINC;//������Ҫ�Ŀո����
//			while (nb > 0) {
//				putchar(' ');
//				++pos;
//				--nb;
//			}
//		}
//		else if (c == '\n') {//������ֻ��з�
//			putchar(c);//��ӡ���з�
//			pos = 1;//�����ַ�����λ��
//		}
//		else {//��ͨ�ַ�������ӡ
//			putchar(c);
//			++pos;
//		}
//	}
//}


//��ϰ1-21 ��д����entab�����ո��滻Ϊ�����������Ʊ���Ϳո񣬵�Ҫ���ֵ���֮��ļ�����䡣
// �����Ʊ����ֹλ��λ������ϰ1-20��detab����������ͬ����ʹ��һ���Ʊ������һ���ո񶼿��Ե�����һ���Ʊ����ֹλʱ��ѡ�������滻�ַ��ȽϺã�
//#define TABINC 8
//
//main() {
//	int c, nb, nt, pos;
//
//	nb = 0;
//	nt = 0;
//	for (pos = 1; (c = getchar()) != EOF; ++pos) {
//		if (c == ' ') {
//			if (pos % TABINC != 0) {
//				++nb;
//			}
//			else {
//				nb = 0;
//				++nt;
//			}
//		}
//		else {
//			for (; nt > 0; --nt) {
//				putchar('\t');
//			}
//			if (c == '\t') {
//				nb = 0;
//			}
//			else {
//				for (; nb > 0; --nb) {
//					putchar(' ');
//				}
//			}
//			putchar(c);
//			if (c == '\n') {
//				pos = 0;
//			}
//			else if (c == '\t') {
//				pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
//			}
//		}
//	}
//}


//��ϰ1-22 ��д����ѽϳ����������۳ɶ�һЩ�����л���У����е�λ���������еĵ�n��֮ǰ�����һ���ǿո�֮�� 
//Ҫ��֤�����ܹ����ܵش��������кܳ��Լ���ָ������ǰû�пո���Ʊ���������

//#define MAXCOL 10
//#define TABINC 8
//
//char line[MAXCOL];
//
//int exptab(int pos);
//int findblnk(int pos);
//int newpos(int pos);
//void printl(int pos);
//
//main() {
//	int c, pos;
//
//	pos = 0;
//	while ((c = getchar()) != EOF) {
//		line[pos] = c;
//		if (c == '\t') {
//			pos = exptab(pos);
//		}
//		else if (c == '\n') {
//			printl(pos);
//			pos = 0;
//		}
//		else if (++pos >= MAXCOL) {
//			pos = findblnk(pos);
//			printl(pos);
//			pos = newpos(pos);
//		}
//	}
//}
//
//void printl(int pos) {
//	int i;
//	for (i = 0; i < pos; ++i) {
//		putchar(line[i]);
//	}
//	if (pos > 0) {
//		putchar('\n');
//	}
//}
//
//int exptab(int pos) {
//	line[pos] = ' ';
//	for (++pos; pos < MAXCOL && pos % TABINC != 0;++pos) {
//		line[pos]=' ';
//	}
//	if (pos < MAXCOL) {
//		return pos;
//	}
//	else {
//		printl(pos);
//		return 0;
//	}
//}
//
//int findblnk(int pos) {
//	while (pos > 0 && line[pos] != ' ') {
//		--pos;
//	}
//	if (pos == 0) {
//		return MAXCOL;
//	}
//	else {
//		return pos + 1;
//	}
//}
//
//int newpos(int pos) {
//	int i, j;
//
//	if (pos <= 0 || pos >= MAXCOL) {
//		return 0;
//	}
//	else {
//		i = 0;
//		for (j = pos; j < MAXCOL; ++j) {
//			line[i] = line[j];
//			++i;
//		}
//		return i;
//	}
//}


//��ϰ1-23 ��д����ɾ��C���Գ��������е�ע����䡣Ҫ��ȷ��������ŵ��ַ������ַ���������C�����У�ע�Ͳ�����Ƕ�ס�
//void rcomment(int c);
//void in_comment(void);
//void echo_quote(int c);
//
//main() {
//	int c, d;
//	while ((c = getchar()) != EOF) {
//		rcomment(c);
//	}
//	return 0;
//}
//
//void rcomment(int c) {
//	int d;
//
//	if (c == '/') {
//		if ((d = getchar()) == '*') {
//			in_comment();
//		}
//		else if (d == '/') {
//			putchar(c);
//			rcomment(d);
//		}
//		else {
//			putchar(c);
//			putchar(d);
//		}
//	}
//	else if (c == '\'' || c == '"') {
//		echo_quote(c);
//	}
//	else {
//		putchar(c);
//	}
//}
//
//void in_comment(void) {
//	int c, d;
//	c = getchar();
//	d = getchar();
//	while (c != '*' || d != '/') {
//		c = d;
//		d = getchar();
//	}
//}
//
//void echo_quote(int c) {
//	int d;
//
//	putchar(c);
//	while ((d = getchar()) != c) {
//		putchar(d);
//		if (d == '\\') {
//			putchar(getchar());
//		}
//	}
//	putchar(d);
//}


//��ϰ1-24 ��д�������C���Գ����еĻ����﷨������Բ���š������š������Ų���Եȡ�Ҫ��ȷ�������ţ����������ź�˫���ţ���ת���ַ�������ע�͡�

//int brace, brack, paren;
//
//void in_quote(int c);
//void in_comment(void);
//void search(int c);
//
//main() {
//	int c;
//	extern int brace, brack, paren;
//	while ((c = getchar()) != EOF) {
//		if (c == '/') {
//			if ((c = getchar()) == '*') {
//				in_comment();
//			}
//			else {
//				search(c);
//			}
//		}
//		else if (c == '\'' || c == '"') {
//			in_quote(c);
//		}
//		else {
//			search(c);
//		}
//
//		if (brace < 0) {
//			printf("Unbalanced brackets\n");
//			brace = 0;
//		}
//		else if (brack < 0) {
//			printf("Unbalanced brackets\n");
//			brack = 0;
//		}
//		else if (paren < 0) {
//			printf("Unbalanced parentheses\n");
//			paren = 0;
//			}
//	}
//	if (brace > 0) {
//		printf("Unbalanced braces\n");
//	}
//	if (brack > 0) {
//		printf("Unbalanced brackers\n");
//	}
//	if (paren > 0) {
//		printf("Unbalanced parentheses\n");
//	}
//}
//
//void search(int c) {
//	extern int brace, brack, paren;
//
//	if (c == '{') {
//		++brace;
//	}
//	else if (c == '}') {
//		--brace;
//	}
//	else if (c == '[') {
//		++brack;
//	}
//	else if (c == ']') {
//		--brack;
//	}
//	else if (c == '(') {
//		++paren;
//	}
//	else if (c == ')') {
//		--paren;
//	}
//}
//
//void in_comment(void) {
//	int c, d;
//	c = getchar();
//	d = getchar();
//	while (c != '*' || d != '/') {
//		c = d;
//		d = getchar();
//	}
//}
//
//void in_quote(int c) {
//	int d;
//	while ((d = getchar()) != c) {
//		if (d == '\\') {
//			getchar();
//		}
//	}
//}