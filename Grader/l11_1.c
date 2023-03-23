#include <stdio.h>

float cal_package1(int sum_day,int sum_night){
	float allcost=(sum_day*0.75+sum_night*1.25);
	return allcost;
}

float cal_package2(int sum_day,int sum_night){
	float allcost,all_min;
	all_min=sum_day+sum_night;
	allcost=300;
	if(all_min>500){
		all_min=all_min-500;
		allcost=allcost+(all_min*1.5);
	}
	return allcost;
}

float cal_package3(int sum_day,int sum_night){
	float allcost,all_min;
	all_min=sum_day+sum_night;
	allcost=600;
	if(all_min>1200){
		all_min=all_min-1200;
		allcost=allcost+(all_min*1.25);
	}
	return allcost;
}

int main (){
	int sum_day=0,sum_night=0,in_day,in_night,a=0;
	for(a=0;a<4;a++){
		scanf("%d %d",&in_day,&in_night);
		sum_day=sum_day+in_day;
		sum_night=sum_night+in_night;
	}

	float cal_1=cal_package1(sum_day,sum_night),cal_2=cal_package2(sum_day,sum_night),cal_3=cal_package3(sum_day,sum_night);
	if(cal_1<=cal_2 && cal_1<=cal_3){
        printf("1");
	}	
	else if(cal_2<=cal_1 && cal_2<=cal_3){
        printf("2");
	}	
	else if(cal_3<=cal_1 && cal_3<=cal_2){
        printf("3");
	}

	return 0;
}