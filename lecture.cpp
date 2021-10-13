#include <cstdint>
enum class Day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
enum class Month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

class Date {
    public:
        Date(Day day, Month month, uint16_t year) : 
                                    day_(day),
                                    month_(month),
                                    year_(year) {};
    private:
    Day day_;
    Month month_;
    uint16_t year_;
};

int main() {
    Date date(Day::Fri, Month::Apr, 2);
    int i = 0;
}