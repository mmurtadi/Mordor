package Question1;

/**
 * Created by mmurtadi on 07/02/17.
 * Date functions
 */
public class Date {
    private int monthDate;
    private int dayDate;
    private int yearDate;

    public void setFullDate (int month, int day, int year){
        monthDate = month;
        dayDate = day;
        yearDate = year;
    }
    /**
     * sets month in object
     */

    public void setMonth(int month){
        monthDate = month;
    }

    /**
     * return month from object
     */
    public int getMonth(){

        return monthDate;
    }
    /**
     * sets day in object
     */
    public void setDay(int day){

        dayDate = day;
    }
    /**
     * return day from object
     */
    public int getDay(){

        return dayDate;
    }
    /**
     * sets year in object
     */
    public void setYear(int year){

        yearDate = year;
    }
    /**
     * return year from object
     */
    public int getYear(){

        return yearDate;
    }
    /**
     * returns date formatted as string
     */
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
    /**
     * compares values in 2 objects and returns boolean whether passed
     * in parameter is less than current object.
     */
    public Boolean LessThan(Date d) {
        if (getYear() < d.getYear())
            return true;
        else if (getYear() == d.getYear() && getMonth() < d.getMonth())
            return true;
        else if (getYear() == d.getYear() && getMonth() == d.getMonth() && getDay() < d.getDay())
            return true;

        return false;
    }

}
