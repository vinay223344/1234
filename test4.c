#include<stdio.h>
void type_char(){
	char c;
	printf("enter the character\n");
	scanf (" %c",&c);
	('0'<=c && c<='9')?printf("the given character is numeric\n"):('A'<=c && 'Z'>=c) ?printf("the given charcter is upper case\n"):('a'<=c && 'z'>=c) ?printf("the given charcter is upper case\n"):printf("the given character is special character\n");

}
/* output:
enter the character
2
the given character is numeric
 */


//--------------------problem 2--------------------
//Program to Check if a Specific Bit is Set or Clear(status of a bit)
void verification_of_bit(){
	int l=1,n,s;
		printf("enter the number ");
		scanf("%d",&n);
		printf("enter which bit starting with 1 from right you want to check");
		scanf("%d",&s);
		l=l<<(s-1);
		n=n&l;
		if(n==0)
			printf("the bit specified is 0");
		else
			printf("the bit specified is 1");
}

/* output:
enter the number 17
enter which bit starting with 1 from right you want to check4
the bit specified is 0
 */


//--------------------problem 3--------------------
/*
Evaluate and find out which one is appropriate and equal to x%y
oy-(x/y)*x
ox-(x/y)*y
o x-(y/x)*x
o y-(y/x)*y
 */
void rem(){
int x,y;
printf("enter the dividend");
scanf("%d",&x);
printf("enter the divisor");
scanf("%d",&y);
printf("%d original modulus result\n",x%y);
printf("%d  y-(x/y)*x \n",y-(x/y)*x);
printf("%d  x-(x/y)*y \n",x-(x/y)*y);
printf("%d  x-(y/x)*x \n",x-(y/x)*x);
printf("%d  y-(y/x)*y \n",y-(y/x)*y);

}


/* output:
enter the dividend14
enter the divisor6
2 original modulus result
-22  y-(x/y)*x
2  x-(x/y)*y
14  x-(y/x)*x
6  y-(y/x)*y
 */


//--------------------problem-4-----------
void test1(){
	int x,y; x=10;
	y=sizeof(++x);
	printf("x=%d y=%d", x,y);
}



/* output:
x=10 y=4
 */



//--------------------problem-5-----------
void test2 ()
{
int x=!0*20;
printf("%d\n",x);
}


/* output:
20
 */



//--------------------problem-6-----------
void test3()
{
int a=3, b=4, c;
c=b==4||a!=3;
printf ("%d\n",c);

}


/* output:
1
 */

//-----------------problem -7---------------------
/*
 Consider a scenario where a “raise”flag is modified within any function and accessed
in the other function. If that flag is ‘1’ , make result variable ‘1’ else ‘0’. If flag is ‘0’the
code should wait on testing the raise flag.
 */

int raise=0;
void flag(){
	if (raise!=1){
		printf("modulate raise is currently not set");
		scanf("%d",&raise);
	}}
void raise_flag(){
while(raise!=1)
	flag();
if(raise==1)
printf("the flag bit is now 1");

}




/* output:
modulate raise is currently not set0
modulate raise is currently not set0
modulate raise is currently not set0
modulate raise is currently not set8
modulate raise is currently not set1
the flag bit is now 1
 */


//-----------------problem -8--------------
/*
 What is a difference between unsigned int and signed int in C? Write description.
 */
/*
answer:
the unsigned integer and signed integer both are of same size that is they occupy in general a 4 bytes
which is 32 bit space in memory
so the values that can be stored in
unsigned int are from 0 to (2 power 32) -1 in case of overflow the ouput is wrapped around from 0 again
where as in signed int  values are from -(2 power 31) to (2 power 31)  -1
in case of overflow the ouput is wrapped around from -max or +max depending on the overflow occured again

*/


//-----------------problem -8--------------
void test5() {
int i = 0;
for(i = 0; i < 5; i++);
printf("%d\n", i);
}

