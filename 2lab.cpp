#include<iostream>
using namespace std;
int main(){
	setlocale (LC_ALL,"rus");
	
	
	int sum, date1, date2;
	

	cout<<"Введите сумму вклада (минимальная сумма 10тыс): ";
	cin>>sum;
	
	if (sum<10000 && sum>0)
	{
		cout<< "Вы ввели неверную сумму, минимальная сумма взноса 10 000 . Пожалуйста введите корректную сумму" << endl;
		cin>>sum;
	}

	if (sum>=10000 && sum<=100000)
	{
		cout<<"Введите срок вклада (не более 365 дней):";
		cin>>date1;
	}


	
	if (date1>365)
	{
		cout<<"Введите срок вклада, (не более 365 дней):";
		cin>>date1;
	}

	if (date1>=0 && date1<=30)
	{
		sum=sum-sum/10;
		cout<<"Ваша сумма через " << date1 <<" дней: " << sum;
	}
	if (date1>=31 && date1<=120)
	{
		sum=sum+sum*2/100;
		cout << "Ваша сумма через " << date1 <<" дней: " << sum;
	}
	if (date1>=121 && date1<=240)
	{
		sum=sum+sum*6/100;
		cout<< "Ваша сумма через " << date1 <<" дней: " << sum;
	}
	
	
	if (date1>=241 && date1<=365)
	{
		sum=sum+sum*12/100;
		cout<< "Ваша сумма через " << date1<<" дней: " << sum;
	}

	if (sum>=100000)
	{
		cout<<"Введите срок вклада (не более 365 дней):";
		cin>>date1;
	}
 	if (date2>=0 && date2<=30)
	{
		sum=sum-sum/10;
		cout<<"Ваша сумма через " << date2 <<" дней: " << sum;
	}	
	if (date2>=31 && date2<=120)
	{
		sum=sum+sum*3/100;
		cout << "Ваша сумма через " << date2 <<" дней: " << sum;
	}
	if (date2>=121 && date2<=240)
	{
		sum=sum+sum*8/100;
		cout<< "Ваша сумма через " << date2 <<" дней: " << sum;
	}
	
	
	if (date2>=241 && date2<=365)
	{
		sum=sum+sum*15/100;
		cout<< "Ваша сумма через " << date2 <<" дней: " << sum;
	}
	
	return 0;

	
}
