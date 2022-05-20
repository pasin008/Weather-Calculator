#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//F1
void tem_con()
{
	float C,F,K,R;
	int choice,main(),num;
	char t_lap;
	do
	{
		system("cls");
		printf("\n\t\t\t\t\t\t## Temperature converter ##\n\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\t\t\tPress 1 Celsius to Fahrenheit\n");
		printf("\t\t\t\t\t\tPress 2 Kelvin to Celsius\n");
		printf("\t\t\t\t\t\tPress 3 Romer to Celsius\n");
		printf("\t\t\t\t\t\tPress 4 Celsius to Romer\n");
		printf("\t\t\t\t\t\tPress 5 Celsius to Kelvin\n");
		printf("\t\t\t\t\t\tPress 6 Kelvin to Fahrenheit\n");
		printf("\t\t\t\t\t\tPress 7 Fahrenheit to Kelvin\n");
		printf("\t\t\t\t\t\tPress 8 Fahrenheit to Celsius\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tSelect Number : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :{printf("\t\t\t\tEnter Celsius : ");
					scanf("%f",&C);
					F=(1.8*C)+33;
					printf("\t\t\t\tFahrenheit = %.2f",F);	
				break;
					}
			case 2 :{printf("\t\t\t\tEnter Kelvin : ");
					scanf("%f",&K);
					C=K-273.15;
					printf("\t\t\t\tCelsius = %.2f",C);
				break;
					}
			case 3 :{printf("\t\t\t\tEnter Romer : ");
					scanf("%f",&R);
					C=R*1.25;
					printf("\t\t\t\tCelsius = %.2f",C);
				break;
					}
			case 4 :{printf("\t\t\t\tEnter Celsius : ");
					scanf("%f",&C);
					R=C*0.8;
					printf("\t\t\t\tRomer = %.2f",R);
				break;
					}
			case 5 :{printf("\t\t\t\tEnter Celsius : ");
					scanf("%f",&C);
					K=C+273.15;
					printf("\t\t\t\tKelvin = %.2f",K);
				break;
					}
			case 6 :{printf("\t\t\t\tEnter Kelvin : ");
					scanf("%f",&K);
					F=(K*1.8)-459.67;
					printf("\t\t\t\tFahrenheit = %.2f",F);
				break;
					}
			case 7 :{printf("\t\t\t\tEnter Fahrenheit : ");
					scanf("%f",&F);
					K=(F+459.67)/(1.8);
					printf("\t\t\t\tKelvin = %.2f",K);
				break;
					}
			case 8 :{printf("\t\t\t\tEnter Fahrenheit : ");
					scanf("%f",&F);
					C=(F-32)*5/9;
					printf("\t\t\t\tCelsius = %.2f",C);
				break;
					}
			default :{system("cls");
					printf("\n\t\t\t\t\t!!Options must be numbers 1 - 8 only!!\n");
				break;
					}
		}
	printf("\n\t\t\t\t----------------------------------------------------\n");
	printf("\t\t\t\tBack to menu <<Y>> or Try Again <<Any key>> : ");
	scanf("%s",&t_lap);
	if(t_lap=='y')
	{
		num =101;
	}
	else
	{
		num++;
	}
	}while(num<=100); 
	system("cls");
	main();
}
//F2
void wind_con()
{
	int w_choice,w_num,main();
	float kn,kp,ft,mp;
	char w_lap;
	do
	{
		system("cls");
		printf("\n\t\t\t\t\t\t## Wind Speed converter ##\n\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\t\t\tPress 1.Knot to Kp/H\n");
		printf("\t\t\t\t\t\tPress 2.Knot to Ft/S\n");
		printf("\t\t\t\t\t\tPress 3.Ft/S to Knot\n");
		printf("\t\t\t\t\t\tPress 4.Ft/S to Kp/H\n");
		printf("\t\t\t\t\t\tPress 5.Kp/H to Knot\n");
		printf("\t\t\t\t\t\tPress 6.Kp/H to Ft/S\n");
		printf("\t\t\t\t\t\tPress 7.Knot to Mp/h\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tSelect Number : ");
		scanf("%d",&w_choice);
		switch(w_choice)
		{
			case 1 :{printf("\t\t\t\tEnter Knot : ");
					scanf("%f",&kn);
					kp=kn*1.852;
					printf("\t\t\t\tKp/H = %.2f",kp);
				break;
			}
			case 2 :{printf("\t\t\t\tEnter Knot : ");
					scanf("%f",&kn);
					ft=kn*1.688;
					printf("\t\t\t\tFt/S = %.2f",ft);
				break;
			}
			case 3 :{printf("\t\t\t\tEnter Ft/S : ");
					scanf("%f",&ft);
					kn=ft*0.59248407128416;
					printf("\t\t\t\tKnot = %.2f",kn);
				break;
			}
			case 4 :{printf("\t\t\t\tEnter Ft/S : ");
					scanf("%f",&ft);
					kp=ft*1.097;
					printf("\t\t\t\tKp/H = %.2f",kp);
				break;
			}
			case 5 :{printf("\t\t\t\tEnter Kp/H : ");
					scanf("%f",&kp);
					kn=kp*0.53995680346039;
					printf("\t\t\t\tKnot = %.2f",kn);
					break;
			}
			case 6 :{printf("\t\t\t\tEnter Kp/H : ");
					scanf("%f",&kp);
					ft=kp*0.911344;
					printf("\t\t\t\tFt/S = %.2f",ft);
					break;
			}
			case 7 :{printf("\t\t\t\tEnter Knot : ");
					scanf("%f",&kn);
					mp=kn*1.151;
					printf("\t\t\t\tMp/H = %.2f",mp);
					break;
			}			
			default :{system("cls");
					printf("\n\t\t\t\t\t!!Options must be numbers 1 - 7 only!!\n");
					break;
			}
		}
	printf("\n\t\t\t\t----------------------------------------------------\n");
	printf("\t\t\t\tBack to menu <<Y>> or Try Again <<Any key>> : ");
	scanf("%s",&w_lap);
	if(w_lap=='y')
	{
		w_num =101;
	}
	else
	{
		w_num++;
	}
	}while(w_num<=100); 
	system("cls");
	main();	
}
//F3
void heath_index()
{
	float hi,temp,humidity,h_c;
	float c1 = -42.379;
	float c2 = 2.04901523;
	float c3 = 10.14333127;
    float c4 = -.22475541;
    float c5 = -0.00683783;
   	float c6 = -0.05481717;
   	float c7 = 0.00122874;
   	float c8 = 0.00085282;
    float c9 = -0.00000199;
    int h_num,main();
    char h_lap;
	do
	{
		system("cls");
		printf("\n\t\t\t\t\t\t ## Heath Index ## \n\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tEnter Temperature (F) : ");
		scanf("%f",&temp);
		if(temp<80)
		{
			system("cls");
			printf("\t\t\t\t\t!!Temperature Must be more than 80(F)!!");
		}
		else
		{
			printf("\t\t\t\tEnter Humidity : ");
			scanf("%f",&humidity);
			hi= c1+(c2*temp)+(c3*humidity)+(c4*temp*humidity)+(c5*(temp*temp))+(c6*(humidity*humidity))+(c7*(temp*temp)*humidity)+(c8*temp*(humidity*humidity))+(c9*(temp*temp)*(humidity*humidity));
			h_c=(hi-32)*5/9;
			printf("\t\t\t\t----------------------------------------------------\n");
			printf("\t\t\t\tHeath Index = %.2f F\n",hi);
			printf("\t\t\t\tHeath Index = %.2f C",h_c);
		}
		printf("\n\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tBack to menu <<Y>> or Try Again <<Any key>> : ");
		scanf("%s",&h_lap);
		if(h_lap=='y')
		{
			h_num =101;
		}
		else
		{
			h_num++;
		}
	}while(h_num<=100);
	system("cls");
	main();
}
//F4
void chill_index()
{
	float w_ch,w_cch,c_t,c_ws;
	int chill_num=0,main();
    char c_lap;
    do
    {
    	system("cls");
		printf("\n\t\t\t\t\t\t ## Wind Chill Index ## \n\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tEnter Temperature (F) : ");
		scanf("%f",&c_t);
		if(c_t>40)
		{
			system("cls");
			printf("\t\t\t\t\t!!Temperature Must be less 40(F)!!");
		}
		else
		{
			printf("\t\t\t\tEnter Wind speed (Mp/H) : ");
			scanf("%f",&c_ws);
			
			
			
			w_ch=35.74+(0.6215*c_t);
    		w_ch=w_ch-(35.75*pow(c_ws,0.16));
    		w_ch=w_ch+((0.4275*c_t)*pow(c_ws,0.16));
			
			
			
			w_cch=(w_ch-32)*5/9;
			printf("\t\t\t\t----------------------------------------------------\n");
			printf("\t\t\t\tWind Chill = %.2f F\n",w_ch);
			printf("\t\t\t\tWind Chill = %.2f C",w_cch);
		}
		printf("\n\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tBack to menu <<Y>> or Try Again <<Any key>> : ");
		scanf("%s",&c_lap);
		if(c_lap=='y')
		{
			chill_num=101;
		}
		else
		{
			chill_num++;
		}
	}while(chill_num<=100);
	system("cls");
	main();
}
//F5
void ass_w()
{
	int num_data=1,main();
	float cel,knot,r_mm;
	char choice_w;
	do
	{
		system("cls");
		printf("\n\t\t\t\t\t\t## Assessment Weather ##\n\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\t\t\t      Input Data\n");
		printf("\t\t\t\t----------------------------------------------------\n");
		printf("\n\t\t\t\tEnter Celsius : ");
		scanf("%f",&cel);
		printf("\t\t\t\tEnter widespeed knots : ");
		scanf("%f",&knot);
		while(knot>526)
		{
			system("cls");
			printf("\n\t\t\t\t      !!Windspeed between 1 knots to 526 knot!!\n");
			printf("\t\t\t\t----------------------------------------------------\n");
			printf("\t\t\t\tEnter widespeed knots : ");
			scanf("%f",&knot);
		}
		printf("\t\t\t\tEnter rain mm/h : ");
		scanf("%f",&r_mm);
		printf("\n\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\t\t\t      Output Data");
		printf("\n\t\t\t\t----------------------------------------------------\n\n");
		printf("\t\t\t\tTemperature : %.2f C\n",cel);
		if(cel<7.9)
		printf("\t\t\t\tEnvironment : Very Cold\n");
		else if(cel<=15.9)
		printf("\t\t\t\tEnvironment : Cold\n");
		else if(cel<=17.9)
		printf("\t\t\t\tEnvironment : Moderately Cold\n");
		else if(cel<=22.9)
		printf("\t\t\t\tEnvironment : Cool\n");
		else if(cel<=35)
		printf("\t\t\t\tEnvironment : Normal\n");
		else if(cel<=39.9)
		printf("\t\t\t\tEnvironment : Hot\n");
		else
		printf("\t\t\t\tEnvironment : Very Hot\n");	
		printf("\n\t\t\t\tWind speed : %.2f Knots\n",knot);
		if(knot<1)
		{
			printf("\t\t\t\tWind Status : Calm\n");
			printf("\t\t\t\tDanger Scale : Low\n");
			printf("\t\t\t\tSea Wave : 0m\n");
			printf("\t\t\t\tSea Status : Calm\n");
		}
		else if(knot<=3)
		{
			printf("\t\t\t\tWind Status : Light Air\n");
			printf("\t\t\t\tDanger Scale : Low\n");
			printf("\t\t\t\tSea Wave : 0.1m\n");
			printf("\t\t\t\tSea Status : Calm\n");					
		}
		else if(knot<=6)
		{
			printf("\t\t\t\tWind Status : Light Breeze\n");
			printf("\t\t\t\tDanger Scale : Low\n");
			printf("\t\t\t\tSea Wave : 0.2 - 0.5m\n");
			printf("\t\t\t\tSea Status : Smooth\n");
		}
		else if(knot<=10)
		{
			printf("\t\t\t\tWind Status : Gentle Breeze\n");
			printf("\t\t\t\tDanger Scale : Low\n");
			printf("\t\t\t\tSea Wave : 0.6 - 1m\n");
			printf("\t\t\t\tSea Status : Slight\n");
		}
		else if(knot<=16)
		{
			printf("\t\t\t\tWind Status : Moderate Breeze\n");
			printf("\t\t\t\tDanger Scale : Moderate\n");
			printf("\t\t\t\tSea Wave : 1.1 - 1.5m\n");
			printf("\t\t\t\tSea Status : Moderate\n");
		}
		else if(knot<=21)
		{
			printf("\t\t\t\tWind Status : Fresh Breeze\n");
			printf("\t\t\t\tDanger Scale : Moderate\n");
			printf("\t\t\t\tSea Wave : 1.6 - 2.5m\n");
			printf("\t\t\t\tSea Status : Moderate\n");
		}
		else if(knot<=27)
		{
			printf("\t\t\t\tWind Status : Strong Breeze\n");
			printf("\t\t\t\tDanger Scale : Moderate\n");
			printf("\t\t\t\tSea Wave : 2.6 - 4m\n");
			printf("\t\t\t\tSea Status : Rough\n");
		}
		else if(knot<=33)
		{
			printf("\t\t\t\tWind Status : Near Gale\n");
			printf("\t\t\t\tDanger Scale : Considerable\n");
			printf("\t\t\t\tSea Wave : 4 - 5m\n");
			printf("\t\t\t\tSea Status : Very Rough\n");
		}
		else if(knot<=40)
		{
			printf("\t\t\t\tWind Status : Gale\n");
			printf("\t\t\t\tDanger Scale : Considerable\n");
			printf("\t\t\t\tSea Wave : 5 - 7.5m\n");
			printf("\t\t\t\tSea Status : High\n");
		}
		else if(knot<=47)
		{
			printf("\t\t\t\tWind Status : Strong Gale\n");
			printf("\t\t\t\tDanger Scale : Considerable\n");
			printf("\t\t\t\tSea Wave : 7.6 - 10m\n");
			printf("\t\t\t\tSea Status : Very High\n");
		}
		else if(knot<=55)
		{
			printf("\t\t\t\tWind Status : Storm\n");
			printf("\t\t\t\tDanger Scale : High\n");
			printf("\t\t\t\tSea Wave : 10.1 - 12.5m\n");
			printf("\t\t\t\tSea Status : Very High\n");
		}
		else if(knot<=63)
		{
			printf("\t\t\t\tWind Status : Violent Storm\n");
			printf("\t\t\t\tDanger Scale : High\n");
			printf("\t\t\t\tSea Wave : 12.6 - 14m\n");
			printf("\t\t\t\tSea Status : Phenomenal\n");
		}
		else
		{
			printf("\t\t\t\tWind Status : Typhoon or Hurricane\n");
			printf("\t\t\t\tDanger Scale : Extreme\n");
			printf("\t\t\t\tSea Wave : Over 14m\n");
			printf("\t\t\t\tSea Status : Phenomenal\n");
		}
				
		printf("\n\t\t\t\tRainprocess : %.2fmm/h\n",r_mm);
		if(r_mm<=0)
		{
			printf("\t\t\t\tRain Status : No Rain\n");
		}
		else if(r_mm<=10)
		{
			printf("\t\t\t\tRain Status : Moderate Rain\n");	
		}
		else if(r_mm<=90)
		{
			printf("\t\t\t\tRain Status : Heavy Rain\n");
		}
		else
		{
			printf("\t\t\t\tRain Status : Very Heavy Rain\n");
		}
		printf("\n\t\t\t\t----------------------------------------------------\n");
		printf("\t\t\t\tBack to menu <<Y>> or Try Again <<Any key>> : ");
		scanf("%s",&choice_w);
		if(choice_w=='y')
		{
			num_data=101;
		}
		else
		{
			num_data++;
		}		
	}while(num_data<=100);
	system("cls");
	main();
}
main()
{
	int choice_m;
	system("cls");
	printf("\n\t\t\t\t\t\t## Weather Calculater ##\n\n");
	printf("\t\t\t\t----------------------------------------------------\n");
	printf("\n\t\t\t\t\t\t1.Temperature converter\n");
	printf("\t\t\t\t\t\t2.Wind speed converter\n");
	printf("\t\t\t\t\t\t3.Heat Index\n");
	printf("\t\t\t\t\t\t4.Wind chill Index\n");
	printf("\t\t\t\t\t\t5.Assessment Weather\n\n");
	printf("\t\t\t\t----------------------------------------------------\n");
	printf("\n\t\t\t\tSelect Number : ");
	scanf("%d",&choice_m);
	switch(choice_m)
	{
		case 1 :{tem_con();
			break;
		}
		case 2 :{wind_con();
			break;
		}
		case 3 :{heath_index();
			break;
		}
		case 4 :{chill_index();
			break;
		}
		case 5 :{ass_w();
			break;
		};
	}
}
