#include <stdio.h>

int main(int argc, char* argv[])
{
	int x=0;
	int a[5];
	int y=0;
	int i;
	for (i=0;i<=5;i++)
		a[i]=i;
	printf("%d %d\n",x,y);
	return 0;
}




































































/*
地址符号	实际地址			初始数据		运行结果
&y				0x0012ff64		0						0
a[0]			0x0012ff68		?						0
a[1]			0x0012ff6c		?						1
a[2]			0x0012ff70		?						2
a[3]			0x0012ff74		?						3
a[4]			0x0012ff78		?						4
&x				0x0012ff7c		0						5

一个由C/C++编译的程序占用的内存分为以下几个部分 
  1、栈区（stack）— 由编译器自动分配释放 ，存放函数的参数值，局部变量的值等。其 
  操作方式类似于数据结构中的栈。 
  2、堆区（heap） — 一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回 
  收 。注意它与数据结构中的堆是两回事，分配方式倒是类似于链表，呵呵。 
  3、全局区（静态区）（static）—，全局变量和静态变量的存储是放在一块的，初始化的 
  全局变量和静态变量在一块区域， 未初始化的全局变量和未初始化的静态变量在相邻的另 
  一块区域。 - 程序结束后由系统释放。 
  4、文字常量区 —常量字符串就是放在这里的。 程序结束后由系统释放 
  5、程序代码区—存放函数体的二进制代码。
*/
