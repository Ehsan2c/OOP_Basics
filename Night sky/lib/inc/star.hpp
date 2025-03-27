#ifndef STAR_HPP
#define STAR_HPP

class Star{
    public:
        Star(int x2 , int y2 , int brightness2);

        int get_x() const;
        int get_y() const;
        int get_brightness() const;

        void set_y(int x2);
        void set_brightness(int y2);
        void set_x(int brightness2);
    
    private:
        int x;
        int y;
        int brightness;
};

#endif