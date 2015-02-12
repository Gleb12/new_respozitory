// сортировка пузырьком.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <malloc.h>
#include <conio.h>

using namespace std;
 
int main()
{
	int i,a,*b,k;
	cin>>a;

	b=(int*)malloc(sizeof(int)*a);
	for (i=0; i<a; i++)
		cin>>b[i];

	for (int j=1; j<=a;j++)
	for (i=1; i<=a;i++)
	{
		if (b[i-1]<b[i]) 
		{
			k=b[i];
			b[i]=b[i-1];
			b[i-1]=k;
		}
	}
	for (i=0;i<a;i++)
	cout<<b[i]<<" ";
	_getch();
}

