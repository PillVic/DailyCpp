#include"Fan.h"
#include<iostream>
#include"Account.h"

using namespace std;

int main() {
	//实验1
	//在main函数中创建2个Fan的对象
	//将第一个风扇的转速、半径和颜色分别设置为3、10和yellow，并将它打开。
	//第二个风扇的转速、半径和颜色分别设置为2、5和blue，并将它关闭。输出以上2个风扇的所有信息。
	Fan fan1(3, 10, "yellow", ON);
	Fan fan2(2, 5, "blue", OFF);
	fan1.display();
	fan2.display();
	//实验2
	Account someone(1122, 20000, 0.045);
	someone.withdraw(2500);
	someone.deposit(3000);
	cout << "Now you have " << someone.getBalance() << endl;
	cout << "The monthly interest rate is " << someone.getMonthlyInterestRate() << endl;
	cout << "You have " << someone.updateBalance(24) << "after 2 year s" << endl;
	return 0;
}