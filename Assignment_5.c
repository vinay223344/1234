#include<stdio.h>
/*----------------------------------------------PROBLEM -1a-------------------------------------------------*/
//PROBLEM -1A :     1. Write a program to print the type(category) of user supplied char from stdin. The categories areNumeric/Uppercase/lowercase/spl char. (Write program using if/else)
void problem1a()
{
	char ch;
	__fpurge(stdin);
	printf("\nEnter any character : ");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
		printf("UPPER CASE");
	else if(ch>='a' && ch<='z')
		printf("LOWER CASE");
	else if(ch=='!' || ch=='@' || ch=='#' || ch=='_' || ch=='-' || ch=='$' || ch==' ')
		printf("Special Character");
	else if(ch>='0' && ch<='9')
		printf("Digits");
	else
		printf("Not a Character\n");
	return;
}
//OUTPUT :
/*
Enter your choice : 1

Enter any character : c
LOWER CASE
 */

/*----------------------------------------------PROBLEM -1b-------------------------------------------------*/
//PROBLEM 1B:     1. Write a program to print the type(category) of user supplied char from stdin. The categories areNumeric/Uppercase/lowercase/spl char. (Write program using conditional operator. )
void problem1b()
{
	char ch;
	__fpurge(stdin);
	printf("\nEnter any character : ");
	scanf("%c",&ch);

	printf("%s",(ch>='A' && ch<='Z')?"UPPER CASE": ((ch>='a' && ch<='z')?"LOWER CASE" : ((ch>='0' && ch<='9')?"DIGITS": ((ch=='!' || ch=='@' || ch=='#' || ch=='_' || ch=='-' || ch=='$' || ch==' ')?"SPECIAL CHARACTER":"Not a Character") )));
	return;
}
//OUTPUT:
/*
Enter your choice : 2

Enter any character : A
UPPER CASE
*/

/*----------------------------------------------PROBLEM -2-------------------------------------------------*/
void problem2()
{
	int num,pos;
	printf("Enter a Number and Position: ");
	scanf("%d %d",&num,&pos);

	printf("%d",(num>>(pos-1)&1));
	return;
}

//OUTPUT:
/*
Enter your choice : 3
Enter a Number and Position: 2 2
1
*/

/*----------------------------------------------PROBLEM -3-------------------------------------------------*/
void problem3()
{
	int x,y;
	printf("Enter x and y values: ");
	scanf("%d",&x);
	scanf("%d",&y);
	if(x%y == (y-(x/y)*x))
		printf("y-(x/y)*x");
	else if(x%y == (x-(x/y)*y))
		printf("x-(x/y)*y");
	else if(x%y == (x-(y/x)*x))
		printf("x-(y/x)*x");
	else if(x%y == (y-(y/x)*y))
		printf("y-(y/x)*y");
	return;
}
//EXPLANATION : DIVIDEND = DIVISOR X QUOTIENT + REMAINDER
//				   x     =    y    *   x/y    +  x%y
//				   x - (y * (x/y)) = x%y

//OUTPUT :
/*
Enter your choice : 4
Enter x and y values: 3 2
x-(x/y)*y
 */

/*----------------------------------------------PROBLEM -4-------------------------------------------------*/
//PROBLEM - 4: Find the OUTPUT
void problem4()
{
	int x,y; x=10;
	y=sizeof(++x);
	printf("x=%d y=%d",x,y);
}
//OUTPUT :
/*
Enter your choice : 5
x=10 y=4
 */

/*----------------------------------------------PROBLEM -5-------------------------------------------------*/
//PROBLEM - 5: Find the value of 'x'
void problem5()
{
	int x=!0*20;
	printf("%d",x);
}
//OUTPUT:
/*
Enter your choice : 6
20
 */

/*----------------------------------------------PROBLEM -6-------------------------------------------------*/
void problem6()
{
	int a=3,b=4,c;
	c=b==4||a!=3;
	printf("%d",c);
	return;
}

