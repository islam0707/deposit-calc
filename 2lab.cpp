#include<iostream>
using namespace std;
int main(){
	setlocale (LC_ALL,"rus");
	
	
	int sum, date1, date2;
	

	cout<<"������� ����� ������ (����������� ����� 10���): ";
	cin>>sum;
	
	if (sum<10000 && sum>0)
	{
		cout<< "�� ����� �������� �����, ����������� ����� ������ 10 000 . ���������� ������� ���������� �����" << endl;
		cin>>sum;
	}

	if (sum>=10000 && sum<=100000)
	{
		cout<<"������� ���� ������ (�� ����� 365 ����):";
		cin>>date1;
	}


	
	if (date1>365)
	{
		cout<<"������� ���� ������, (�� ����� 365 ����):";
		cin>>date1;
	}

	if (date1>=0 && date1<=30)
	{
		sum=sum-sum/10;
		cout<<"���� ����� ����� " << date1 <<" ����: " << sum;
	}
	if (date1>=31 && date1<=120)
	{
		sum=sum+sum*2/100;
		cout << "���� ����� ����� " << date1 <<" ����: " << sum;
	}
	if (date1>=121 && date1<=240)
	{
		sum=sum+sum*6/100;
		cout<< "���� ����� ����� " << date1 <<" ����: " << sum;
	}
	
	
	if (date1>=241 && date1<=365)
	{
		sum=sum+sum*12/100;
		cout<< "���� ����� ����� " << date1<<" ����: " << sum;
	}

	if (sum>=100000)
	{
		cout<<"������� ���� ������ (�� ����� 365 ����):";
		cin>>date1;
	}
 	if (date2>=0 && date2<=30)
	{
		sum=sum-sum/10;
		cout<<"���� ����� ����� " << date2 <<" ����: " << sum;
	}	
	if (date2>=31 && date2<=120)
	{
		sum=sum+sum*3/100;
		cout << "���� ����� ����� " << date2 <<" ����: " << sum;
	}
	if (date2>=121 && date2<=240)
	{
		sum=sum+sum*8/100;
		cout<< "���� ����� ����� " << date2 <<" ����: " << sum;
	}
	
	
	if (date2>=241 && date2<=365)
	{
		sum=sum+sum*15/100;
		cout<< "���� ����� ����� " << date2 <<" ����: " << sum;
	}
	
	return 0;

	
}
