package src.learn.Chapter4;

import java.time.LocalDate;

public class Date {
    int year;
    int month;
    int day;

    public Date() {
        year = LocalDate.now().getYear();
        month = LocalDate.now().getMonthValue();
        day = LocalDate.now().getDayOfMonth();
    }

    public Date(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    @Override
    public String toString() {
        return year + "-" + month + "-" + day;
    }

    public int getYear(){
        return year;
    }

    public int getMonth(){
        return month;
    }

    public int getDay(){
        return day;
    }

    public long between(Date another){
        
    }
}
