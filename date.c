#include <stdio.h>
#include <stdbool.h>

bool calculate_day(int day, int month, int year, bool is_leap){
	
	int total;
	int leap_day = 0;
	int year_day = 0;
	int month_days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	if (is_leap) {
			
		if (month > 2) {
				
			leap_day = ((year / 4) + (year / 400) - (year / 100));
		}
		else {
				
			leap_day = ((year / 4) + (year / 400) - (year / 100)) - 1;
		}
	}
	else {
			
		leap_day = ((year / 4) + (year / 400) - (year / 100));
	}
		
	if (leap_day < 0) {
		leap_day = 0;
	}

	year_day = ((year-1)*365) + leap_day;
		
	total = day - 1 + month_days[month - 1] + year_day;
	//---------------------------------------------------
	
	printf("The entered date is %s.\n", days[total % 7]);
	
	//---------------------------------------------------
	if(total == 0){
		return false;
	}
	return true;
}

bool validate_date(int day, int month, int year, bool is_leap){
	int max_day;
	
	is_leap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? true : false;
		
	if (month == 2) {
		
		max_day = is_leap ? 29 : 28;
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
			
		max_day = 30;
	}
	else {
		max_day = 31;
	}
//------------------------------------------------------------------------------------------------------

	if ((month > 12) || (month < 1) || (day < 1)) {
		return false;
	}
	return day <= max_day;
}

int main() {
	
	int day, month, year;
	bool flag = true;
	bool is_leap = true;
	
	printf("1-1-1 to exit!\n");
	
	while (flag) {
	
		printf("Please enter a date (dd/mm/yyyy): ");
		scanf("%d %d %d", &day, &month, &year);
		
		is_leap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? true : false;
		
		if(validate_date(day, month, year, is_leap)){
			flag = calculate_day(day, month, year, is_leap);
		}
		else{
			printf("Invalid Date!!\n");
		}
	}
	
	printf("Program finished!!");
	return 0;
}
