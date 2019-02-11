/*
千万别破产(Don't be poor)游戏欢迎您，该程序可在VC,TC等平台上编译成功并顺利运行
2014-12-14编程成功/2015-01-251.1..0成功编写共1784行
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
	int password;
	printf("请输入通行码:");
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
		printf("一、设置您的初始金额:\n"
		"序号\t名称\t￥\n"
		"------------------------------------\n"
		"1\t正常\t20000\n"
		"2\t贫困\t5000\n"
		"3\t富裕\t80000\n"
		"4\t富翁\t200000\n"
		"5\t无限\t自定义\n"
		"您的游戏模式:");
		scanf("%d",&en1);
		if(en1==1) money=20000;
		else if(en1==2) money=5000;
		else if(en1==3) money=80000;
		else if(en1==4) money=200000;
		else if(en1==5)
		{
		printf("请输入您的初始金额:");
		scanf("%d",&money);
		}
		else
		{
			printf("输入错误，请按任意键后重新输入");
			getch();
			getch();
			continue;
		}
		system("cls");
		printf("二、设置您的新手金钱模式\n"
		       "序号\t名称\t作用\n"
		       "----------------------------------\n"
		       "1\t新手\t当金钱小于1000时，现金增加1000\n"
		       "2\t每天\t每天现金增加1000\n"
		       "3\t每月\t每月(30天)现金增加10000\n"
		       "开启按1，不开启按非1的任意键\n\n"
		       "1是否开启:");
		scanf("%d",&en2_1);
		printf("2是否开启:");
		scanf("%d",&en2_2);
		printf("3是否开启:");
		scanf("%d",&en2_3);
		system("cls");
		printf("三、设置您的作弊模式\n"
		       "序号\t名称\t\t作用\n"
		       "----------------------------------\n"
		       "1\t饱食充足\t饱食度不会减少\n"
		       "2\t心情极佳\t心情值不会减少\n"
		       "3\t免手续费\t在银行取钱不需交手续费\n"
		       "4\t免生存费\t每天不需要缴生存费\n"
		       "开启按1，不开启按非1的任意键\n\n"
		       "1是否开启:");
		scanf("%d",&en3_1);
		printf("2是否开启:");
		scanf("%d",&en3_2);
		printf("3是否开启:");
		scanf("%d",&en3_3);
		printf("4是否开启:");
		scanf("%d",&en3_4);
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		while(1)
		{
			system("cls");
			if(money<0)
			{
				printf("游戏结束,因为现金低于0\n");
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
					printf("要升级至60，需要通过进阶认证\n");
					lv=59;
					xexp=59*59*100;
					exp=xexp-1;
					getch();
					getch();
				}
				if(lv==80&&passcard80==0)
				{
					printf("要升级至80，需要通过进阶认证\n");
					lv=79;
					xexp=79*79*100;
					exp=xexp-1;
					getch();
					getch();
				}
				xexp=lv*lv*100;
				if(lv==85)
				{
					printf("恭喜你，升至85级,游戏胜利!\n按任意键继续");
					getch();
					getch();
					break;
				}
				if((lv>=11&&lv<=20)||(lv>=31&&lv<=40)) hgmax+=3;
				if((lv>=21&&lv<=30)||(lv>=41&&lv<=50)) mdmax+=5;
			}//升级循环
			if(lv==85) break;
			if(mood<0)
			{
				printf("游戏结束，因为心情值低于0，按任意键返回模式界面\n");
				getch();
				getch();
				break;
			}
			system("cls");
			printf("LV.  %d\t\tEXP.  %d/%d\n"
			       "￥ %d      Day:%d    G: %d\n"
			       "饱食度:%d/%d\t心情值:%d/%d\n"
			       "目前投资风险:%5.1f~%5.1f\n"
			       "人气值:%d\t当前利息:   %d%%\n",lv,exp,xexp,money,day,gold,hunger,hgmax,mood,mdmax,ch1_low,ch1_high,renqi,lix);
			printf("\n序号\t选项\t说明\n"
			       "----------------------------------\n"
			       "1\t活动\t最近活动\n"
			       "2\t投资\t投资可能赚也可能亏\n"
			       "3\t职业\t赚钱的好东西\n"
			       "4\t银行\t可以存取钱\n"
			       "5\t购物\t可以买商品\n"
			       "6\t下一天\t跳过一天\n"
			       "决定:");
			if(hunger<50) printf("(注意饱食度)");
			if(mood<150) printf("(注意心情值)");
			if(isholiday) printf("(今日节假日)");
			scanf("%d",&choise);
			if(choise==1)
			{
				system("cls");
				printf("欢迎来到活动\n"
				       "序号\t名称\t\t作用\n"
				       "------------------------------\n"
				       "0\t返回\t\n"
				       "1\t等级大礼   小于60级时，每10级可以领一个大礼包\n"
				       "2\t抽奖\t每10天可以抽奖一次\n"
				       "3\t道具\t可以开启您的道具\n"
				       "4\t节假日\t有人送礼\n"
				       "决定:");
				scanf("%d",&ch1);
				if(ch1==0) continue;
				system("cls");
				if(ch1==1)
				{
					printf("欢迎来到等级大礼活动\n\n");
					if(lv<60)
					{
						printf("序号\t名称\n"
						       "--------------------------------\n"
						       "0\t返回\n"
						       "1\t10级大礼包\n"
						       "2\t20级大礼包\n"
						       "3\t30级大礼包\n"
						       "4\t40级大礼包\n"
						       "5\t50级大礼包\n"
						       "决定:");
						scanf("%d",&lib);
						system("cls");
						if(lib==0) continue;
						if(lib==1&&lv>=10&&lvlib10==3)
						{
							lvlib10=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
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
							printf("恭喜获得金钱50000，人气1，经验10000,金币1，随机礼包1,职业礼包Ⅰ×1\n");
						}
						if(lib==3&&lv>=30&&lvlib30==3)
						{
							lvlib30=0;
							money+=100000;
							renqi+=2;
							exp+=20000;
							gold+=1;
							lib1+=1;
							printf("恭喜获得金钱100000，人气2，经验20000,金币1，随机礼包1\n");
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
							printf("恭喜获得金钱300000，人气3，经验40000,金币2，随机礼包1,八折卡\n");
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
							printf("恭喜获得金钱600000，人气5，经验80000,金币2，随机礼包1,职业礼包Ⅱ×1\n");
						}
						getch();
						getch();
						continue;
					}
					else if(lv<80&&lv>=60)
					{
						printf("序号\t名称\n"
						       "--------------------------------\n"
						       "0\t返回\n"
						       "1\t60级大礼包\n"
						       "2\t65级大礼包\n"
						       "3\t70级大礼包\n"
						       "4\t75级大礼包\n"
						       "决定:");
						scanf("%d",&lib);
						if(lib==1&&lv>=60&&lvlib60==3)
						{
							lvlib60=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
						if(lib==2&&lv>=65&&lvlib65==3)
						{
							lvlib65=0;
							money+=50000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱50000，人气1，经验5000\n");
						}
						if(lib==3&&lv>=70&&lvlib70==3)
						{
							lvlib70=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
						if(lib==4&&lv>=75&&lvlib75==3)
						{
							lvlib75=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
					}
					if(lv<85&lv>=60)
					{
						printf("序号\t名称\n"
						       "--------------------------------\n"
						       "0\t返回\n"
						       "1\t80级大礼包\n"
						       "2\t81级大礼包\n"
						       "3\t82级大礼包\n"
						       "4\t83级大礼包\n"
						       "5\t84级大礼包\n"
						       "决定:");
						scanf("%d",&lib);
						if(lib==1&&lv>=80&&lvlib80==3)
						{
							lvlib80=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
						if(lib==2&&lv>=81&&lvlib81==3)
						{
							lvlib81=0;
							money+=50000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱50000，人气1，经验5000\n");
						}
						if(lib==3&&lv>=82&&lvlib82==3)
						{
							lvlib82=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
						if(lib==4&&lv>=83&&lvlib83==3)
						{
							lvlib83=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
						}
						if(lib==5&&lv>=84&&lvlib84==3)
						{
							lvlib84=0;
							money+=20000;
							renqi+=1;
							exp+=5000;
							printf("恭喜获得金钱20000，人气1，经验5000\n");
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
					printf("欢迎来到转盘活动\n"
					       "您的转盘次数:%d\n"
					       "距离下次转盘时间还剩:%d天\n"
					       "序号\t奖励\t几率\n"
					       "---------------------------------\n"
					       "1\t金钱\t大\n"
					       "2\tEXP\t较大\n"
					       "3\t等级\t较小\n"
					       "4\t大量￥\t小\n"
					       "5\t大量EXP\t极小\n"
					       "6\t人气\t极小\n"
					       "7\t金币\t极小\n按0返回，按任意键继续\n",resttms,restday);
					scanf("%d",&queding);
					if(queding==0) continue;
					if(resttms==0)
					{
						printf("抱歉，剩余次数为0\n");
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
						printf("恭喜获得金钱%d",zhuanpan1);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=35&&zhuanpan<60)
					{
						zhuanpan2=rand()%40000+5000;
						exp+=zhuanpan2;
						printf("恭喜获得经验%d",zhuanpan2);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=60&&zhuanpan<75)
					{
						exp+=xexp;
						printf("恭喜获得提升1级");
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=75&&zhuanpan<85)
					{
						zhuanpan4=rand()%50000+10000;
						money+=zhuanpan4;
						printf("恭喜获得大量金钱%d",zhuanpan4);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=85&&zhuanpan<90)
					{
						zhuanpan5=rand()%300000+50000;
						exp+=zhuanpan5;
						printf("恭喜获得大量经验%d",zhuanpan5);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=90&&zhuanpan<95)
					{
						zhuanpan6=rand()%10+5;
						renqi+=zhuanpan6;
						printf("恭喜获得人气%d",zhuanpan6);
						getch();
						getch();
						continue;
					}
					else if(zhuanpan>=95&&zhuanpan<100)
					{
						gold++;
						printf("恭喜获得金币1\n");
						getch();
						getch();
						continue;
					}
				}
				else if(ch1==3)
				{
					int l=1;
					printf("欢迎来到管理道具\n"
					       "0.返回\n"
					       "1.随机礼包×%d 2.祝福卡×%d 3.祝福礼包×%d 4.金钱礼包×%d 5.八折卡×%d 6.六折卡×%d 7.经验礼包×%d 8.人气礼包Ⅰ×%d 9.人气礼包Ⅱ×%d 10.人气礼包Ⅲ×%d 11.60级认证证书×%d 12.80级认证证书×%d 13.职业卡Ⅰ×%d 14.职业卡Ⅱ×%d 15.职业礼包Ⅰ×%d 16.职业礼包Ⅱ×%d 17.代金券礼包×%d\n祝福期限:%d\n决定:",lib1,lib2,lib3,lib4,lib5,lib6,lib7,lib8,lib9,lib10,lib11,lib12,lib13,lib14,lib15,lib16,lib17,zhufuday);
					scanf("%d",&queding);
					if(queding==0||queding>17) continue;
					printf("输入要打开礼包的数量:");
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
							printf("第%d个礼包:",l);
							value100=rand()%100;
							if(value100<15)
							{
								value101=rand()%20000;
								money+=value101;
								printf("恭喜获得%d金钱\n",value101);
							}
							if(value100>=15&&value100<30)
							{
								value101=rand()%100000;
								exp+=value101;
								printf("恭喜获得%d经验\n",value101);
							}
							if(value100>=30&&value100<45)
							{
								exp+=xexp;
								printf("恭喜获得提升1级\n");
							}
							if(value100>=45&&value100<60)
							{
								value101=rand()%5+1;
								renqi+=value101;
								printf("恭喜获得%d人气\n",value101);
							}
							if(value100>=60&&value100<65)
							{
								lib2++;
								printf("恭喜获得祝福卡\n");
							}
							if(value100>=65&&value100<70)
							{
								lib3++;
								printf("恭喜获得祝福礼包\n");
							}
							if(value100>=70&&value100<75)
							{
								lib5++;
								printf("恭喜获得八折卡\n");
							}
							if(value100>=75&&value100<80)
							{
								lib13++;
								printf("恭喜获得职业卡Ⅰ\n");
							}
							if(value100>=80&&value100<84)
							{
								lib4++;
								printf("恭喜获得金钱礼包\n");
							}
							if(value100>=84&&value100<88)
							{
								lib6++;
								printf("恭喜获得六折卡\n");
							}
							if(value100>=88&&value100<92)
							{
								lib7++;
								printf("恭喜获得经验礼包\n");
							}
							if(value100>=92&&value100<96)
							{
								lib14++;
								printf("恭喜获得职业卡Ⅱ\n");
							}
							if(value100>=96&&value100<100)
							{
								lib17++;
								printf("恭喜获得代金券礼包\n");
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
								printf("上一个祝福卡生效中……\n");
								lib2++;
								getch();
								break;
							}
							value200=rand()%5+1;
							zhufuday+=4;
							if(value200==1) printf("恭喜获得免生存费\n");
							else if(value200==2) printf("恭喜获得免取款手续费\n");
							else if(value200==3) printf("恭喜获得赚的风险提高0.1\n");
							if(value200==4) printf("恭喜获得亏的风险降低0.1\n");
							if(value200==5) printf("恭喜获得银行存款利息提高10%\n");
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
								printf("恭喜获得500元支票\n");
								ch3_tmoney+=500;
							}
							else if(value100==2)
							{
								printf("恭喜获得5000元支票\n");
								ch3_tmoney+=5000;
							}
							else if(value100==3)
							{
								printf("恭喜获得50000元支票\n");
								ch3_tmoney+=50000;
							}
							else if(value100==4)
							{
								printf("恭喜获得1张饱食代金券\n");
								hungersave++;
							}
							else if(value100==5)
							{
								printf("恭喜获得1张娱乐代金券\n");
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
							value100=rand()%399601+400;//随机开出400-400000金钱
							money+=value100;
							printf("恭喜获得金钱%d\n",value100);
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
							value100=rand()%1198801+1200;//随机开出1200-1200000exp
							exp+=value100;
							printf("恭喜获得经验%d\n",value100);
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
							value100=rand()%3+1;//随机开出1-3人气
							renqi+=value100;
							printf("恭喜获得人气%d\n",value100);
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
							value100=rand()%5+2;//随机开出2-6人气
							renqi+=value100;
							printf("恭喜获得人气%d\n",value100);
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
							value100=rand()%9+4;//随机开出4-12人气
							renqi+=value100;
							printf("恭喜获得人气%d\n",value100);
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
							printf("恭喜通过60级认证\n");
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
							printf("恭喜通过80级认证\n");
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
								printf("上一个职业卡Ⅰ生效中……\n");
								lib13++;
								getch();
								break;
							}
							value300=rand()%4+1;
							zhiye1day+=4;
							if(value300==1) printf("恭喜获得提升工资50%\n");
							else if(value300==2)
							{
								printf("恭喜获得提升升职率20%\n");
								if(myzhiye==5||myzhiye==6||myzhiye==7) shengz+=20;
							}
							else if(value300==3) printf("恭喜获得降低扣除的心情50%\n");
							if(value300==4)
							{
								printf("恭喜获得增加打工次数2次\n");
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
								printf("上一个职业卡Ⅱ生效中……\n");
								lib14++;
								getch();
								break;
							}
							value301=rand()%3+1;
							zhiye1day+=4;
							if(value301==1) printf("恭喜获得提升职业基本金50%\n");
							else if(value301==2) printf("恭喜获得降低扣除的心情50%\n");
							if(value301==3)
							{
								printf("恭喜获得增加营业次数1次\n");
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
							value100=rand()%7+1;//随机开出1-7职业
							printf("您是否要打工序号为%d的职业?(1,非1)\n",value100);
							scanf("%d",&value101);
							getch();
							if(value101!=1) break;
							myzhiye=value100;
							printf("恭喜获得打工序号为%d的职业\n",value100);
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
							value100=rand()%3+1;//随机开出1-3主职
							printf("您是否要主职序号为%d的职业?(1,非1)\n",value100);
							scanf("%d",&value101);
							getch();
							if(value101!=1) break;
							zhiye2=value100;
							printf("恭喜获得主职序号为%d的职业\n",value100);
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
							value100=rand()%6+1;//6随1
							if(value100==1)
							{
								hungersave+=1;
								printf("恭喜获得1张饱食代金券\n");
							}
							else if(value100==2)
							{
								hungersave+=2;
								printf("恭喜获得2张饱食代金券\n");
							}
							else if(value100==3)
							{
								hungersave+=3;
								printf("恭喜获得3张饱食代金券\n");
							}
							else if(value100==4)
							{
								moodsave+=1;
								printf("恭喜获得1张娱乐代金券\n");
							}
							else if(value100==5)
							{
								moodsave+=2;
								printf("恭喜获得2张娱乐代金券\n");
							}
							else if(value100==6)
							{
								moodsave+=3;
								printf("恭喜获得3张娱乐代金券\n");
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
					printf("DAY:%d\n离节假日还有%d天\n"
					       "节假日抽奖次数为%d\n"
					       "按0返回，按1接收礼品,按非0,1的任意键进入节假日抽奖\n",day,rstholidy,holidayrand);
					scanf("%d",&queding);
					if(queding==0) continue;
					else
					if(queding==1)
					{
						if(islib==0) continue;
						islib-=1;
						libmin=rand()%8+(libday-1)*6+2;//第一天人气标准为2-8
						if(renqi-libmin<0)
						{
							printf("礼包空空，您的人气有点低哦\n");
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=3&&renqi-libmin>=1)
						{
							value100=rand()%1001+1000;//获得1000-2000金钱
							money+=value100;
							printf("恭喜获得:￥%d,随机礼包×1,祝福卡×1,代金券礼包×1\n",value100);
							lib1+=1;
							lib2+=1;
							lib17+=1;
							getch();
							getch();
							continue;
						}
						else if(renqi-libmin<=7&&renqi-libmin>=4)
						{
							value100=rand()%1001+2000;//获得2000-3000金钱
							money+=value100;
							printf("恭喜获得:￥%d,随机礼包×1,祝福卡×1,祝福礼包×1,代金券礼包×1\n",value100);
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
							value100=rand()%2001+4000;//获得4000-6000金钱
							value101=rand()%140001+60000;//获得60000-200000EXP
							money+=value100;
							exp+=value101;
							printf("恭喜获得:￥%d,EXP.%d,随机礼包×1,祝福卡×2,人气礼包Ⅰ×1,代金券礼包×2\n",value100,value101);
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
							value100=rand()%3001+7000;//获得7000-10000金钱
							value101=rand()%200001+100000;//获得100000-300000EXP
							money+=value100;
							exp+=value101;
							printf("恭喜获得:￥%d,EXP.%d,随机礼包×2,祝福卡×2,祝福礼包×2,人气礼包Ⅰ×1,代金券礼包×2\n",value100,value101);
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
							value100=rand()%5001+10000;//获得10000-15000金钱
							value101=rand()%400001+200000;//获得200000-600000EXP
							money+=value100;
							exp+=value101;
							printf("恭喜获得:￥%d,EXP.%d,随机礼包×2,祝福卡×2,祝福礼包×2,人气礼包Ⅱ×1,代金券礼包×3\n",value100,value101);
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
							printf("没到节假日，无法领取\n");
							getch();
							getch();
							continue;
						}
						holidayrand--;
						value100=rand()%8+1;
						if(value100==1)
						{
							lib3++;
							printf("恭喜获得祝福礼包\n");
						}
						else if(value100==2)
						{
							lib4++;
							printf("恭喜获得金钱礼包\n");
						}
						else if(value100==3)
						{
							lib7++;
							printf("恭喜获得经验礼包\n");
						}
						else if(value100==4)
						{
							lib8++;
							printf("恭喜获得人气礼包Ⅰ\n");
						}
						else if(value100==5)
						{
							lib9++;
							printf("恭喜获得人气礼包Ⅱ\n");
						}
						else if(value100==6)
						{
							lib10++;
							printf("恭喜获得人气礼包Ⅲ\n");
						}
						else if(value100==7)
						{
							lib13++;
							printf("恭喜获得职业卡Ⅰ\n");
						}
						else if(value100==8)
						{
							lib14++;
							printf("恭喜获得职业卡Ⅱ\n");
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
				printf("您的现金为%d,请投入至少100元至多10000元的金额，要返回请投入0元\n",money);
				scanf("%d",&tour);
				if(tour==0) continue;
				if(tour<100||(tour>10000||tour>money))
				{
					printf("投入过少或过多，或超过现金的金额，按任意键返回主界面\n");
					getch();
					getch();
					continue;
				}
				mood-=rand()%60+10;
				//扣除心情10-70
				ch1_money=tour;
				money-=tour;
				ch1_fengx=(rand()%(int)(10*(ch1_high-ch1_low)+1)+(10*ch1_low))/10;
				ch1_money*=ch1_fengx;
				money+=ch1_money;
				ch1_low=rand()%5/10.0+0.3;
				ch1_high=rand()%5/10.0+1.3;
				if(value200==3&&zhufuday!=0) ch1_high+=0.1;
				if(value200==4&&zhufuday!=0) ch1_low+=0.1;
				printf("共投资%d元，收入%d元\n按任意键回到主界面\n",tour,(int) ch1_money);
				getch();
				getch();
				continue;
			}
			else if(choise==3)
			{
				int zhiye1,zy1_no,zy1_lv,zy1_money,effort;
				system("cls");
				printf("欢迎来到职业之路\n"
				       "序号\t名称\t作用\n"
				       "-----------------------------\n"
				       "0\t返回\t\n"
				       "1\t打工\t定期领取固定金钱，为兼职\n"
				       "2\t主职\t自己经营,有高风险\n"
				       "决定:");
				       scanf("%d",&zhiye);
				if(zhiye==0) continue;
				else if(zhiye==1)
				{
					system("cls");
					printf("您的现金:%d\n"
					       "您拥有的职业:%d     剩余打工次数:%d\n"
					       "职业LV.%d           升职几率:%d\n"
					       "序号\t名称\tLV.\t工资min\t工资max\n"
					       "---------------------------------------------------\n"
					       "0\t返回\n"
					       "1\t搬运工\t5\t500\t500\n"
					       "2\t运输员\t10\t700\t700\n"
					       "3\t饲料员\t15\t900\t900\n"
					       "4\t推销员\t20\t1100\t1100\n"
					       "5\t售货员\t25\t1200\t1600\n"
					       "6\t服务员\t30\t1400\t2600\n"
					       "7\t库管\t35\t1800\t3800\n"
					       "决定:",money,myzhiye,zhiye1_tms,zylv,shengz);
					scanf("%d",&zhiye1);
					if(zhiye1==0) continue;
					system("cls");
					iszylv=0;
					printf("您的现金:%d        职业LV.%d\n"
					       "按0返回，按1就职，按2辞职，按3打工,并以回车键结束\n",money,zylv);
					if(zhiye1==1)
					{
						zy1_no=1;
						zy1_lv=5;
						zy1_money=500;
						printf("\n此职业无职业等级\n选择:");
					}
					else if(zhiye1==2)
					{
						zy1_no=2;
						zy1_lv=10;
						zy1_money=700;
						printf("\n此职业无职业等级\n选择:");
					}
					else if(zhiye1==3)
					{
						zy1_no=3;
						zy1_lv=15;
						zy1_money=900;
						printf("\n此职业无职业等级\n选择:");
					}
					else if(zhiye1==4)
					{
						zy1_no=4;
						zy1_lv=20;
						zy1_money=1100;
						printf("\n此职业无职业等级\n选择:");
					}
					else if(zhiye1==5)
					{
						zy1_no=5;
						zy1_lv=25;
						printf("\n此职业的职业等级:\n"
						       "等级\t工资\n"
						       "----------------------\n"
						       "0\t返回\n"
						       "1\t1200\n"
						       "2\t1600\n选择:");
						if(zylv!=2) iszylv=1;
						if(zylv==1) zy1_money=1200;
						if(zylv==2) zy1_money=1600;
					}
					else if(zhiye1==6)
					{
						zy1_no=6;
						zy1_lv=30;
						printf("\n此职业的职业等级:\n"
						       "等级\t工资\n"
						       "----------------------\n"
						       "0\t返回\n"
						       "1\t1400\n"
						       "2\t1800\n"
						       "3\t2200\n"
						       "4\t2600\n选择:");
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
						printf("\n此职业的职业等级:\n"
						       "等级\t工资\n"
						       "----------------------\n"
						       "0\t返回\n"
						       "1\t1800\n"
						       "2\t2200\n"
						       "3\t2600\n"
						       "4\t3000\n"
						       "5\t3400\n"
						       "6\t3800\n选择:");
						if(zylv!=6) iszylv=1;
						if(zylv==1) zy1_money=1800;
						if(zylv==2) zy1_money=2200;
						if(zylv==3) zy1_money=2600;
						if(zylv==4) zy1_money=3000;
						if(zylv==5) zy1_money=3400;
						if(zylv==6) zy1_money=3800;
					}
					else continue;
					//计算
					scanf("%d",&queding);
					system("cls");
					if(queding==0) continue;
					if((queding==2||queding==3||queding==4)&&myzhiye!=zy1_no)
					{
						printf("您没有这个职业\n");
						getch();
						getch();
						continue;
					}
					if(queding==1&&(myzhiye!=0||lv<zy1_lv))
					{
						printf("您已有职业或等级不足\n");
						getch();
						getch();
						continue;
					}
					if(queding==1)
					{
						printf("就职成功");
						myzhiye=zy1_no;
						shengz=0;
						getch();
						getch();
						continue;
					}
					if(queding==2)
					{
						printf("辞职成功");
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
							printf("打工次数为0，无法打工");
							getch();
							getch();
							break;
						}
						if(iszylv)
						{
							printf("请输入努力度(输入0返回,有效1到12):");
							scanf("%d",&effort);
							if(effort==0) break;
							if(effort<1||effort>12)
							{
								printf("努力度输入错误,按任意键返回");
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
						printf("打工成功，得到￥%d,心情值剩余%d/%d\n",zy1_money,mood,mdmax);
						if(value<shengz)
						{
							printf("恭喜升职\n");
							zylv++;
							shengz=0;
							getch();
							getch();
							break;
						}
						printf("按非0的任意键继续打工，按0返回,并以回车键结束\n");
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
					printf("您的现金:%d       您的主职为:%d\n"
					       "每5天发工资8000元,职业基础金*2000作为创业金\n下个工资日剩余%d天\n"
					       "序号\tLV.\t基础￥\n"
					       "---------------------------------\n"
					       "0\t返回\n"
					       "1\t20\t120\n"
					       "2\t30\t180\n"
					       "3\t40\t200\n决定:",money,zhiye2,zy2_days);
					scanf("%d",&value);
					if(value==0) continue;
					system("cls");
					printf("按1创业，按2转让，按3营业，任意键返回，并以回车键结束\n");
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
					//计算
					scanf("%d",&queding);
					if(queding==1&&(zhiye2!=0||lv<zy2_lv||money<zy2_my*2000))
					{
						printf("创业错误\n");
						getch();
						getch();
						continue;
					}
					if(queding==1)
					{
						money-=zy2_my*2000;
						zhiye2=value;
						printf("扣去您%d金钱作为创业金，创业成功",zy2_my*2000);
						getch();
						getch();
						continue;
					}
					if((queding==2||queding==3)&&zhiye2!=value)
					{
						printf("您没有这个职业，无法转让或营业\n");
						getch();
						getch();
						continue;
					}
					if(queding==2)
					{
						zhiye2=0;
						zy2_days=5;
						money+=20000;
						printf("增加您20000金钱作为转让金，转让成功\n");
						getch();
						getch();
						continue;
					}
					if(queding==3)
					{
						if(zy2_yydays==0)
						{
							printf("一天只能营业一次\n");
							getch();
							getch();
							continue;
						}
						zy2_yydays--;
						if(zy2_days==0)
						{
							printf("今日工资日，发工资8000元\n");
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
						printf("营业共获得%d金钱,共扣除%d心情\n",(int)(zy2_fengx*zy2_fengx*zy2_fengx*lv*zy2_my),zy2_md);
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
				printf("欢迎来到银行，您的余额为%d\n\n"
				       "序号\t名称\n"
				       "--------------------\n"
				       "0\t返回\n"
				       "1\t存钱\n"
				       "2\t取钱\n"
				       "您的选择是:",ch3_tmoney);
				scanf("%d",&yinh);
				if(yinh==0) continue;
				else if(yinh==1)
				{
					system("cls");
					printf("您的现金为%d,银行余额为%d,请输入要存入的金额，至少100元，返回请输入0\n",money,ch3_tmoney);
					scanf("%d",&cunr);
					if(cunr==0) continue;
					if(cunr<100||cunr>money)
					{
						printf("存入失败，按任意键可返回主界面\n");
						getch();
						getch();
						continue;
					}
					ch3_tmoney+=cunr;
					money-=cunr;
					printf("存入成功，按任意键返回主界面\n");
					getch();
					getch();
					continue;
				}
				else if(yinh==2)
				{
					system("cls");
					printf("您的现金为%d,银行余额为%d,请输入要取出的金额，至少100元，返回请输入0\n",money,ch3_tmoney);
					scanf("%d",&ch4);
					if(ch4==0) continue;
					shouxu=1.05;
					if(en3_3==1||(value200==2&&zhufuday!=0)) shouxu=1.00;
					if((ch4*shouxu)>ch3_tmoney||ch4<100)
					{
						printf("取出失败，按任意键可返回主界面\n");
						getch();
						getch();
						continue;
					}
					ch3_tmoney-=ch4*shouxu;
					money+=ch4;
					printf("取出成功，按任意键返回主界面\n");
					getch();
					getch();
					continue;
				}
				else
				{
					printf("输入错误，按任意键返回主界面\n");
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
				printf("欢迎来到商城，您的八折有效期剩余%d天,六折有效期剩余%d天\n"
				       "序号\t选项\t\t作用\n"
				       "-----------------------------------\n"
				       "0\t返回\t\n"
				       "1\t吃饭\t增加饱食度\n"
				       "2\t娱乐\t增加心情值\n"
				       "3\t学习\t增加EXP.\n"
				       "4\t捐款\t增加人气值\n"
				       "5\t金币店\t用金币购买道具\n决定:",savecard8,savecard6);
				if(isholiday) printf("(今日节假日)");
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
					if(savecard8!=0&&!isholiday) printf("使用打折卡成功，商品八折优惠！\n");
					if(isholiday) printf("今日节假日，商品八折优惠！\n");
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
					printf("使用打折卡成功，商品六折优惠！\n");
				}
				if(ch4==1)
				{
					printf("您的现金为%d\n您的饱食度为%d/%d,您的饱食代金券剩余%d张\n"
					       "饱食度的加法如下:\n"
					       "序号\t金钱\t饱食度\n"
					       "---------------------------------\n"
					       "0\t返回\t\n"
					       "1\t%d\t30\n"
					       "2\t%d\t70\n"
					       "3\t%d\t160\n"
					       "决定:",money,hunger,hgmax,hungersave,shop1_1,shop1_2,shop1_3);
					scanf("%d",&ch2);
					if(ch2==0)
					{
						continue;
					}
					queding=0;
					if(hungersave)
					{
						printf("是否使用饱食代金券？\n是,请按非0;否，请按0,回车键结束\n");
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
						printf("输入有误，按任意键返回主界面\n");
						getch();
						getch();
						continue;
					}
					if(hunger>hgmax) hunger=hgmax;
				}
				else if(ch4==2)
				{
					printf("您的现金为%d\n您的心情值为%d/%d,您的娱乐代金券有%d张\n心情值的加法如下:\n"
					       "序号\t金钱\t心情值\n"
					       "---------------------------------\n"
					       "0\t返回\t\n"
					       "1\t%d\t80\n"
					       "2\t%d\t180\n"
					       "3\t%d\t600\n"
					       "您的输入:",money,mood,mdmax,moodsave,shop2_1,shop2_2,shop2_3);
					scanf("%d",&ch2);
					if(ch2==0)
					{
						continue;
					}
					queding=0;
					if(moodsave)
					{
						printf("是否使用娱乐代金券？\n是,请按非0;否，请按0,回车键结束\n");
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
						printf("输入有误，按任意键返回主界面\n");
						getch();
						getch();
						continue;
					}
					if(mood>mdmax) mood=mdmax;
				}
				else if(ch4==3)
				{
					printf("您的现金为%d\n您的等级为LV.%d\nEXP.%d/%d\n"
					       "您的心情值:%d/%d\n\n"
					       "您需要缴金钱来换取经验，但是会扣去缴金钱数除以500心情值,最少￥100最多￥100000,缴￥0返回,￥1对EXP.%5.1f\n\n"
					       "您要缴的金钱数:",money,lv,exp,xexp,mood,mdmax,shop3);
					scanf("%d",&expmoney);
					if(expmoney==0) continue;
					if(expmoney<100||expmoney>100000||expmoney>money)
					{
						printf("学习失败,按任意键返回主界面\n");
						getch();
						getch();
						continue;
					}
					if((int)(expmoney/500.0)>mood)
					{
						printf("心情值不足,按任意键返回主界面\n");
						getch();
						getch();
						continue;
					}
					printf("缴费%d,得EXP.%d\n"
					       "扣除心情值%d,您还剩%d/%d\n"
					       "确定吗？  确定请按1，取消请按非1的任意键\n",expmoney,(int)(expmoney*shop3),(int) (expmoney/500.0),mood-(int) (expmoney/500.0),mdmax);
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
					printf("您的现金为:%d\n"
					       "人气值:%d\n"
					       "\n人气从1起需捐款%d元，之后每加1需增加捐款%d元,一次增加人气不能超过100,增加0人气为返回\n"
					       "您要增加人气:",money,renqi,shop4_1,shop4_2);
					scanf("%d",&value);
					if(value==0) continue;
					if(value>100||value<0)
					{
						printf("输入错误\n");
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
					printf("需要捐款%d元,确定吗？\n"
					       "确定请按1，不请按非1的任意键，并以回车键结束\n",rq_my);
					scanf("%d",&queding);
					if(queding!=1) continue;
					if(money<rq_my)
					{
						printf("余额不足，按任意键返回\n");
						getch();
						getch();
						continue;
					}
					money-=rq_my;
					renqi+=i;
				}
				else if(ch4==5)
				{
					printf("您的现金为%d\n您的金币为%d\n"
					       "序号\t物品\t\tG.\t用途\n"
					       "---------------------------------\n"
					       "0\t返回\t\n"
					       "1\t随机礼包\t1\n"
					       "2\t祝福卡\t\t1\n"
					       "3\t祝福礼包\t1\n"
					       "4\t金钱礼包\t2\n"
					       "5\t八折卡\t\t1\n"
					       "6\t六折卡\t\t2\n"
					       "7\t经验礼包\t2\n"
					       "8\t60级认证证书\t10\n"
					       "您的输入:",money,gold);
					scanf("%d",&queding);
					if(queding==0) continue;
					else if(queding==1)
					{
						if(gold<1)
						{
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
							printf("金币不足\n");
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
					printf("输入错误,按任意键返回主界面\n");
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
					printf("游戏结束，因为饱食度低于0，按任意键返回模式界面\n");
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
