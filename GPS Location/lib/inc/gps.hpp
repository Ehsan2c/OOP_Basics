#ifndef GPS_HPP
#define GPS_HPP

class GPS{
    public:
        GPS(double latitude2 , double longitude2);
        ~GPS();

        double get_latitude() const;
        double get_longitude() const;

        void set_latitude(double latitude2);
        void set_longitude(double longitude2);

    private:
        double latitude;
        double longitude;
};

#endif