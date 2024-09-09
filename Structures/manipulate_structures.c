#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *date) {
    scanf("%d %d %d", &date->year, &date->month, &date->day);
}

void printDate(struct date today) {
    printf("%02d/%02d/%d\n", today.month, today.day, today.year);
    printf("\n");
}

struct date advanceDay(struct date tomorrow) {
    if (tomorrow.month == 2) {
        if (tomorrow.day == 28) {
            tomorrow.day -= 27;
            tomorrow.month += 1;
        } else {
            tomorrow.day += 1;
        }
    }
    else if (tomorrow.month == 4 || tomorrow.month == 6 || tomorrow.month == 9 || tomorrow.month == 11) {
        if (tomorrow.day == 30) {
            tomorrow.day -= 29;
            tomorrow.month += 1;
        } else {
            tomorrow.day += 1;
        }
    }
    else if (tomorrow.month == 12) {
        if (tomorrow.day == 31) {
            tomorrow.day -= 30;
            tomorrow.month -= 11;
            tomorrow.year += 1;
        } else {
            tomorrow.day += 1;
        }
    }
    else if (tomorrow.day == 31) {
            tomorrow.day -= 1;
            tomorrow.month += 1;
    }
    else {
        tomorrow.day += 1;
    }

    return tomorrow;
}

/*

void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
}

struct date advanceDay(struct date today) {
    int d = today.day;
    int m = today.month;
    int y = today.year;
    int days;
    struct date tomorrow;
    if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) {
        days = 31;
    } else if (m==2) {
        if (y%4==0) {
            if (y%100 == 0) {
                if (y%400 ==0) {
                    days = 29;
                } else {
                    days = 28;
                }
            } else {
                days = 29;
            }
        } else {
            days = 28;
        }
    } else {
        days = 30;
    }
    if (d<days) d++;
    else {
        d=1;
        if (m==12) {
            m = 1;
            y++;
        } else m++;
    }
    tomorrow.year = y;
    tomorrow.month = m;
    tomorrow.day = d;
    return(tomorrow);
}
*/