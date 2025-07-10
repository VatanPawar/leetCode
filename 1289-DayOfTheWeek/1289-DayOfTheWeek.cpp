// Last updated: 7/11/2025, 12:05:30 AM
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        // Create a tm struct and set its fields
        tm time_in = {};
        time_in.tm_year = year - 1900; // Year since 1900
        time_in.tm_mon = month - 1;    // Month [0-11]
        time_in.tm_mday = day;

        // Normalize the time struct using mktime
        mktime(&time_in);

        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return days[time_in.tm_wday];
    }
};