//-----------------problem -8--------------
void test6() {
unsigned char x = 250;
for(; x >= 0; x--) {
printf("%u ", x);
if (x == 0) break;
}


//-----------------problem -8--------------
void test7()
{
int x = 1, y = 0, z = 3;
x > y ? printf("%d", z) : return z;
}


//-----------------problem -8--------------
void test8()
{
int i = -3;
int k = i % 2;
printf("%d\n", k);
}

int main(){
	int ch;
	while(1){
		printf("enter  the program that you want ot execute:\n0.exit\n1.type_char_category\n2.check remainder operation\n3.test1\n4.test2\n5.test3\n6.raise_flag\n7.test5\n8.test6\n9.test7\n10.test8");
		scanf("%d",&ch);
		switch(ch){
		case 0:printf("exiting assignment 5");
				return 0;
				break;
		case 1:type_char();
				break;
		case 2:rem();
				break;
		case 3:test1();
				break;
		case 4:test2();
				break;
		case 5:test3();
				break;
		case 6:raise_flag();
				break;
		case 7:test5();
				break;
		case 8:test6();
				break;
		case 9:test7();
				break;
		case 10:test8();
				break;
		}
	}
	return 0;
}











































#include<stdio.h>
void pattern(){
	//-----------------problem 1 -------------
/*1. Write program to print the following patterns . Pattern should be scalable, if input
	(number of lines) is 6 then the output should be.*/

int l,i,j;
printf("enter the no of lines the pattern should have");
scanf("%d",&l);
int n=65;
for(i=1;i<=l;i++){
	n=65;
	for(j=1;j<=i;j++){
		printf("%c",n);
		if(j!=i)
			printf("*");
		n++;
	}printf("\n");
}
}

/*output:

A
A*B
A*B*C
A*B*C*D
A*B*C*D*E
*/


////-----------------problem 2 -------------
/* 2. Execute below
A A A A
B B B
C C
D
C C
B B B
*/

void kp(){
	int n,a=65,i,j,p;
	printf("enter no of lines");
	scanf("%d",&n);
	p=n;
	for (i=1;i<=n/2;i++){
		for (j=i;j<=(n/2)+1;j++){
			printf("%c ",a);
		}
	printf("\n");
	a++;
	p--;
	}
	printf("%c\n",a);
	p--;
	for (i=n/2;i>=1;i--){
		if (p!=0){
			a--;
		for (j=i;j<=n/2+1;j++){
				printf("%c ",a);
			}
		p--;
		printf("\n");
		}
		else break;
	}
}

/*output
 enter no of lines6
A A A A
B B B
C C
D
C C
B B B
 */
//problem -3
int test1()
{
int i=0;
for(i=0; i<20; i++)
{
switch(i)
{
case 0: i+=5;
case 1: i+=2;
case 5: i+=5;
default: i+=4;break;
}
printf("%d\n", i);
}
return 0;
}
/* output:
16
21
 */
//problem -4

int test2() {
int a = 0, i = 0, b;
for (i = 0;i < 5; i++)
{
printf("in loop: i=%d\n");
a++;
if (i == 3) break;
}
}
/* output:
in loop: i=0
in loop: i=-1177410912
in loop: i=-1177410912
in loop: i=-1177410912
 */

//problem -5
int test3()
{
int i = 0;
do
{
i++;
if (i == 2)
continue;
printf("In while loop ");
} while (i < 2);
printf("%d\n", i);
return 0;
}
/* output:
In while loop 2
 */


//--------------------problem 6 ---------------------------
//Write a program to print numbers between 1 to 500 that are divisible by 7 using goto.
void divisible_goto()
{
	int n,x=7;
	printf("enter the number till which the divisibility of 7 need to be verified");
	scanf("%d",&n);
	div:
	printf("%d\n",x);
	x=x+7;
	if(x<=n)
		goto div;
}

/* output:
 enter the number till which the divisibility of 7 need to be verified500
7
14
21
28
35
42
49
56
63
70
77
84
91
98
105
112
119
126
133
140
147
154
161
168
175
182
189
196
203
210
217
224
231
238
245
252
259
266
273
280
287
294
301
308
315
322
329
336
343
350
357
364
371
378
385
392
399
406
413
420
427
434
441
448
455
462
469
476
483
490
497
 */


//-----------------problem 7 -------------
/*Write a program to calculate the sum and average of 10 positive numbers using continue for
skipping invalid input.*/
void sum_and_average()
{
	int n,x,s=0;
	printf("enter the number of inputs you are going to provide for the operations sum and average");
	scanf("%d",&n);
	int p=n;
	while(n>0){
		printf("enter the %d number ",p-n+1);
		scanf("%d",&x);
		if(x<0){
			printf("invalid input not considered enter positive numbers only\n");
			continue;
		}
		s=s+x;
		n--;
	}
	printf("the sum  and average of given %d valid inputs is %d and %d ",p,s,s/p);

}

/* output:
enter the number of inputs you are going to provide for the operations sum and average4
enter the 1 number -1
invalid input not considered enter positive numbers only
enter the 1 number 2
enter the 2 number 3
enter the 3 number 4
enter the 4 number 5
the sum  and average of given 4 valid inputs is 14 and 3 enter which program you want to execute
 */


//-----------------problem 8 -------------
/*Write a program to input a number and a digit and find whether the digit is present in the number
or not, if present, then count the number of times it occurs in the number? Let say 12345 number,
check repetitive digit and count it.
*/

void find_digit(){
	long int n,count=0,d ;
	printf("enter the number  ");
	scanf("%ld",&n);
	printf("enter the digit that need to be found");
	scanf("%ld",&d);
	while(n){
		if(d==n%10)
			count++;
		n=n/10;
	}
if(count==0)
	printf("sorry the digit is not found\n");
else
	printf("yes the digit is found and it is repeated for %ld times in number ",count);

}

/*output:
enter the number  344435
enter the digit that need to be found4
yes the digit is found and it is repeated for 3 times in number
 */

//-----------------problem 9 -------------
//Program to Set a Specific Bit of a Number
void setting_bit(){
	int l=1,n,s;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from right you want to set");
	scanf("%d",&s);
	l=l<<(s-1);
	n=n|l;
	printf("the result from the set bit operation is %d",n);
}

/* output:
enter the number 4
enter which bit starting with 1 from right you want to set2
the result from the set bit operation is 6
 */


//-----------------problem 10 -------------
//Program to clear a Specific Bit of a number
void clearing_bit(){
	int l=1,s,n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from the right you want to reset");
	scanf("%d",&s);
	l=~(l<<(s-1));
	n=n&l;
	printf("the result from the set bit operation is %d",n);
}

/* output:
 enter the number :5
enter which bit starting with 1 from the right you want to reset3
the result from the set bit operation is 1
 */

//-----------------problem 11 -------------
//Program to toggle Specific Bit of a number
void toggle_bit(){
	int l=1,s,n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from the right you want to toggle");
	scanf("%d",&s);
	l=(l<<(s-1));
	n=n^l;
	printf("the result from the set bit operation is %d",n);
}

/* output :
enter the number :5
enter which bit starting with 1 from the right you want to toggle3
the result from the set bit operation is 1
 */

//--------------------problem 12--------------------
//Program to Check if a Specific Bit is Set or Clear(status of a bit)
void verification_of_bit(){
	int l=1,n,s;
		printf("enter the number ");
		scanf("%d",&n);
		printf("enter which bit starting with 1 from right you want to check");
		scanf("%d",&s);
		l=l<<(s-1);
		n=n&l;
		if(n==0)
			printf("the bit specified is 0");
		else
			printf("the bit specified is 1");
}

/* output:
enter the number 17
enter which bit starting with 1 from right you want to check4
the bit specified is 0
 */

//-----------problem-13------------
//Program to Count the Set Bits (1’s) in an Integer
void count_set(){
	int n,count=0,x;
	printf("enter the number");
	scanf("%d",&n);
	while(n){
		x=n&1;
		count=count+x;
		n=n>>1;
	}
printf("the count of set bits in given integer is %d ",count);
}

//-----------problem-14------------
////Program to Count the reSet Bits (0’s) in an Integer
void count_reset(){
	int n,count=0,x,p=sizeof(n)*8;
	printf("enter the number");
	scanf("%d",&n);
	while(p){
		x=n&1;
		if(!x)
		count=count+1;
		p--;
		n=n>>1;
	}
printf("the count of reset(0) bits in given integer is %d ",count);

}
/* output:
enter the number5
the count of reset(0) bits in given integer is 30
*/

//main function
int main()
{
	printf("------------assignmment -4-----------\n");
	int ch;
	while(1){
	printf("enter which program you want to execute\n0.exit\n1.pattern\n2.k-pattern\n3.divisible_by_7\n4.sum_and_average\n5.finding frequency of digit\n6.setting bit\n7.resetting bit\n8.toggle bit\n9.checking if bit is set or not\n10.count of set bits\n11.count of reset bits\n12.another approach to reset bit count\n");
	scanf("%d",&ch);
	switch(ch){
	case 0: printf("exiting assignment-4");
			return 0;
			break;
	case 1: pattern();
			break;
	case 2: kp();
			break;
	case 3 : divisible_goto();
			break;
	case 4: sum_and_average();
			break;
	case 5: find_digit();
			break;
	case 6 :setting_bit();
			break;
	case 7 :clearing_bit();
			break;
	case 8 :toggle_bit();
				break;
	case 9: verification_of_bit();
			break;
	case 10 : count_set();
			break;
	case 11: count_reset();
			break;
	case 12:test1();
			break;
	case 13: test2();
			break;
	case 14: test3();
			break;
	}}
	return 0;
}




















































#include<stdio.h>
int cnt=0;
/* ------------------problem 1--------------------------*/
/*1. Write a program to accept any number up to six digits and print each digit in words.
For eg- 1503 = one five zero three
*/
void print_digit()
{
	int n,count=0,a[6],i;
	printf("enter the number");
	scanf("%d",&n);
	while(n){
		a[count]=n%10;
		n=n/10;
		count++;
	}
	for (i=count;i>=0;i--){
		switch(a[i]){
		case 1:printf("One ");
			break;
		case 2:printf("Two ");
					break;
		case 3:printf("Three ");
					break;
		case 4:printf("Four ");
					break;
		case 5:printf("Five ");
					break;
		case 6:printf("Six ");
					break;
		case 7:printf("Seven ");
					break;
		case 8:printf("Eight ");
					break;
		case 9:printf("Nine ");
					break;
		case 0:printf("Zero ");
					break;
		}
	}
}


/* output:
enter the number14559
One Four Five Five Nine
 */



//----------------------------problem 2----------------------------
//Write a program to find out the day of week for a given data - 29 th Aug 1999

int day_week(){
	int d,m,y,total =0,a[4]={0,5,3,1},x,lp[]={31,29,31,30,31,30,31,31,30,31,30,31},np[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("enter the date :");
	scanf("%d",&d);
	printf("enter the month :");
	scanf("%d",&m);
	printf("enter the year :");
	scanf("%d",&y);
	if(y%100==0 &&y%400==0){
		if(lp[m-1]>=d)
			printf("the date is valid\n");
		else{
			printf("the date is invalid\n");
			return 0;
		}
	}
	else{
		if(np[m-1]>=d)
			printf("the entered date is valid\n");
		else{
			printf("the entered date is invalid\n");
			return 0;
		}
	}

	total =total +d%7;
	switch(m){
	case 1:total =total+3;
			break;
	case 2: if(y%100==0 && y%400==0)
				total=total+4;
			else
				total=total+3;
	break;
	case 3:if(y%100==0 && y%400==0)
				total=total+7;
		   else
			    total=total+6;
	break;
	case 4:if(y%100==0 && y%400==0)
				total=total+9;
		   else
			    total=total+8;
	break;
	case 5:if(y%100==0 && y%400==0)
				total=total+12;
		   else
			    total=total+11;
	break;
	case 6:if(y%100==0 && y%400==0)
				total=total+14;
		   else
			    total=total+13;
	break;
	case 7:if(y%100==0 && y%400==0)
				total=total+17;
		   else
			    total=total+16;
	break;
	case 8:if(y%100==0 && y%400==0)
				total=total+20;
		   else
			    total=total+19;
	break;
	case 9:if(y%100==0 && y%400==0)
				total=total+22;
		   else
			    total=total+21;
	break;
	case 10:if(y%100==0 && y%400==0)
				total=total+25;
		   else
			    total=total+24;
	break;
	case 11:if(y%100==0 && y%400==0)
				total=total+27;
		   else
			    total=total+26;
	break;
	case 12:if(y%100==0 && y%400==0)
				total=total+30;
		   else
			    total=total+29;
	break;


	}
	x=(y/100)%4;
	total=total+a[x];
	x=(y%100)-1;
	total=total+(x/4)*2+(x-x/4);
	total=total%7;
	switch(total){
	case 1:printf("the date specified is Monday\n");
			break;
	case 2:printf("the date specified is Tuesday\n");
			break;
	case 3:printf("the date specified is Wednesday\n");
			break;
	case 4:printf("the date specified is Thursday\n");
			break;
	case 5:printf("the date specified is Friday\n");
			break;
	case 6:printf("the date specified is saturday\n");
			break;
	case 0:printf("the date specified is sunday\n");
			break;
	}
return 0;
}



/* output:
the entered date is valid
the date specified is saturday
exiting the program
 */



//-----------------------problem 3-------------------
/*Write a program to find out the number of 500, 100, 50, 20, 10, 5, 2 and 1 Rs notes can
purchase for a given amount of money. consider amount of money is Rs 1333.
*/

void money(){
	int m,_500n=0,_100n=0,_50n=0,_20n=0,_10n=0,_5n=0,_2n=0,_1n=0;
	printf("enter the amount\n");
	scanf("%d",&m);
	while(m){
	_500n=_500n+m/500;
	m=m%500;
	_100n=_100n+m/100;
	m=m%100;
	_50n=_50n+m/50;
	m=m%50;
	_20n=_20n+m/20;
	m=m%20;
	_10n=_10n+m/10;
	m=m%10;
	_5n=_5n+m/5;
	m=m%5;
	_2n=_2n+m/2;
	m=m%2;
	_1n=m;
	m=m%1;}

printf("For the specified amount the no. of \n500 notes is %d\nno. of \n100 notes is %d\nno. of \n50 notes is %d\nno. of \n20 notes is %d\nno. of \n10 notes is %d\nno. of \n5 notes is %d\nno. of \n2 notes is %d\nno. of \n1 notes is %d\n",_500n,_100n,_50n,_20n,_10n,_5n,_2n,_1n);
}



/* output:
enter the amount
1333
For the specified amount the no. of
500 notes is 2
no. of
100 notes is 3
no. of
50 notes is 0
no. of
20 notes is 1
no. of
10 notes is 1
no. of
5 notes is 0
no. of
2 notes is 1
no. of
1 notes is 1
 */





//---------------problem 4------------------
//Write a program to find the difference of two dates in years, months and days?

int diff_dates(){
	int d1,m1,y1,d2,m2,y2,lp[]={31,29,31,30,31,30,31,31,30,31,30,31},np[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d=0,m=0,y=0;
	printf("enter the start date with spaces");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("enter the end date with spaces");
	scanf("%d %d %d",&d2,&m2,&y2);
	if(y1%100==0 && y1%400==0){
		if(d1<1||d1>lp[m1-1]){
			printf("invalid date");
			return 0;
		}
	}
	else{
		if(d1<1||d1>lp[m1-1]){
					printf("invalid date");
					return 0;
		}
	}
	if(m1>12 || m1<1 ||m2>12||m2<1)
	{
		printf("invalid date");
		return 0;
	}
	if(y1>y2){
		d1^=d2^=d1^=d2;
		m1^=m2^=m1^=m2;
		y1^=y2^=y1^=y2;
	}
	if(y1%100==0 && y1%400==0){
		d=d+lp[m1-1]-d1;
	}
	else
		d=d+np[m1-1]-d1;
	d=d+d2;
	m1=m1+1;
	m2=m2-1;
	m=m+12-m1;
	m=m+m2+1;
	y1++;
	y2--;
	y=y2-y1+1;
	printf("the difference in the given dates is %d days %d months %d years",d,m,y);
	return 0;
}



/* output:
enter the start date with spaces27 7 2003
enter the end date with spaces7 2 2026
the difference in the given dates is 11 days 6 months 22 years
 */



//------------------problem 5 atm ----------------------------
/*
 Write a program to simulate a basic ATM:
Check PIN
Show balance
Allow withdrawal/deposit
Exit
 */
int checkpin(){
	int pin;
	printf("to perform the required operation enter the pin \n");
	scanf("%d",&pin);
	if (pin == 1234)
		return 1;
	else if (cnt < 2){
		cnt ++;printf("you have entered the wrong pin %d more chances left before shutting the system \n",3-cnt);
			checkpin();}
	else {
		printf("atm shutting due to wrong pin retry after sometime\n");
		cnt=0;
		return 0;
		}
return 1;}
int showbalance(int amount ){
printf("The current amount is %d",amount);
return amount ;
}
int withdrawal(int amount){
int w;
printf("enter the amount that you want to withdraw\n");
scanf("%d",&w);
if(amount<w){
	printf("insufficient balabnce");return amount;}
amount =amount-w;
printf("the amount %d is successfully withdrawn and the left balance is %d\n",w,amount);
return amount ;
}
int deposit(int amount)
{
int d;
printf("enter the amount that you want to deposit \n");
scanf("%d",&d);
amount=amount+d;
printf("the amount %d is successfully deposited in your account and the current balance is %d\n",d,amount);
return amount;}

int atm (){
int amount=1000,ch;
printf("---------------------your atm ------------------\n");

while(1){
printf("enter your choice :\n");
printf("1.show balance \n2.withdrawal\n3.deposit\n4.exit");
scanf("%d",&ch);
switch (ch){
case 1 : if(checkpin())
		amount = showbalance(amount);
	break;
case 2:
	if(checkpin())
		amount = withdrawal(amount);
	break;
case 3: if(checkpin())
		amount=deposit(amount);
	break;
case 4 : printf("exiting the program\n");
	return 0;
	break;
	}}
 return 0;}


/* output:
enter which program you want to execute:
0. exit the program
 1.print_digit
2.Day-Week
3.money
4.difference in dates
5.atm
6.age_division
5
---------------------your atm ------------------
enter your choice :
1.show balance
2.withdrawal
3.deposit
4.exit1
to perform the required operation enter the pin
1234
The current amount is 1000enter your choice :
1.show balance
2.withdrawal
3.deposit
4.exit2
to perform the required operation enter the pin
2222
you have entered the wrong pin 2 more chances left before shutting the system
to perform the required operation enter the pin
1234
enter the amount that you want to withdraw
2000
insufficient balabnceenter your choice :
1.show balance
2.withdrawal
3.deposit
4.exit3
to perform the required operation enter the pin
1234
enter the amount that you want to deposit
12
the amount 12 is successfully deposited in your account and the current balance is 1012
enter your choice :
1.show balance
2.withdrawal
3.deposit
4.exit1
to perform the required operation enter the pin
12342
you have entered the wrong pin 1 more chances left before shutting the system
to perform the required operation enter the pin
111
atm shutting due to wrong pin retry after sometime
The current amount is 1012enter your choice :
1.show balance
2.withdrawal
3.deposit
4.exit
 */






//-----------------------problem -6-------------
/*
Write a program to classify age groups:
0–12 → Child
13–19 → Teenager
20–59 → Adult
60+ → Senior citizen
 */

void age_div()
{int age;
printf("enter the age of the person ");
scanf("%d",&age);//taking age input from user
//checking the range under which the age fall and printing the respective group name the person belongs to
if (0<=age && age<=12)
	printf("the person specified is a child");
else if (13<=age && age<=19)
	printf("the person specified is a Teen");
else if (20<=age && age<=59)
	printf("the person specified is a Adult");
else if (60<=age )
	printf("the person specified is a Senior citizen");
}



/* output:
enter the age of the person 14
the person specified is a Teen
 */



int main()
{	int ch;
while(1){
	printf("enter which program you want to execute:\n0. exit the program\n 1.print_digit\n2.Day-Week\n3.money\n4.difference in dates \n5.atm \n6.age_division\n");
	scanf("%d",&ch);
	switch(ch){
	case 0:printf("exiting assignment 3 \n");
			return 0;
			break;
	case 1:print_digit();
			break;
	case 2:if(! day_week())
			{printf("exiting the program\n ");
			}
			break;
	case 3:money();
			break;
	case 4: diff_dates();
			break;
	case 5:if(! atm()){
			printf("atm program exited\n");return 0;}
			break;
	case 6:age_div();
			break;
	}}
	return 0;

}



























