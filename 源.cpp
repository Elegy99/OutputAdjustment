/*#include<iostream>
using namespace std;
int main()
{
	cout << "char:" << sizeof(char) << "字节" << endl;
	return 0;
}*/

#include<iostream>
#include<iomanip>//注意头文件
using namespace std;
int main() 
{
	
	cout << 1<< setw(4) << 5<< setw(9)<<4<<endl;//setw(int n):接下来的输出要占用n个字符宽度（不足则使用空格补齐）,只对接下来的字符生效一次
	cout << "NUM:" << setfill('$') << setw(4) << 8 << setw(9) << 8<<endl;//setfill('')对于后续输出一直生效直到手动恢复
	cout << setfill(' ');//恢复成默认的空格填充
	cout << "NUM:" << setw(4) << 8 << setw(9) << 8 << endl;
	cout << "NUM:" << left << setfill('#')<<setw(4) << 8 << setw(9) << 8 << endl;//left/right控制左右对齐，除非手动修改，否则一直生效
	
	double f = 19996.0 / 7;//需要给任意一个数加.0
	/*18行代码left可改为setiosflags(ios::left)(老式写法)*/
	
	cout << f << endl;//默认示例
	cout << setiosflags(ios::scientific) << f << endl;//将浮点数设置为科学计数法表示，持续生效（或者直接scientific）
	cout << fixed << f << endl;//恢复正常表示
	cout << setprecision(8) << f << endl;//控制整个数字有效数字精度
	cout << fixed<<setprecision(8) << f << endl;//控制小数位有效数字精度
	cout << defaultfloat << f << endl;//恢复小数位
	cout << setprecision(6) << f << endl;//恢复整个数字的默认位数（6位）
	return 0;
}

