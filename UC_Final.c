#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int rj;
void ret();
int main()
{
	int x;
	FILE *con;
	con=(fopen("conversion history.txt","w"));
	fclose(con);	
	convert1:
	printf("\t\t\t\t\t\tUnit Converter");
	printf("\n\t\t\t\t\t<<=============================>>");
	convert:
	con=(fopen("conversion history.txt","a"));	
	printf("\n\n\nSelect a Measure for Conversion :-");
	printf("\n\n\t(1) Length.\n\t(2) Temperature \n\t(3) Weight\n\t(4) Area\n\t(5) Volume\n\t(6) Angles\n\t(7) Exit Converter");
	printf("\n\n\tEnter Your Choice : ");
	fflush(stdin);
	scanf("%d",&x);
	if((x<=7)&&(x>=1))
	{
	 system("cls");	
	 switch(x)
	{
		case 1:
			fprintf(con,"\n\nConversion of Length\n");
			length:
			printf("\n Conversion of Length\n");
			printf("\n\t1) Miles to Kilometers\n\t2) Millimeters to Inches\n\t3) Inches to Feet\n\t4) Feet to Inches\n\t5) Inches to Millimeters\n\t6) Kilometers to Miles\n\t7) Metres to Feet\n\t8) Feet to Metres\n\t9) Inches to cm\n\t10)cm to Inches\n\t11)Yards to Km\n\n");
			int l;
			float mi,km,mm,in,ft,m,cm,ya;
			printf("\n\tEnter Choice :  ");
			fflush(stdin);
			scanf("%d",&l);
			switch(l)
			{
				case 1:
					printf("\n Distance in Miles :  ");
					scanf("%f",&mi);
					km=mi*1.66;
					printf("\n Distance in Kilometers :  %f",km);
					fprintf(con,"\n%f mi = %f km",mi,km);
				break;		
				case 2:
					printf("\n Length in Millimeters :  ");
					scanf("%f",&mm);
					in=mm*0.039370;
					printf("\n Length in Inches :  %f",in);
					fprintf(con,"\n%f mm = %f in",mm,in);
				break;
				case 3:	
					printf("\n Length in Inches :  ");
					scanf("%f",&in);
					ft=in*0.08333;
					printf("\n Length in Feet :  %f",ft);
					fprintf(con,"\n%f in = %f ft",in,ft);
				break;
				case 4:
					printf("\n Length in Feet");
					scanf("%f",&ft);
					in=ft*12.00;
					printf("\n Length in Inches :  %f",in);
					fprintf(con,"\n%f ft = %f in",ft,in);
				break;
				case 5:
					printf("\n Length in Inches :  ");
					scanf("%f",&in);
					mm=in/0.039370;
					printf("\n Length in Millimetres :  %f",mm);
					fprintf(con,"\n%f in = %f mm",in,mm);
				break;
				case 6:
						printf("\n Length in Kilometres :  ");
						scanf("%f",&km);
						mi=km/1.66;
						printf("\n Length in Miles :  %f",mi);
						fprintf(con,"\n%f km = %f mi",km,mi);
				break;	
				case 7:
					   	printf("\n Length in Metres :  ");
						scanf("%f",&m);
						ft=m*3.2808;
						printf("\n Length in Feet :  %f",ft);
						fprintf(con,"\n%f m = %f ft",m,ft);
				break;	
				case 8:
		    			printf("\n Length in Feet :  ");
		    			scanf("%f",&ft);
						m=ft/3.2808;
						printf("\n Length in Metres :  %f",m);
						fprintf(con,"\n%f ft = %f m",ft,m);
				break;	
				case 9:
		    		    printf("\n Length in Inches :  ");
						scanf("%f",&in);
						cm=in/0.39370;
						printf("\n Length in centimeters :  %f",cm);
						fprintf(con,"\n%f in = %f cm",in,cm);
				break;	
				case 10:
					printf("\n Length in centimeters :  ");
					scanf("%f",&cm);
					in=cm*0.39370;
					printf("\n Length in Inches :  %f",in);
					fprintf(con,"\n%f cm = %f in",cm,in);
				break;
				case 11:
		    		printf("\n Length in Yards :  ");
					scanf("%f",&ya);
					km=ya/1093.6;
					printf("\n Length in Km :  %f",km);
					fprintf(con,"\n%f yd = %f km",ya,km);
					break;
				default:
				system("cls");
				printf("-----Enter Appropriate Choice-----\n");	
				goto length;
			} 
			fclose(con);
			ret();
			if(rj==1)
			{ goto convert1; }
			else
			{ goto end; }
		
		break;
		case 2:	
			fprintf(con,"\n\nConversion of Temprature\n");
			temp:
			printf("\nConversion of Temprature\n");
			printf("\n\t1) Celcius to Farheniet\n\t2) Farheniet to Celcius\n\t3) Celcius to Rankine\n\t4) Rankine to Celcius\n\t5) Farheniet to Rankine\n\t6) Rankine to Farheniet\n\t7) Celcius to Kelvin\n\t8) Kelvin to Celcius\n\t9) Farheniet to Kelvin\n\t10)Kelvin to Farheniet");
			int b;			
			float ce,fr,ra,ke;
			printf("\n\n\n\tEnter Choice : ");
			fflush(stdin);
			scanf("%d",&b);
			switch(b)
				{
					case 1:
						printf("Temperature in Celcius : ");
						scanf("%f",&ce);
						fr = ce * 9/5 + 32;
						printf("Temperature in Farheniet : %f",fr);
						fprintf(con,"\n%f C = %f F",ce,fr);
					break;
					case 2:
						printf("Temperature in Farheniet : ");
    					scanf("%f",&fr);
    					ce = (fr - 32)* 5/9;
    					printf("Temperature in Celcius : %f",ce);
    					fprintf(con,"\n%f F = %f C",fr,ce);
    				break;
						case 3:
						printf("Temperature in Celcius : ");
						scanf("%f",&ce);
						ra=(ce+273.15)*9/5;
						printf("Temperature in Rankine : %f",ra);
						fprintf(con,"\n%f C = %f Ra",ce,ra);
					break;	
					case 4:
						printf("Temperature in Rankine : ");
						scanf("%f",&ra);
						ce=(ra*5/9)-273.15;
						printf("Temperature in Celcius : %f",ce);
						fprintf(con,"\n%f Ra = %f C",ra,ce);
					break;
					case 5:
						printf("Temperature in Farheniet : ");
						scanf("%f",&fr);
						ra=(fr+459.67);
						printf("Temperature in Rankine : %f",ra);
						fprintf(con,"\n%f F = %f Ra",fr,ra);
					break;
					case 6:
						printf("Temperature in Rankine : ");
						scanf("%f",&ra);
						fr=ra-459.69;
						printf("Temperature in Farheniet : %f",fr);
						fprintf(con,"\n%f Ra = %f F",ra,fr);
					break;
					case 7:
						printf("Temperature in Celcius : ");
						scanf("%f",&ce);
						ke=(ce+273.157);
						printf("Temperature in Kelvin : %f",ke);
						fprintf(con,"\n%f C = %f K",ce,ke);
					break;	
					case 8:
						printf("Temperature in Kelvin : ");
						scanf("%f",&ke);
						ce=ke-273.157;
						printf("Temperature in Celcius : %f",ce);
						fprintf(con,"\n%f K = %f C",ke,ce);
					break;
					case 9:
						printf("Temperature in Farheniet : ");
						scanf("%f",&fr);
						ke = (fr+459.67)*5/9;
						printf("Temperature in Kelvin : %f",ke);
						fprintf(con,"\n%f F = %f K",fr,ke);
					break;
					case 10:
						printf("Temperature in Kelvin : ");
    					scanf("%f",&ke);
    					fr = ke*5/9-459.67;
    					printf("Temperature in Farheniet : %f",fr);
    					fprintf(con,"\n%f K = %f K",ke,fr);
    				break;
					default:
					system("cls");
					printf("-----Enter Appropriate Choice-----\n");	
					goto temp;
				}
				fclose(con);
			ret();
			if(rj==1)
			{ goto convert1; }
			else
			{ goto end; }
		break;
		case 3:
			fprintf(con,"\n\nConversion of Weight");
			weight:
			printf("\nConversion of Weight\n");
			printf("\n\t1)Pounds to Kilograms\n\t2)Kilograms to Poundsn\t3)Stones to Kilograms\n\t4)Kilograms  to Stones\n\t5)Pounds to Ounces\n\t6)Ounces to Pounds\n\t7)Grams to Ounces\n\t8)Ounces to Grams\n\n");
 			int z;
			float kg,g,ou,st,po;
			printf("\n\tEnter Choice : ");
			fflush(stdin);
			scanf("%d",&z);
			switch(z)
			{
				case 1:
					printf("\n Weight in Pounds : ");
					scanf("%f",&po);
					kg=po/2.2046;
					printf("\n Weight in Kilograms : %f",kg);
					fprintf(con,"\n%f po = %f kg",po,kg);
				break;
				case 2:
					printf("\n Weight in Kilograms : ");
					scanf("%f",&kg);
					po=kg*2.2046;
					printf("\n Weight in Pounds : %f",po);
					fprintf(con,"\n%f kg = %f po",kg,po);
				break;
				case 3:
					printf("\n Weight in Stones : ");
					scanf("%f",&st);
					kg=st/0.15747;
					printf("\n Weight in Kilograms : %f",kg);
					fprintf(con,"\n%f st = %f kg",st,kg);
				break;
				case 4:
					printf("\n Weight in Kilogram : ");
					scanf("%f",&kg);
					st=kg*0.15747;
					printf("\n Weight in Stones : %f",st);
					fprintf(con,"\n%f kg = %f st",kg,st);
				break;	
				case 5:
					printf("\n Weight in Pounds : ");
					scanf("%f",&po);
					ou=po/0.062500;
					printf("\n Weight in Ounces : %f",ou);
					fprintf(con,"\n%f po = %f ou",po,ou);
				break;
				case 6:
					printf("\n Weight in Ounces : ");
					scanf("%f",&ou);
					po=ou*0.062500;
					printf("\n Weight in Pounds : %f",po);
					fprintf(con,"\n%f ou = %f po",ou,po);
				break;	
				case 7:
					printf("\n Weight in Grams : ");
					scanf("%f",&g);
					ou=g*0.035274;
					printf("\n Weight in Ounces : %f",ou);
					fprintf(con,"\n%f g = %f ou",g,ou);
				break;	
				case 8:
					printf("\n Weight in Ounces : ");
					scanf("%f",&ou);
					g=ou/0.035274;
					printf("\n Weight in Grams : %f",g);
					fprintf(con,"\n%f ou = %f g",ou,g);
				break;		
				default:
				system("cls");
				printf("-----Enter an Appropriate Choice-----\n");	 
				goto weight;
			}
			fclose(con);
			ret();
			if(rj==1)
			{ goto convert1; }
			else
			{ goto end; }
		break;
		case 4:
			fprintf(con,"\n\nConversion of Area\n");
			area:
			printf("\nConversion of Area\n");
			printf("\n\t 1)Square Feet to Acres\n\t 2)Acres to Square Feet\n\t 3)Hectares to Acres\n\t 4)Acre to Hectare\n\t 5)Hectares to Square Feet\n\t 6)Square feet to Hectare\n\t 7)Square Miles to Square Kilometres\n\t 8)Square Kilometres to Square Miles\n\n");
	   		int w;
	   		float fe,ac,he,sf,sm,sk;
	   		printf("\n\n\n\tEnter Choice : ");
	   		fflush(stdin);
	   		scanf("%d",&w);
	   		switch(w)
	   		{
	   			case 1:
	   				printf("\n Area in Square Feet : ");
					scanf("%f",&sf);
					ac=sf*2.2956;
					printf("\n Area in Acres : %f",ac);
					fprintf(con,"\n%f sqft = %f acre",sf,ac);
				break;
				case 2:
					printf("\n Area in Acres : ");
					scanf("%f",&ac);
					sf=ac/2.2956;
					printf("\n Area in Square Feet : %f",sf);
					fprintf(con,"\n%f acre = %f sqft",ac,sf);
				break;	
				case 3:
					printf("\n Area in Hectares : ");
					scanf("%f",&he);
					ac=he*2.4711;
					printf("\n Area in Acres : %f",ac);
					fprintf(con,"\n%f hec = %f acre",he,ac);
				break;	
				case 4:
					printf("\n Area in Acres : ");
					scanf("%f",&ac);
					he=ac/2.4711;
					printf("\n Area in Hectares : %f",he);
					fprintf(con,"\n%f acre = %f hec",ac,he);
				break;
				case 5:
					printf("\n Area in Hectares : ");
					scanf("%f",&he);
					sf=he*107640;
					printf("\n Area in Square Feet : %f",sf);
					fprintf(con,"\n%f hec = %f sqft",he,sf);
				break;	
				case 6:
					printf("\n Area in Square Feet : ");
					scanf("%f",&sf);
					he=sf/107640;
					printf("\n Area in Hectares : %f",he);
					fprintf(con,"\n%f sqft = %f he",sf,he);
				break;	
				case 7:
					printf("\n Area in Square Miles : ");
					scanf("%f",&sm);
					sk=sm/0.38610;
					printf("\n Area in Square Kilometres : %f",sk);
					fprintf(con,"\n%f sqmi = %f sqkm",sm,sk);
				break;	
				case 8:
					printf("\n Area in Square Kilometres : ");
					scanf("%f",&sk);
					sm=sk*0.38610;
					printf("\n Area in Square Miles : %f",sm);
					fprintf(con,"\n%f sqkm = %f sqmi",sk,sm);
				break;
				default:
				system("cls");
				printf("-----Enter an Appropriate Choice-----\n");
	  	    	goto area;
			}
			fclose(con);
			ret();
			if(rj==1)
			{ goto convert1; }
			else
			{ goto end; }
		break;  
		case 5:
			fprintf(con,"\n\nConversion for Volume\n");
			volume:
			printf("\nConversion of Volume\n");
			printf("\n\t1) US Gallons to Litres\n\t2) Litres to US Gallons\n\t3) ml to Ounces\n\t4) Ounces to ml\n\t5) Ounces to Litres\n\t6) Litres to Ounces");
			int q;
			float usg,lit,oun,mil;
			printf("\n\tEnter Choice : ");
			scanf("%d",&q);
			switch(q)
			{
				case 1:
					printf("\n Volume in US Gallons : ");
					scanf("%f",&usg);
					lit=usg/0.26417;
					printf("\n Volume in Litres : %f",lit);
					fprintf(con,"\n%f US ga = %f L",usg,lit);
				break;
				case 2:
					printf("\n Volume in Litres : ");
					scanf("%f",&lit);
					usg=lit*0.26417;
					printf("\n Volume in US Gallons : %f",usg);
					fprintf(con,"\n%f L = %f US ga",lit,usg);
				break;
				case 3:
					printf("\n Volume in ml : ");
					scanf("%f",&mil);
					oun=mil*0.033814;
					printf("\n Volume in Ounces : %f",oun);
					fprintf(con,"\n%f ml = %f ou",mil,oun);
				break;
				case 4:
					printf("\n Volume in Ounces : ");
					scanf("%f",&oun);
					mil=oun/0.033814;
					printf("\n Volume in ml : %f",mil);
					fprintf(con,"\n%f ou = %f ml",oun,mil);
				break;
				case 5:
					printf("\n Volume in Ounces : ");
					scanf("%f",&oun);
					lit=oun/33.814;
					printf("\n Volume in Litres : %f",lit);
					fprintf(con,"\n%f ou = %f L",oun,lit);
				break;	
				case 6:
					printf("\n Volume in Litres : ");
					scanf("%f",&lit);
					oun=lit*33.814;
					printf("\n Volume in Ounces : %f",oun);
					fprintf(con,"\n%f L = %f ou",lit,oun);
				break;	
				default:
					system("cls");
					printf("-----Enter an Appropriate Choice-----\n");
					goto volume;	
			}
			fclose(con);
			ret();
			if(rj==1)
			{ goto convert1; }
			else
			{ goto end; }
		break;
		case 6:
			{
				fprintf(con,"\n\nConversion of Angles\n");
				angle:
				printf("\nConversion of Angles\n");
				printf("\n\t1) Degree to Radians\n\t2) Radians to Degree\n\t3) Degree to Gradians\n\t4) Gradians to Degree\n\t5) Radians to Gradians\n\t6) Gradians to Radians ");
				int ang;
				float de,ra,gra;
				printf("\n\tEnter Choice : ");
				fflush(stdin);
				scanf("%d",&ang);
				switch(ang)
				{
					case 2:
						printf("\n Angle in Radians : ");
						scanf("%f",&ra);
						de=ra*57.296;
						printf("\n Angle in Degree : %f",de);
						fprintf(con,"\n%f Rad = %f deg",ra,de);
					break;
					case 1:
						printf("\n Angle in Degree : ");
						scanf("%f",&de);
						ra=de/57.296;
						printf("\n Angle in Radians : %f",ra);
						fprintf(con,"\n%f deg = %f Rad",de,ra);
					break;
					case 3:
						printf("\n Angle in Degree : ");
						scanf("%f",&de);
						gra=1.111119*de;
						printf("\n Angle in Gradians : %5f",gra);
						fprintf(con,"\n%f deg = %f grad",de,gra);
					break;
					case 4:
						printf("\n Angle in Gradians : ");
						scanf("%f",&gra);
						de=0.9*gra;
						printf("\n Angle in Degree : %5f",de);
						fprintf(con,"\n%f grad = %f deg",gra,de);
					break;
					case 5:
						printf("\n Angle in Radians : ");
						scanf("%f",&ra);
						gra=ra/0.015708;
						printf("\n Angle in Gradians : %f",gra);
						fprintf(con,"\n%f Rad = %f gra",ra,gra);
						break;
					case 6:
						printf("\n Angle in Gadians : ");
						scanf("%f",&gra);
						ra=gra*0.015708;
						printf("\n Angle in Radians : %f",ra);
						fprintf(con,"\n%f grad = %f Rad",gra,ra);
						break;
					case 7:
						goto end;
					default:
						system("cls");
						printf("-----Enter an Appropriate Choice-----\n");
						goto angle;
				}
				fclose(con);
					ret();
					if(rj==1)
					{ goto convert1; }
					else
					{ goto end; }
			}
		break;	
	}
}
   else
   {    system("cls");
   		printf("-----Enter an Appropriate Choice-----\n");
    	goto convert;
   }
    end:
	fclose(con);
	system("notepad conversion history.txt");
	exit (0);
//getch();
}
void ret()
{
	printf("\n\n\n\t1) Go to Main Menu\n\t2) Exit Converter\n\t");
	fflush(stdin);
	scanf("%d",&rj);
	system("cls");
}
