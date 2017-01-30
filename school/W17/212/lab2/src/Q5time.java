/**
 * Created by mmurtadi on 30/01/17.
 */
public class Q5time {
    public static void main(String[] args) {
        int timeInSeconds = 50391, timeInHour = 0, timeInMinute = 0;

        // loop that collects the number of minutes in the seconds provided
        while (timeInSeconds > 59){
            timeInSeconds -= 60;
            timeInMinute += 1;
        }
        // number of hours in the minutes discovered above
        while (timeInMinute > 59){
            timeInMinute -= 60;
            timeInHour += 1;
        }
        // prints out hours in minutes which was dound in seconds
        // prints out minutes found in seconds
        // prints out remaining seconds which do not add up to a minute.
        System.out.println(timeInHour + " hours, " + timeInMinute + " minutes, " + timeInSeconds + " seconds ");
    }
}
