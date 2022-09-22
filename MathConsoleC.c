/*
 * 
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <math.h>

#define PI 3.14159265 /*Назначение константы ПИ*/

int ml() /*Копия лицензии GPL3*/
{
	printf("This program is free software and is distributed under the GNU General Public License, version 3. In short, this means you are free to use and distribute Inkscape for any purpose, commercial or non-commercial, without any restrictions. You are also free to modify the program as you wish, with the only restriction that if you distribute the modified version, you must provide access to its source code. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY.\n\nFor more details about the license, check the attached file LICENSE or the link: https://www.gnu.org/licenses/gpl-3.0.en.html \n\n\n");
	return 0;
}

int m1()
{
	int a;
	double y, x; /*Внутренние значения функции для работы калькулятора*/
	
	while (true)
	{
		printf("Введите угол (0-360) или -1, чтобы выйти из программы: \n");
		scanf("%d", &a);
		
		if (a == -1)
		{
			system("clear");
			break;
		}
		else if (a > 360 || a < 0)
		{
			system("clear");
			printf("Введите коректное значение! \n\n");
		}
		else
		{
			system("clear");
			x = a;
			x *= PI/180; /*Перевод в радианы*/
			x *= 0.1;
			y = sin(x)+3.5;
			printf("Угол y = %lf \n\n", y);
		}
	}
	return 0;
}

int m2()
{
	int x;
	double a;
	
	while (true)
	{
		printf("Введите значение x (любое целое, кроме -1) или -1, чтобы выйти из программы: \n");
		scanf("%d", &x);
		if (x==-1)
		{
			system("clear");
			break;
		}
		system("clear");
		a = x*3.5;
		printf("Значение a = %0.1lf\n\n", a);
	}
	return 0;
}

int m3()
{
	int h, m, rad;
	
	while (true)
	{
		printf("Введите часы (1-12) и минуты (1-60), либо введите в одно из значений -1, чтобы выйти из программы: \n");
		scanf("%d%d", &h, &m);
		
		if (h == -1 || m == -1)
		{
			system("clear");
			break;
		}
		else if ( (h>12||h<1) || (m>60||m<1) )
		{
			system("clear");
			printf("Введите коректное значение!\n\n");
		}
		else
		{
			system("clear");
			
			h *= 5; /*Перевод часовых градусов в минуты*/
			rad = (h-m) * 6; /*Получение некоторого радиуса между минутной и часовой стрелкой*/
			
			if (rad < 0) /*Приведение отрицального радиуса в положительный*/
			{
				rad *= -1;
			}
	
			printf("Угол между часовой и минутной стрелкой, равен %d или %d градусам\n\n", rad, 360-rad);
		}
	}
	
	return 0;
}

int main()
{
	system("clear"); /*Системны вызов, очищающий консоль*/
	int v; /*Пременная для выбора*/
		
	while(true) /*Тело цикла, при остановке которого, программа завершает свою работу*/
	{
		printf("Введите номер выполняемого пункта:\n");
		printf("\n-1: Выйти из программы.\n");
		printf("-2: Лицензия.\n");
		printf("1: Вычислить значение y = sin(0,1*x) + 3.5, при любом задаваемом x.\n");
		printf("2: Вычислить значение a = 3.5 * x, при любом задаваемом целом значении x (кроме -1).\n");
		printf("3: Определить меньший и больший угол между часовой и минутной стрелкой, при любом задаваемом значении в минутах и часах.\n");
		scanf("%d", &v);
		
		if (v==-1) /*Выход из цикла*/
		{
			system("clear");
			break;
		}
		else if (v==-2) /*Выход из цикла*/
		{
			system("clear");
			ml();
		}
		else if (v==1) /*Выбор функции (подпрограммы) 1*/
		{
			system("clear");
			m1();
		}
		else if (v==2) /*Выбор функции (подпрограммы) 2*/
		{
			system("clear");
			m2();
		}
		else if (v==3) /*Выбор функции (подпрограммы) 3*/
		{
			system("clear");
			m3();
		}
		else /*Вывод системной ошибки в случае некоректного ввода*/
		{
			system("clear");
			printf("Введите коректное значение!\n\n");
		}
		
	}
	return 0;
}
