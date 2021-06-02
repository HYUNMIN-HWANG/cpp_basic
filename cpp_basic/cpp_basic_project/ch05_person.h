#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef struct
{
	int num;
	char name[30];
	char address[50];
	char tel[14];
	char birth[9];
}PERSON;

typedef struct
{
	int Month;
	int Day;
	char ItemName[50];
	int Quantity;
	int UnitCost;
	int Price;
}ITEM;

typedef struct
{
	int ReceipNum;
	char Name1[50];
	char BusinessRegNum[50];
	char FirmName[50];
	char Name2[50];
	char FirmAdderss[50];
	char TypeOfFirm[50];
	char LinesOfBusiness[50];
	char Date[20];
	int Amount;
	char Handler[50];
	ITEM Item[10];
}RECEIPT;
