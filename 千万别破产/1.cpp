/*
ǧ����Ʋ�(Don't be poor)��Ϸ��ӭ�����ó������VC,TC��ƽ̨�ϱ���ɹ���˳������
2014-12-14��̳ɹ�/2015-01-251.1..0�ɹ���д��1784��
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
	int password;
	printf("������ͨ����:");
	scanf("%d",&password);
	if(password!=10000) exit(0);
	while(1)
	{
		system("cls");
		int value,queding,queding2,value100=0,value101=0,value200=0,value300=0,value301=0;
		int passcard60=0 ,passcard80=0;
		int en1,en2_1,en2_2,en2_3,en3_1,en3_2,en3_3,en3_4,lv=1,exp=0,xexp=100,expmoney,money,gold=0,day=1,choise,ch1,lvlibao,hunger=160,mood=600,hgmax=160,mdmax=600,renqi=0,ch2,tour=0,yinh=0,cunr=0,ch3_tmoney=0,lix=3,zhiye,myzhiye=0,ch4,ch5,iszylv=0,zhiye1_tms=3,resttms=0,zylv=1,shengz=0,zhiye2=0,zy2_days=5,zy2_yydays=1,savecard8=0,savecard6=0,isholiday=0,hungersave=0,moodsave=0,zhufuday=0,zhiye1day=0,zhiye2day=0;
		int lib,lvlib10=3,lvlib20=3,lvlib30=3,lvlib40=3,lvlib50=3,lvlib60=3,lvlib65=3,lvlib70=3,lvlib75=3,lvlib80=3,lvlib81=3,lvlib82=3,lvlib83=3,lvlib84=3,lib1=0,lib2=0,lib3=0,lib4=0,lib5=0,lib6=0,lib7=0,lib8=0,lib9=0,lib10=0,lib11=0,lib12=0,lib13=0,lib14=0,lib15=0,lib16=0,lib17=0,libday=0,islib=0,libmin=0,holidayrand=0;
		float ch1_low=0.5,ch1_high=1.5,ch1_money=0,ch3_money=0,ch1_fengx=0,shouxu=1.0;
		srand(time(NULL));
		printf("һ���������ĳ�ʼ���:\n"
		"���\t����\t��\n"
		"------------------------------------\n"
		"1\t����\t20000\n"
		"2\tƶ��\t5000\n"
		"3\t��ԣ\t80000\n"
		"4\t����\t200000\n"
		"5\t����\t�Զ���\n"
		"������Ϸģʽ:");
		scanf("%d",&en1);
		if(en1==1) money=20000;
		else if(en1==2) money=5000;
		else if(en1==3) money=80000;
		else if(en1==4) money=200000;
		else if(en1==5)
		{
		printf("���������ĳ�ʼ���:");
		scanf("%d",&money);
		}
		else
		{
			printf("��������밴���������������");
			getch();
			getch();
			continue;
		}
		system("cls");
		printf("���������������ֽ�Ǯģʽ\n"
		       "���\t����\t����\n"
		       "----------------------------------\n"
		       "1\t����\t����ǮС��1000ʱ���ֽ�����1000\n"
		       "2\tÿ��\tÿ���ֽ�����1000\n"
		       "3\tÿ��\tÿ��(30��)�ֽ�����10000\n"
		       "������1������������1�������\n\n"
		       "1�Ƿ���:");
		scanf("%d",&en2_1);
		printf("2�Ƿ���:");
		scanf("%d",&en2_2);
		printf("3�Ƿ���:");
		scanf("%d",&en2_3);
		system("cls");
		printf("����������������ģʽ\n"
		       "���\t����\t\t����\n"
		       "----------------------------------\n"
		       "1\t��ʳ����\t��ʳ�Ȳ������\n"
		       "2\t���鼫��\t����ֵ�������\n"
		       "3\t��������\t������ȡǮ���轻������\n"
		       "4\t�������\tÿ�첻��Ҫ�������\n"
		       "������1������������1�������\n\n"
		       "1�Ƿ���:");
		scanf("%d",&en3_1);
		printf("2�Ƿ���:");
		scanf("%d",&en3_2);
		printf("3�Ƿ���:");
		scanf("%d",&en3_3);
		printf("4�Ƿ���:");
		scanf("%d",&en3_4);
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		while(1)
		{
			system("cls");
			if(money<0)
			{
				printf("��Ϸ����,��Ϊ�ֽ����0\n");
				getch();
				getch();
				break;
			}
			if(en2_1==1&&money<1000) money+=1000;
			if(en3_1==1) hunger=hgmax;
			if(en3_2==1) mood=mdmax;
			while(exp>=xexp)
			{
				exp-=xexp;
				lv++;
				if(lv==60&&passcard60==0)
				{
					printf("Ҫ������60����Ҫͨ��������֤\n");
					lv=59;
					xexp=59*59*100;
					exp=xexp-1;
					getch();
					getch();
				}
				if(lv==80&&passcard80==0)
				{
					printf("Ҫ������80����Ҫͨ��������֤\n");
					lv=79;
					xexp=79*79*100;
					exp=xexp-1;
					getch();
					getch();
				}
				xexp=lv*lv*100;
				if(lv==85)
				{
					printf("��ϲ�㣬����85��,��Ϸʤ��!\n�����������");
					getch();
					getch();
					break;
				}
				if((lv>=11&&lv<=20)||(lv>=31&&lv<=40)) hgmax+=3;
				if((lv>=21&&lv<=30)||(lv>=41&&lv<=50)) mdmax+=5;
			}//����ѭ��
			if(lv==85) break;
			if(mood<0)
			{
				printf("��Ϸ��������Ϊ����ֵ����0�������������ģʽ����\n");
				getch();
				getch();
				break;
			}
			system("cls");
			printf("LV.  %d\t\tEXP.  %d/%d\n"
			       "�� %d      Day:%d    G: %d\n"
			       "��ʳ��:%d/%d\t����ֵ:%d/%d\n"
			       "ĿǰͶ�ʷ���:%5.1f~%5.1f\n"
			       "����ֵ:%d\t��ǰ��Ϣ:   %d%%\n",lv,exp,xexp,money,day,gold,hunger,hgmax,mood,mdmax,ch1_low,ch1_high,renqi,lix);
			printf("\n���\tѡ��\t˵��\n"
			       "----------------------------------\n"
			       "1\t�\t����\n"
			       "2\tͶ��\tͶ�ʿ���׬Ҳ���ܿ�\n"
			       "3\tְҵ\t׬Ǯ�ĺö���\n"
			       "4\t����\t���Դ�ȡǮ\n"
			       "5\t����\t��������Ʒ\n"
			       "6\t��һ��\t����һ��\n"
			       "����:");
			if(hunger<50) printf("(ע�ⱥʳ��)");
			if(mood<150) printf("(ע������ֵ)");
			if(isholiday) printf("(���սڼ���)");
			scanf("%d",&choise);
			if(choise==1)
			{
				system("cls");
				printf("��ӭ�����\n"
				       "���\t����\t\t����\n"
				       "------------------------------\n"
				       "0\t����\t\n"
				       "1\t�ȼ�����   С��60��ʱ��ÿ10��������һ�������\n"
				       "2\t�齱\tÿ10����Գ齱һ��\n"
				       "3\t����\t���Կ������ĵ���\n"
				       "4\t�ڼ���\t��������\n"
				       "����:");
				scanf("%d",&ch1);
				if(ch1==0) continue;
				system("cls");
				if(ch1==1)
				{
					printf("��ӭ�����ȼ�����\n\n");
					if(lv<60)
					{
						printf("���\t����\n"
						       "--------------------------------\n"
						       "0\t����\n"
						       "1\t10�������\n"
						       "2\t20�������\n"
						       "3\t30�������\n"
						       "4\t40�������\n"
						       "5\t50�������\n"
						       "����:");
						scanf("%d",&lib);
						system("cls");
						if(lib==0) continue;
						if(lib==1&&lv>=10&&lvlib10==3)
						{
							lvlib10=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==2&&lv>=20&&lvlib20==3)
						{
							lvlib20=0;
							money+=50000;
							renqi+=1;
							exp+=10000;
							gold+=1;
							lib1+=1;
							lib15++;
							printf("��ϲ��ý�Ǯ50000������1������10000,���1��������1,ְҵ������1\n");
						}
						if(lib==3&&lv>=30&&lvlib30==3)
						{
							lvlib30=0;
							money+=100000;
							renqi+=2;
							exp+=20000;
							gold+=1;
							lib1+=1;
							printf("��ϲ��ý�Ǯ100000������2������20000,���1��������1\n");
						}
						if(lib==4&&lv>=40&&lvlib40==3)
						{
							lvlib40=0;
							money+=300000;
							renqi+=3;
							exp+=40000;
							gold+=2;
							lib1+=1;
							lib5+=1;
							printf("��ϲ��ý�Ǯ300000������3������40000,���2��������1,���ۿ�\n");
						}
						if(lib==5&&lv>=50&&lvlib50==3)
						{
							lvlib50=0;
							money+=600000;
							renqi+=5;
							exp+=80000;
							gold+=2;
							lib1+=1;
							lib16++;
							printf("��ϲ��ý�Ǯ600000������5������80000,���2��������1,ְҵ������1\n");
						}
						getch();
						getch();
						continue;
					}
					else if(lv<80&&lv>=60)
					{
						printf("���\t����\n"
						       "--------------------------------\n"
						       "0\t����\n"
						       "1\t60�������\n"
						       "2\t65�������\n"
						       "3\t70�������\n"
						       "4\t75�������\n"
						       "����:");
						scanf("%d",&lib);
						if(lib==1&&lv>=60&&lvlib60==3)
						{
							lvlib60=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==2&&lv>=65&&lvlib65==3)
						{
							lvlib65=0;
							money+=50000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ50000������1������5000\n");
						}
						if(lib==3&&lv>=70&&lvlib70==3)
						{
							lvlib70=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==4&&lv>=75&&lvlib75==3)
						{
							lvlib75=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
					}
					if(lv<85&lv>=60)
					{
						printf("���\t����\n"
						       "--------------------------------\n"
						       "0\t����\n"
						       "1\t80�������\n"
						       "2\t81�������\n"
						       "3\t82�������\n"
						       "4\t83�������\n"
						       "5\t84�������\n"
						       "����:");
						scanf("%d",&lib);
						if(lib==1&&lv>=80&&lvlib80==3)
						{
							lvlib80=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==2&&lv>=81&&lvlib81==3)
						{
							lvlib81=0;
							money+=50000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ50000������1������5000\n");
						}
						if(lib==3&&lv>=82&&lvlib82==3)
						{
							lvlib82=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==4&&lv>=83&&lvlib83==3)
						{
							lvlib83=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
						if(lib==5&&lv>=84&&lvlib84==3)
						{
							lvlib84=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("��ϲ��ý�Ǯ20000������1������5000\n");
						}
					}
					getch();
					getch();
					continue;
				}
				else if(ch1==2)
				{
					int day10=day,restday=0,zhuanpan,zhuanpan1,zhuanpan2,zhuanpan4,zhuanpan5,zhuanpan6;
					while(day10%10!=0)
					{
						restday++;
						day10++;
					}
					printf("��ӭ����ת�̻\n"
					       "����ת�̴���:%d\n"
					       "�����´�ת��ʱ�仹ʣ:%d��\n"
					       "���\t����\t����\n"
					       "---------------------------------\n"
					       "1\t��Ǯ\t��\n"
					       "2\tEXP\t�ϴ�\n"
					       "3\t�ȼ�\t��С\n"
					       "4\t������\tС\n"
					       "5\t����EXP\t��С\n"
					       "6\t����\t��С\n"
					       "7\t���\t��С\n��0���أ������������\n",resttms,restday);
					scanf("%d",&queding);
					if(queding==0) continue;
					if(resttms==0)
					{
						printf("��Ǹ��ʣ�����Ϊ0\n");
						getch();
						getch();
						continue;
					}
					resttms--;
					zhuanpan=rand()%100;
					if(zhuanpan<35)
					{
						zhuanpan1=rand()%3000+1000;
						money+=zhuanpan1;
						printf("��ϲ��ý�Ǯ%d",zhuanpan1);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=35&&zhuanpan<60)
					{
						zhuanpan2=rand()%40000+5000;
						exp+=zhuanpan2;
						printf("��ϲ��þ���%d",zhuanpan2);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=60&&zhuanpan<75)
					{
						exp+=xexp;
						printf("��ϲ�������1��");
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=75&&zhuanpan<85)
					{
						zhuanpan4=rand()%50000+10000;
						money+=zhuanpan4;
						printf("��ϲ��ô�����Ǯ%d",zhuanpan4);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=85&&zhuanpan<90)
					{
						zhuanpan5=rand()%300000+50000;
						exp+=zhuanpan5;
						printf("��ϲ��ô�������%d",zhuanpan5);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=90&&zhuanpan<95)
					{
						zhuanpan6=rand()%10+5;
						renqi+=zhuanpan6;
						printf("��ϲ�������%d",zhuanpan6);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=95&&zhuanpan<100)
					{
						gold++;
						printf("��ϲ��ý��1\n");
						getch();
						getch();
						continue;
					}
				}
				else if(ch1==3)
				{
					int l=1;
					printf("��ӭ�����������\n"
					       "0.����\n"
					       "1.��������%d 2.ף������%d 3.ף�������%d 4.��Ǯ�����%d 5.���ۿ���%d 6.���ۿ���%d 7.���������%d 8.����������%d 9.����������%d 10.����������%d 11.60����֤֤���%d 12.80����֤֤���%d 13.ְҵ�����%d 14.ְҵ�����%d 15.ְҵ������%d 16.ְҵ������%d 17.����ȯ�����%d\nף������:%d\n����:",lib1,lib2,lib3,lib4,lib5,lib6,lib7,lib8,lib9,lib10,lib11,lib12,lib13,lib14,lib15,lib16,lib17,zhufuday);
					scanf("%d",&queding);
					if(queding==0||queding>17) continue;
					printf("����Ҫ�����������:");
					scanf("%d",&value);
					getch();
					system("cls");
					if(queding==1)
					{
						if(value>lib1) continue;
						lib1-=value;
						while(value>0)
						{
							system("cls");
							printf("��%d�����:",l);
							value100=rand()%100;
							if(value100<15)
							{
								value101=rand()%20000;
								money+=value101;
								printf("��ϲ���%d��Ǯ\n",value101);
							}
							if(value100>=15&&value100<30)
							{
								value101=rand()%100000;
								exp+=value101;
								printf("��ϲ���%d����\n",value101);
							}
							if(value100>=30&&value100<45)
							{
								exp+=xexp;
								printf("��ϲ�������1��\n");
							}
							if(value100>=45&&value100<60)
							{
								value101=rand()%5+1;
								renqi+=value101;
								printf("��ϲ���%d����\n",value101);
							}
							if(value100>=60&&value100<65)
							{
								lib2++;
								printf("��ϲ���ף����\n");
							}
							if(value100>=65&&value100<70)
							{
								lib3++;
								printf("��ϲ���ף�����\n");
							}
							if(value100>=70&&value100<75)
							{
								lib5++;
								printf("��ϲ��ð��ۿ�\n");
							}
							if(value100>=75&&value100<80)
							{
								lib13++;
								printf("��ϲ���ְҵ����\n");
							}
							if(value100>=80&&value100<84)
							{
								lib4++;
								printf("��ϲ��ý�Ǯ���\n");
							}
							if(value100>=84&&value100<88)
							{
								lib6++;
								printf("��ϲ������ۿ�\n");
							}
							if(value100>=88&&value100<92)
							{
								lib7++;
								printf("��ϲ��þ������\n");
							}
							if(value100>=92&&value100<96)
							{
								lib14++;
								printf("��ϲ���ְҵ����\n");
							}
							if(value100>=96&&value100<100)
							{
								lib17++;
								printf("��ϲ��ô���ȯ���\n");
							}
							getch();
							l++;
							value--;
						}
						continue;
					}
					else if(queding==2)
					{
						if(value>lib2) continue;
						lib2--;
						while(value>0)
						{
							if(zhufuday!=0)
							{
								printf("��һ��ף������Ч�С���\n");
								lib2++;
								getch();
								break;
							}
							value200=rand()%5+1;
							zhufuday+=4;
							if(value200==1) printf("��ϲ����������\n");
							else if(value200==2) printf("��ϲ�����ȡ��������\n");
							else if(value200==3) printf("��ϲ���׬�ķ������0.1\n");
							if(value200==4) printf("��ϲ��ÿ��ķ��ս���0.1\n");
							if(value200==5) printf("��ϲ������д����Ϣ���10%\n");
							getch();
							value--;
						}
						continue;
					}
					else if(queding==3)
					{
						if(value>lib3) continue;
						lib3-=value;
						while(value>0)
						{
							value100=rand()%5+1;
							if(value100==1)
							{
								printf("��ϲ���500Ԫ֧Ʊ\n");
								ch3_tmoney+=500;
							}
							else if(value100==2)
							{
								printf("��ϲ���5000Ԫ֧Ʊ\n");
								ch3_tmoney+=5000;
							}
							else if(value100==3)
							{
								printf("��ϲ���50000Ԫ֧Ʊ\n");
								ch3_tmoney+=50000;
							}
							else if(value100==4)
							{
								printf("��ϲ���1�ű�ʳ����ȯ\n");
								hungersave++;
							}
							else if(value100==5)
							{
								printf("��ϲ���1�����ִ���ȯ\n");
								moodsave++;
							}
							getch();
							value--;
						}
						continue;
					}
					else if(queding==4)
					{
						if(value>lib4) continue;
						lib4-=value;
						while(value>0)
						{
							value100=rand()%399601+400;//�������400-400000��Ǯ
							money+=value100;
							printf("��ϲ��ý�Ǯ%d\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==5)
					{
						if(value>lib5) continue;
						lib5-=value;
						while(value>0)
						{
							savecard8+=5;
							value--;
						}
					}
					else if(queding==6)
					{
						if(value>lib6) continue;
						lib6-=value;
						while(value>0)
						{
							savecard6+=10;
							value--;
						}
					}
					else if(queding==7)
					{
						if(value>lib7) continue;
						lib7-=value;
						while(value>0)
						{
							value100=rand()%1198801+1200;//�������1200-1200000exp
							exp+=value100;
							printf("��ϲ��þ���%d\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==8)
					{
						if(value>lib8) continue;
						lib8-=value;
						while(value>0)
						{
							value100=rand()%3+1;//�������1-3����
							renqi+=value100;
							printf("��ϲ�������%d\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==9)
					{
						if(value>lib9) continue;
						lib9-=value;
						while(value>0)
						{
							value100=rand()%5+2;//�������2-6����
							renqi+=value100;
							printf("��ϲ�������%d\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==10)
					{
						if(value>lib10) continue;
						lib10-=value;
						while(value>0)
						{
							value100=rand()%9+4;//�������4-12����
							renqi+=value100;
							printf("��ϲ�������%d\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==11)
					{
						if(value>lib11) continue;
						lib11-=value;
						while(value>0)
						{
							passcard60++;
							printf("��ϲͨ��60����֤\n");
							getch();
							value--;
						}
						continue;
					}
					else if(queding==12)
					{
						if(value>lib12) continue;
						lib12-=value;
						while(value>0)
						{
							passcard80++;
							printf("��ϲͨ��80����֤\n");
							getch();
							value--;
						}
						continue;
					}
					else if(queding==13)
					{
						if(value>lib13) continue;
						lib13--;
						while(value>0)
						{
							if(zhiye1day!=0)
							{
								printf("��һ��ְҵ������Ч�С���\n");
								lib13++;
								getch();
								break;
							}
							value300=rand()%4+1;
							zhiye1day+=4;
							if(value300==1) printf("��ϲ�����������50%\n");
							else if(value300==2)
							{
								printf("��ϲ���������ְ��20%\n");
								if(myzhiye==5||myzhiye==6||myzhiye==7) shengz+=20;
							}
							else if(value300==3) printf("��ϲ��ý��Ϳ۳�������50%\n");
							if(value300==4)
							{
								printf("��ϲ������Ӵ򹤴���2��\n");
								zhiye1_tms+=2;
							}
							getch();
							value--;
						}
						continue;
					}
					else if(queding==14)
					{
						if(value>lib14) continue;
						lib14--;
						while(value>0)
						{
							if(zhiye2day!=0)
							{
								printf("��һ��ְҵ������Ч�С���\n");
								lib14++;
								getch();
								break;
							}
							value301=rand()%3+1;
							zhiye1day+=4;
							if(value301==1) printf("��ϲ�������ְҵ������50%\n");
							else if(value301==2) printf("��ϲ��ý��Ϳ۳�������50%\n");
							if(value301==3)
							{
								printf("��ϲ�������Ӫҵ����1��\n");
								zy2_yydays+=1;
							}
							getch();
							value--;
						}
						continue;
					}
					else if(queding==15)
					{
						if(value>lib15) continue;
						lib15-=value;
						while(value>0)
						{
							value100=rand()%7+1;//�������1-7ְҵ
							printf("���Ƿ�Ҫ�����Ϊ%d��ְҵ?(1,��1)\n",value100);
							scanf("%d",&value101);
							getch();
							if(value101!=1) break;
							myzhiye=value100;
							printf("��ϲ��ô����Ϊ%d��ְҵ\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==16)
					{
						if(value>lib16) continue;
						lib16-=value;
						while(value>0)
						{
							value100=rand()%3+1;//�������1-3��ְ
							printf("���Ƿ�Ҫ��ְ���Ϊ%d��ְҵ?(1,��1)\n",value100);
							scanf("%d",&value101);
							getch();
							if(value101!=1) break;
							zhiye2=value100;
							printf("��ϲ�����ְ���Ϊ%d��ְҵ\n",value100);
							getch();
							value--;
						}
						continue;
					}
					else if(queding==17)
					{
						if(value>lib17) continue;
						lib17-=value;
						while(value>0)
						{
							value100=rand()%6+1;//6��1
							if(value100==1)
							{
								hungersave+=1;
								printf("��ϲ���1�ű�ʳ����ȯ\n");
							}
							else if(value100==2)
							{
								hungersave+=2;
								printf("��ϲ���2�ű�ʳ����ȯ\n");
							}
							else if(value100==3)
							{
								hungersave+=3;
								printf("��ϲ���3�ű�ʳ����ȯ\n");
							}
							else if(value100==4)
							{
								moodsave+=1;
								printf("��ϲ���1�����ִ���ȯ\n");
							}
							else if(value100==5)
							{
								moodsave+=2;
								printf("��ϲ���2�����ִ���ȯ\n");
							}
							else if(value100==6)
							{
								moodsave+=3;
								printf("��ϲ���3�����ִ���ȯ\n");
							}
							getch();
							value--;
						}
						continue;
					}
				}
				else if(ch1==4)
				{
					int ch1_4,rstholidy=0;
					ch1_4=day;
					while((ch1_4%30!=0&&ch1_4%30!=1&&ch1_4%30!=2)||ch1_4==1||ch1_4==2)
					{
						rstholidy++;
						ch1_4++;
					}
					printf("DAY:%d\n��ڼ��ջ���%d��\n"
					       "�ڼ��ճ齱����Ϊ%d\n"
					       "��0���أ���1������Ʒ,����0,1�����������ڼ��ճ齱\n",day,rstholidy,holidayrand);
					scanf("%d",&queding);
					if(queding==0) continue;
					else
					if(queding==1)
					{
						if(islib==0) continue;
						islib-=1;
						libmin=rand()%8+(libday-1)*6+2;//��һ��������׼Ϊ2-8
						if(renqi-libmin<0)
						{
							printf("����տգ����������е��Ŷ\n");
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=3&&renqi-libmin>=1)
						{
							value100=rand()%1001+1000;//���1000-2000��Ǯ
							money+=value100;
							printf("��ϲ���:��%d,��������1,ף������1,����ȯ�����1\n",value100);
							lib1+=1;
							lib2+=1;
							lib17+=1;
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=7&&renqi-libmin>=4)
						{
							value100=rand()%1001+2000;//���2000-3000��Ǯ
							money+=value100;
							printf("��ϲ���:��%d,��������1,ף������1,ף�������1,����ȯ�����1\n",value100);
							lib1+=1;
							lib2+=1;
							lib3+=1;
							lib17+=1;
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=12&&renqi-libmin>=8)
						{
							value100=rand()%2001+4000;//���4000-6000��Ǯ
							value101=rand()%140001+60000;//���60000-200000EXP
							money+=value100;
							exp+=value101;
							printf("��ϲ���:��%d,EXP.%d,��������1,ף������2,����������1,����ȯ�����2\n",value100,value101);
							lib1+=1;
							lib2+=2;
							lib8+=1;
							lib17+=2;
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=16&&renqi-libmin>=13)
						{
							value100=rand()%3001+7000;//���7000-10000��Ǯ
							value101=rand()%200001+100000;//���100000-300000EXP
							money+=value100;
							exp+=value101;
							printf("��ϲ���:��%d,EXP.%d,��������2,ף������2,ף�������2,����������1,����ȯ�����2\n",value100,value101);
							lib1+=2;
							lib2+=2;
							lib3+=2;
							lib8+=1;
							lib17+=2;
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin>=17)
						{
							value100=rand()%5001+10000;//���10000-15000��Ǯ
							value101=rand()%400001+200000;//���200000-600000EXP
							money+=value100;
							exp+=value101;
							printf("��ϲ���:��%d,EXP.%d,��������2,ף������2,ף�������2,����������1,����ȯ�����3\n",value100,value101);
							lib1+=2;
							lib2+=2;
							lib3+=2;
							lib9+=1;
							lib17+=3;
							getch();
							getch();
							continue;
						}
					}
					else
					{
						if(holidayrand==0)
						{
							printf("û���ڼ��գ��޷���ȡ\n");
							getch();
							getch();
							continue;
						}
						holidayrand--;
						value100=rand()%8+1;
						if(value100==1)
						{
							lib3++;
							printf("��ϲ���ף�����\n");
						}
						else if(value100==2)
						{
							lib4++;
							printf("��ϲ��ý�Ǯ���\n");
						}
						else if(value100==3)
						{
							lib7++;
							printf("��ϲ��þ������\n");
						}
						else if(value100==4)
						{
							lib8++;
							printf("��ϲ������������\n");
						}
						else if(value100==5)
						{
							lib9++;
							printf("��ϲ������������\n");
						}
						else if(value100==6)
						{
							lib10++;
							printf("��ϲ������������\n");
						}
						else if(value100==7)
						{
							lib13++;
							printf("��ϲ���ְҵ����\n");
						}
						else if(value100==8)
						{
							lib14++;
							printf("��ϲ���ְҵ����\n");
						}
					}
					getch();
					getch();
					continue;
				}
			}
			else if(choise==2)
			{
				system("cls");
				printf("�����ֽ�Ϊ%d,��Ͷ������100Ԫ����10000Ԫ�Ľ�Ҫ������Ͷ��0Ԫ\n",money);
				scanf("%d",&tour);
				if(tour==0) continue;
				if(tour<100||(tour>10000||tour>money))
				{
					printf("Ͷ����ٻ���࣬�򳬹��ֽ�Ľ������������������\n");
					getch();
					getch();
					continue;
				}
				mood-=rand()%60+10;
				//�۳�����10-70
				ch1_money=tour;
				money-=tour;
				ch1_fengx=(rand()%(int)(10*(ch1_high-ch1_low)+1)+(10*ch1_low))/10;
				ch1_money*=ch1_fengx;
				money+=ch1_money;
				ch1_low=rand()%5/10.0+0.3;
				ch1_high=rand()%5/10.0+1.3;
				if(value200==3&&zhufuday!=0) ch1_high+=0.1;
				if(value200==4&&zhufuday!=0) ch1_low+=0.1;
				printf("��Ͷ��%dԪ������%dԪ\n��������ص�������\n",tour,(int) ch1_money);
				getch();
				getch();
				continue;
			}
			else if(choise==3)
			{
				int zhiye1,zy1_no,zy1_lv,zy1_money,effort;
				system("cls");
				printf("��ӭ����ְҵ֮·\n"
				       "���\t����\t����\n"
				       "-----------------------------\n"
				       "0\t����\t\n"
				       "1\t��\t������ȡ�̶���Ǯ��Ϊ��ְ\n"
				       "2\t��ְ\t�Լ���Ӫ,�и߷���\n"
				       "����:");
				       scanf("%d",&zhiye);
				if(zhiye==0) continue;
				else if(zhiye==1)
				{
					system("cls");
					printf("�����ֽ�:%d\n"
					       "��ӵ�е�ְҵ:%d     ʣ��򹤴���:%d\n"
					       "ְҵLV.%d           ��ְ����:%d\n"
					       "���\t����\tLV.\t����min\t����max\n"
					       "---------------------------------------------------\n"
					       "0\t����\n"
					       "1\t���˹�\t5\t500\t500\n"
					       "2\t����Ա\t10\t700\t700\n"
					       "3\t����Ա\t15\t900\t900\n"
					       "4\t����Ա\t20\t1100\t1100\n"
					       "5\t�ۻ�Ա\t25\t1200\t1600\n"
					       "6\t����Ա\t30\t1400\t2600\n"
					       "7\t���\t35\t1800\t3800\n"
					       "����:",money,myzhiye,zhiye1_tms,zylv,shengz);
					scanf("%d",&zhiye1);
					if(zhiye1==0) continue;
					system("cls");
					iszylv=0;
					printf("�����ֽ�:%d        ְҵLV.%d\n"
					       "��0���أ���1��ְ����2��ְ����3��,���Իس�������\n",money,zylv);
					if(zhiye1==1)
					{
						zy1_no=1;
						zy1_lv=5;
						zy1_money=500;
						printf("\n��ְҵ��ְҵ�ȼ�\nѡ��:");
					}
					else if(zhiye1==2)
					{
						zy1_no=2;
						zy1_lv=10;
						zy1_money=700;
						printf("\n��ְҵ��ְҵ�ȼ�\nѡ��:");
					}
					else if(zhiye1==3)
					{
						zy1_no=3;
						zy1_lv=15;
						zy1_money=900;
						printf("\n��ְҵ��ְҵ�ȼ�\nѡ��:");
					}
					else if(zhiye1==4)
					{
						zy1_no=4;
						zy1_lv=20;
						zy1_money=1100;
						printf("\n��ְҵ��ְҵ�ȼ�\nѡ��:");
					}
					else if(zhiye1==5)
					{
						zy1_no=5;
						zy1_lv=25;
						printf("\n��ְҵ��ְҵ�ȼ�:\n"
						       "�ȼ�\t����\n"
						       "----------------------\n"
						       "0\t����\n"
						       "1\t1200\n"
						       "2\t1600\nѡ��:");
						if(zylv!=2) iszylv=1;
						if(zylv==1) zy1_money=1200;
						if(zylv==2) zy1_money=1600;
					}
					else if(zhiye1==6)
					{
						zy1_no=6;
						zy1_lv=30;
						printf("\n��ְҵ��ְҵ�ȼ�:\n"
						       "�ȼ�\t����\n"
						       "----------------------\n"
						       "0\t����\n"
						       "1\t1400\n"
						       "2\t1800\n"
						       "3\t2200\n"
						       "4\t2600\nѡ��:");
						if(zylv!=4) iszylv=1;
						if(zylv==1) zy1_money=14000;
						if(zylv==2) zy1_money=1800;
						if(zylv==3) zy1_money=2200;
						if(zylv==4) zy1_money=2600;
					}
					else if(zhiye1==7)
					{
						zy1_no=7;
						zy1_lv=35;
						printf("\n��ְҵ��ְҵ�ȼ�:\n"
						       "�ȼ�\t����\n"
						       "----------------------\n"
						       "0\t����\n"
						       "1\t1800\n"
						       "2\t2200\n"
						       "3\t2600\n"
						       "4\t3000\n"
						       "5\t3400\n"
						       "6\t3800\nѡ��:");
						if(zylv!=6) iszylv=1;
						if(zylv==1) zy1_money=1800;
						if(zylv==2) zy1_money=2200;
						if(zylv==3) zy1_money=2600;
						if(zylv==4) zy1_money=3000;
						if(zylv==5) zy1_money=3400;
						if(zylv==6) zy1_money=3800;
					}
					else continue;
					//����
					scanf("%d",&queding);
					system("cls");
					if(queding==0) continue;
					if((queding==2||queding==3||queding==4)&&myzhiye!=zy1_no)
					{
						printf("��û�����ְҵ\n");
						getch();
						getch();
						continue;
					}
					if(queding==1&&(myzhiye!=0||lv<zy1_lv))
					{
						printf("������ְҵ��ȼ�����\n");
						getch();
						getch();
						continue;
					}
					if(queding==1)
					{
						printf("��ְ�ɹ�");
						myzhiye=zy1_no;
						shengz=0;
						getch();
						getch();
						continue;
					}
					if(queding==2)
					{
						printf("��ְ�ɹ�");
						zylv=1;
						myzhiye=0;
						shengz=0;
						getch();
						getch();
						continue;
					}
					while(queding==3)
					{
						if(zhiye1_tms==0)
						{
							printf("�򹤴���Ϊ0���޷���");
							getch();
							getch();
							break;
						}
						if(iszylv)
						{
							printf("������Ŭ����(����0����,��Ч1��12):");
							scanf("%d",&effort);
							if(effort==0) break;
							if(effort<1||effort>12)
							{
								printf("Ŭ�����������,�����������");
								getch();
								getch();
								break;
							}
							value=rand()%(effort*20)+effort*10;
							if(value300==3&&zhiye1day!=0) value*=0.5;
							mood-=value;
							shengz+=effort;
							value=rand()%101;
						}
						else mood-=rand()%40+20;
						zhiye1_tms-=1;
						if(value300==1&&zhiye1day!=0) zy1_money*=1.5;
						money+=zy1_money;
						printf("�򹤳ɹ����õ���%d,����ֵʣ��%d/%d\n",zy1_money,mood,mdmax);
						if(value<shengz)
						{
							printf("��ϲ��ְ\n");
							zylv++;
							shengz=0;
							getch();
							getch();
							break;
						}
						printf("����0������������򹤣���0����,���Իس�������\n");
						scanf("%d",&queding2);
						if(queding2!=0) continue;
						else break;
					}
				}
				else if(zhiye==2)
				{
					int zy2_my,zy2_lv,zy2_md;
					float zy2_fengx;
					system("cls");
					printf("�����ֽ�:%d       ������ְΪ:%d\n"
					       "ÿ5�췢����8000Ԫ,ְҵ������*2000��Ϊ��ҵ��\n�¸�������ʣ��%d��\n"
					       "���\tLV.\t������\n"
					       "---------------------------------\n"
					       "0\t����\n"
					       "1\t20\t120\n"
					       "2\t30\t180\n"
					       "3\t40\t200\n����:",money,zhiye2,zy2_days);
					scanf("%d",&value);
					if(value==0) continue;
					system("cls");
					printf("��1��ҵ����2ת�ã���3Ӫҵ����������أ����Իس�������\n");
					if(value==1)
					{
						zy2_my=120;
						zy2_lv=20;
					}
					else if(value==2)
					{
						zy2_my=180;
						zy2_lv=30;
					}
					else if(value==3)
					{
						zy2_my=200;
						zy2_lv=40;
					}
					//����
					scanf("%d",&queding);
					if(queding==1&&(zhiye2!=0||lv<zy2_lv||money<zy2_my*2000))
					{
						printf("��ҵ����\n");
						getch();
						getch();
						continue;
					}
					if(queding==1)
					{
						money-=zy2_my*2000;
						zhiye2=value;
						printf("��ȥ��%d��Ǯ��Ϊ��ҵ�𣬴�ҵ�ɹ�",zy2_my*2000);
						getch();
						getch();
						continue;
					}
					if((queding==2||queding==3)&&zhiye2!=value)
					{
						printf("��û�����ְҵ���޷�ת�û�Ӫҵ\n");
						getch();
						getch();
						continue;
					}
					if(queding==2)
					{
						zhiye2=0;
						zy2_days=5;
						money+=20000;
						printf("������20000��Ǯ��Ϊת�ý�ת�óɹ�\n");
						getch();
						getch();
						continue;
					}
					if(queding==3)
					{
						if(zy2_yydays==0)
						{
							printf("һ��ֻ��Ӫҵһ��\n");
							getch();
							getch();
							continue;
						}
						zy2_yydays--;
						if(zy2_days==0)
						{
							printf("���չ����գ�������8000Ԫ\n");
							money-=8000;
							zy2_days=5;
							getch();
							getch();
						}
						zy2_days--;
						zy2_fengx=(rand()%(int)(10*(ch1_high-ch1_low)+1)+(10*ch1_low))/10;
						if(value301==1&&zhiye2day!=0) zy2_my*=1.5;
						money+=(int)(zy2_fengx*zy2_fengx*zy2_fengx*lv*2*zy2_my);
						zy2_md=rand()%100+20;
						if(value301==2&&zhiye2day!=0) zy2_md*=0.5;
						mood-=zy2_md;
						printf("Ӫҵ�����%d��Ǯ,���۳�%d����\n",(int)(zy2_fengx*zy2_fengx*zy2_fengx*lv*zy2_my),zy2_md);
						ch1_low=rand()%5/10.0+0.3;
						ch1_high=rand()%5/10.0+1.3;
						if(value200==3&&zhufuday!=0) ch1_high+=0.1;
						if(value200==4&&zhufuday!=0) ch1_low+=0.1;
						getch();
						getch();
						continue;
					}
				}
			}
			else if(choise==4)
			{
				system("cls");
				printf("��ӭ�������У��������Ϊ%d\n\n"
				       "���\t����\n"
				       "--------------------\n"
				       "0\t����\n"
				       "1\t��Ǯ\n"
				       "2\tȡǮ\n"
				       "����ѡ����:",ch3_tmoney);
				scanf("%d",&yinh);
				if(yinh==0) continue;
				else if(yinh==1)
				{
					system("cls");
					printf("�����ֽ�Ϊ%d,�������Ϊ%d,������Ҫ����Ľ�����100Ԫ������������0\n",money,ch3_tmoney);
					scanf("%d",&cunr);
					if(cunr==0) continue;
					if(cunr<100||cunr>money)
					{
						printf("����ʧ�ܣ���������ɷ���������\n");
						getch();
						getch();
						continue;
					}
					ch3_tmoney+=cunr;
					money-=cunr;
					printf("����ɹ��������������������\n");
					getch();
					getch();
					continue;
				}
				else if(yinh==2)
				{
					system("cls");
					printf("�����ֽ�Ϊ%d,�������Ϊ%d,������Ҫȡ���Ľ�����100Ԫ������������0\n",money,ch3_tmoney);
					scanf("%d",&ch4);
					if(ch4==0) continue;
					shouxu=1.05;
					if(en3_3==1||(value200==2&&zhufuday!=0)) shouxu=1.00;
					if((ch4*shouxu)>ch3_tmoney||ch4<100)
					{
						printf("ȡ��ʧ�ܣ���������ɷ���������\n");
						getch();
						getch();
						continue;
					}
					ch3_tmoney-=ch4*shouxu;
					money+=ch4;
					printf("ȡ���ɹ��������������������\n");
					getch();
					getch();
					continue;
				}
				else
				{
					printf("������󣬰����������������\n");
					getch();
					getch();
					continue;
				}
			}
			else if(choise==5)
			{
				int shop1_1=500,shop1_2=1000,shop1_3=2000,shop2_1=500,shop2_2=1000,shop2_3=3000,shop4_1=3000,shop4_2=200;
				float shop3=3.0;
				system("cls");
				printf("��ӭ�����̳ǣ����İ�����Ч��ʣ��%d��,������Ч��ʣ��%d��\n"
				       "���\tѡ��\t\t����\n"
				       "-----------------------------------\n"
				       "0\t����\t\n"
				       "1\t�Է�\t���ӱ�ʳ��\n"
				       "2\t����\t��������ֵ\n"
				       "3\tѧϰ\t����EXP.\n"
				       "4\t���\t��������ֵ\n"
				       "5\t��ҵ�\t�ý�ҹ������\n����:",savecard8,savecard6);
				if(isholiday) printf("(���սڼ���)");
				scanf("%d",&ch4);
				if(ch4==0) continue;
				system("cls");
				if((savecard8!=0&&savecard6==0)||isholiday)
				{
					shop1_1*=0.8;
					shop1_2*=0.8;
					shop1_3*=0.8;
					shop2_1*=0.8;
					shop2_2*=0.8;
					shop2_3*=0.8;
					shop3/=0.8;
					shop4_1*=0.8;
					shop4_2*=0.8;
					if(savecard8!=0&&!isholiday) printf("ʹ�ô��ۿ��ɹ�����Ʒ�����Żݣ�\n");
					if(isholiday) printf("���սڼ��գ���Ʒ�����Żݣ�\n");
				}
				if(savecard6!=0&&!isholiday)
				{
					shop1_1*=0.6;
					shop1_2*=0.6;
					shop1_3*=0.6;
					shop2_1*=0.6;
					shop2_2*=0.6;
					shop2_3*=0.6;
					shop3/=0.6;
					shop4_1*=0.6;
					shop4_2*=0.6;
					printf("ʹ�ô��ۿ��ɹ�����Ʒ�����Żݣ�\n");
				}
				if(ch4==1)
				{
					printf("�����ֽ�Ϊ%d\n���ı�ʳ��Ϊ%d/%d,���ı�ʳ����ȯʣ��%d��\n"
					       "��ʳ�ȵļӷ�����:\n"
					       "���\t��Ǯ\t��ʳ��\n"
					       "---------------------------------\n"
					       "0\t����\t\n"
					       "1\t%d\t30\n"
					       "2\t%d\t70\n"
					       "3\t%d\t160\n"
					       "����:",money,hunger,hgmax,hungersave,shop1_1,shop1_2,shop1_3);
					scanf("%d",&ch2);
					if(ch2==0)
					{
						continue;
					}
					queding=0;
					if(hungersave)
					{
						printf("�Ƿ�ʹ�ñ�ʳ����ȯ��\n��,�밴��0;���밴0,�س�������\n");
						scanf("%d",&queding);
					}
					if(ch2==1)
					{
						if(queding) hungersave--;
						else money-=shop1_1;
						hunger+=30;
					}
					else if(ch2==2)
					{
						if(queding) hungersave--;
						else money-=shop1_2;
						hunger+=70;
					}
					else if(ch2==3)
					{
						if(queding) hungersave--;
						else money-=shop1_3;
						hunger+=160;
					}
					else
					{
						printf("�������󣬰����������������\n");
						getch();
						getch();
						continue;
					}
					if(hunger>hgmax) hunger=hgmax;
				}
				else if(ch4==2)
				{
					printf("�����ֽ�Ϊ%d\n��������ֵΪ%d/%d,�������ִ���ȯ��%d��\n����ֵ�ļӷ�����:\n"
					       "���\t��Ǯ\t����ֵ\n"
					       "---------------------------------\n"
					       "0\t����\t\n"
					       "1\t%d\t80\n"
					       "2\t%d\t180\n"
					       "3\t%d\t600\n"
					       "��������:",money,mood,mdmax,moodsave,shop2_1,shop2_2,shop2_3);
					scanf("%d",&ch2);
					if(ch2==0)
					{
						continue;
					}
					queding=0;
					if(moodsave)
					{
						printf("�Ƿ�ʹ�����ִ���ȯ��\n��,�밴��0;���밴0,�س�������\n");
						scanf("%d",&queding);
					}
					if(ch2==1)
					{
						if(queding) moodsave--;
						else money-=shop2_1;
						mood+=80;
					}
					else if(ch2==2)
					{
						if(queding) moodsave--;
						else money-=shop2_2;
						mood+=180;
					}
					else if(ch2==3)
					{
						if(queding) moodsave--;
						else money-=shop2_3;
						mood+=600;
					}
					else
					{
						printf("�������󣬰����������������\n");
						getch();
						getch();
						continue;
					}
					if(mood>mdmax) mood=mdmax;
				}
				else if(ch4==3)
				{
					printf("�����ֽ�Ϊ%d\n���ĵȼ�ΪLV.%d\nEXP.%d/%d\n"
					       "��������ֵ:%d/%d\n\n"
					       "����Ҫ�ɽ�Ǯ����ȡ���飬���ǻ��ȥ�ɽ�Ǯ������500����ֵ,���٣�100��ࣤ100000,�ɣ�0����,��1��EXP.%5.1f\n\n"
					       "��Ҫ�ɵĽ�Ǯ��:",money,lv,exp,xexp,mood,mdmax,shop3);
					scanf("%d",&expmoney);
					if(expmoney==0) continue;
					if(expmoney<100||expmoney>100000||expmoney>money)
					{
						printf("ѧϰʧ��,�����������������\n");
						getch();
						getch();
						continue;
					}
					if((int)(expmoney/500.0)>mood)
					{
						printf("����ֵ����,�����������������\n");
						getch();
						getch();
						continue;
					}
					printf("�ɷ�%d,��EXP.%d\n"
					       "�۳�����ֵ%d,����ʣ%d/%d\n"
					       "ȷ����  ȷ���밴1��ȡ���밴��1�������\n",expmoney,(int)(expmoney*shop3),(int) (expmoney/500.0),mood-(int) (expmoney/500.0),mdmax);
					scanf("%d",&queding);
					if(queding==1)
					{
						money-=expmoney;
						exp+=(int) (expmoney*shop3);
						mood-=(int) (expmoney/500.0);
					}
					else continue;
				}
				else if(ch4==4)
				{
					int rq_my=0,i=0;
					printf("�����ֽ�Ϊ:%d\n"
					       "����ֵ:%d\n"
					       "\n������1������%dԪ��֮��ÿ��1�����Ӿ��%dԪ,һ�������������ܳ���100,����0����Ϊ����\n"
					       "��Ҫ��������:",money,renqi,shop4_1,shop4_2);
					scanf("%d",&value);
					if(value==0) continue;
					if(value>100||value<0)
					{
						printf("�������\n");
						getch();
						getch();
						continue;
					}
					while(value>0)
					{
						rq_my+=(renqi+i)*shop4_2+shop4_1;
						value--;
						i++;
					}
					printf("��Ҫ���%dԪ,ȷ����\n"
					       "ȷ���밴1�����밴��1������������Իس�������\n",rq_my);
					scanf("%d",&queding);
					if(queding!=1) continue;
					if(money<rq_my)
					{
						printf("���㣬�����������\n");
						getch();
						getch();
						continue;
					}
					money-=rq_my;
					renqi+=i;
				}
				else if(ch4==5)
				{
					printf("�����ֽ�Ϊ%d\n���Ľ��Ϊ%d\n"
					       "���\t��Ʒ\t\tG.\t��;\n"
					       "---------------------------------\n"
					       "0\t����\t\n"
					       "1\t������\t1\n"
					       "2\tף����\t\t1\n"
					       "3\tף�����\t1\n"
					       "4\t��Ǯ���\t2\n"
					       "5\t���ۿ�\t\t1\n"
					       "6\t���ۿ�\t\t2\n"
					       "7\t�������\t2\n"
					       "8\t60����֤֤��\t10\n"
					       "��������:",money,gold);
					scanf("%d",&queding);
					if(queding==0) continue;
					else if(queding==1)
					{
						if(gold<1)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=1;
						lib1++;
					}
					else if(queding==2)
					{
						if(gold<1)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=1;
						lib2++;
					}
					else if(queding==3)
					{
						if(gold<1)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=1;
						lib3++;
					}
					else if(queding==4)
					{
						if(gold<2)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=2;
						lib4++;
					}
					else if(queding==5)
					{
						if(gold<1)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=1;
						lib5++;
					}
					else if(queding==6)
					{
						if(gold<2)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=2;
						lib6++;
					}
					else if(queding==7)
					{
						if(gold<2)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=2;
						lib7++;
					}
					else if(queding==8)
					{
						if(gold<10)
						{
							printf("��Ҳ���\n");
							getch();
							getch();
							continue;
						}
						gold-=10;
						lib11++;
					}
				}
				else
				{
					printf("�������,�����������������\n");
					getch();
					getch();
					continue;
				}
			}
			else if(choise==6)
			{
				hunger-=rand()%40+10;
				if(hunger<0)
				{
					system("cls");
					printf("��Ϸ��������Ϊ��ʳ�ȵ���0�������������ģʽ����\n");
					getch();
					getch();
					break;
				}
				day++;
				if(day%10==0) resttms++;
				if(en3_4!=1&&(value200!=1||zhufuday==0)) money-=rand()%200+100;
				ch1_low=rand()%5/10.0+0.3;
				ch1_high=rand()%5/10.0+1.3;
				if(value200==3&&zhufuday!=0) ch1_high+=0.1;
				if(value200==4&&zhufuday!=0) ch1_low+=0.1;
				if(value200!=5||zhufuday==0) lix=rand()%6;
				else lix=rand()%6+10;
				ch3_money=ch3_tmoney;
				ch3_money*=lix/100.0+1.0;
				ch3_tmoney=(int)ch3_money;
				if(en2_2==1) money+=1000;
				if(day%30==0&&en2_3==1) money+=10000;
				if(value300==4&&zhiye1day!=0) zhiye1_tms=5;
				else zhiye1_tms=3;
				if(value301==3&&zhiye2day!=0) zy2_yydays=2;
				else zy2_yydays=1;
				if(day%30==0)
				{
					islib++;
					libday++;
					isholiday=1;
					holidayrand++;
				}
				else
				{
					savecard8--;
					savecard6--;
				}
				zhufuday--;
				zhiye1day--;
				if(zhufuday<0) zhufuday=0;
				if(zhiye1day<0) zhiye1day=0;
				if(day%30==3) isholiday=0;
				if(savecard8<0) savecard8=0;
				if(savecard6<0) savecard6=0;
			}
		}
	}
	return 0;
}
