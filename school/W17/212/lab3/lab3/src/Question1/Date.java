package Question1;

/**
 * Created by mmurtadi on 07/02/17.
 */
public class Date {

    private int monthDate;
    private int dayDate;
    private int yearDate;

    public void Date (int month, int day, int year){
        monthDate = month;
        dayDate = day;
        yearDate = year;
    }
    public void setMonthDate(int month){
        monthDate = month;
    }

    public int getMonth(){

        return monthDate;
    }
    public void setDayDate(int day){

        dayDate = day;
    }

    public int getDay(){

        return dayDate;
    }
    public void setYearDate(int year){

        yearDate = year;
    }

    public int getYear(){

        return yearDate;
    }
    public String toString() {
        String monthString, dayString, yearString, dateFormatted;
        switch (monthDate) {
            case 1:  monthString = "January";       break;
            case 2:  monthString = "February";      break;
            case 3:  monthString = "March";         break;
            case 4:  monthString = "April";         break;
            case 5:  monthString = "May";           break;
            case 6:  monthString = "June";          break;
            case 7:  monthString = "July";          break;
            case 8:  monthString = "August";        break;
            case 9:  monthString = "September";     break;
            case 10: monthString = "October";       break;
            case 11: monthString = "November";      break;
            case 12: monthString = "December";      break;
            default: monthString = "Invalid month"; break;
        }

        dayString = Integer.toString(dayDate);
        yearString = Integer.toString(yearDate);
        dateFormatted = monthString + " " + dayString + ", '" + yearString;

        return dateFormatted;
    }
    public Boolean LessThan(Date d) {
        if (getYear() > d.yearDate){
            return true;
        }
        else if (getMonth() > d.monthDate){
            return true;
        }
        else if (getDay() > d.dayDate) {
            return true;
        }
        return false;
    }

}