/*----------------------------------------------PROBLEM -7-------------------------------------------------*/
int raise=0;
void makeset()
{
	raise=1;
	return;
}
void problem7()
{
	int res=0;
	if(raise==1)
	{
		res=1;
		printf("res = %d",res);
		return;
	}
	makeset();
	problem7();
	return;
}

//OUTPUT:
/*
Enter your choice : 8
res = 1
 */

/*----------------------------------------------PROBLEM -8-------------------------------------------------*/
//PROBLEM - 8: What is a difference between unsigned int and signed int in C? Write description.
/*
 * UNSIGNED INT - %u - 4 bytes - 0 to 2^32-1
 * SIGNED INT   - %d - 4 bytes - -2^16 to 2^16-1
 */


/*----------------------------------------------PROBLEM -9-------------------------------------------------*/
void problem9()
{
	for(;;)//INFINITE LOOP
	{
		printf("Hello");
		break;
	}
}
//OUTPUT:
/*
Enter your choice : 9
Hello
 */

/*----------------------------------------------PROBLEM -10-------------------------------------------------*/
int problem10()
{
	int i = 0;
    for(i = 0; i < 5; i++);// just loo[ continues till i==5
    printf("%d\n", i);
    return 0;
}
//OUTPUT:
/*
Enter your choice : 10
5
 */

/*----------------------------------------------PROBLEM -11-------------------------------------------------*/
void problem11()
{
	unsigned char x = 250;
	for(; x >= 0; x--) {
	    printf("%u ", x);
	    if (x == 0) break;
	}
	//return 0;
}
//OUTPUT :
/*
Enter your choice : 11
250 249 248 247 246 245 244 243 242 241 240 239 238 237 236 235 234 233 232 231 230 229 228 227 226 225 224 223 222 221 220 219 218 217 216 215 214 213 212 211 210 209 208 207 206 205 204 203 202 201 200 199 198 197 196 195 194 193 192 191 190 189 188 187 186 185 184 183 182 181 180 179 178 177 176 175 174 173 172 171 170 169 168 167 166 165 164 163 162 161 160 159 158 157 156 155 154 153 152 151 150 149 148 147 146 145 144 143 142 141 140 139 138 137 136 135 134 133 132 131 130 129 128 127 126 125 124 123 122 121 120 119 118 117 116 115 114 113 112 111 110 109 108 107 106 105 104 103 102 101 100 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
 */

/*----------------------------------------------PROBLEM -12-------------------------------------------------*/
void problem12()
{
	int x = 1, y = 0, z = 3;
	//x > y ? printf("%d", z) : return z; ERROR : Ternary Cant have return statements
}

/*----------------------------------------------PROBLEM -13-------------------------------------------------*/
void problem13()
{
	int i = -3;
	int k = i % 2;
	printf("%d\n", k);
}
//EXPLANATION : 2)-3(-1
//				- -2
//				------
//				__-1___

//OUTPUT:
/*
 Enter your choice : 13
-1
*/

/*----------------------------------------------PROBLEM -14-------------------------------------------------*/
void problem14()
{
	int x,c=0,i,j;
	printf("Enter a Value : ");
	scanf("%x",&x);
	i=(x & 0x00ff00ff)<<8;
	j=(x & 0xff00ff00)>>8;
	printf("%x",i|j);
	return;
}
//OUTPUT :
/*
Enter your choice : 14
Enter a Value : 0x1234
3412

Enter your choice : 14
Enter a Value : 0x12345678
34127856
 */

int main()
{
	int d;
	while(1)
	{
		printf("\n-----------------------------ASSIGNMENT -5---------------------------------\n");
		printf("\nEnter your choice : ");
		scanf("%d",&d);
		switch(d)
		{
			case 1: problem1a();
					break;
			case 2: problem1b();
					break;
			case 3: problem2();
					break;
			case 4: problem3();
					break;
			case 5: problem4();
					break;
			case 6: problem5();
					break;
			case 7: problem6();
					break;
			case 8: problem7();
					break;
			case 9: problem9();
					break;
			case 10: problem10();
					break;
			case 11: problem11();
					break;
			case 13: problem13();
					break;
			case 14: problem14();
					break;
			default: printf("Invalid choice");
					break;
		}

	}
	return 0;
}
