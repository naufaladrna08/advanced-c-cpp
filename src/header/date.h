#ifndef __DATE_H__
#define __DATE_H__

enum kmonth {
  January = 1,
  February,
  March,
  April, 
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

enum kday {
  Sunday, Monday, Tuesday, Wednesday, Thursday,
  Friday, Saturday
};

struct date {
  enum kmonth month;
  enum kday day;
  int year;
};

typedef struct date Date;

Date date_update(Date today);
int number_of_days(Date d);
bool is_leap_year(Date d);

#define set_date(s, mm, dd, yy) s = (Date) {mm, dd, yy}
extern Date todaysDate;

#endif // __DATE_H__