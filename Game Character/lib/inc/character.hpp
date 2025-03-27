#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <vector>

class Character{
    public:
        struct Skill{
            std::string name;
            int level;

            Skill(const std::string& n , int l) : name(n) , level(l) {}
        };

        Character(const std::string& name2 , int health2 , int power2);

        std::string get_name() const;
        int get_health() const;
        int get_power() const;
        std::vector<Skill> get_skill() const;

        void set_name(const std::string& name2);
        void set_health(int health2);
        void set_power(int power2);
        void set_skill(const std::vector<Skill>& skills2);

        void add_skill(const std::string& name , int level);

        void print_skills();
        void print();

    private:
        std::string name;
        int health;
        int power;
        std::vector<Skill> skills;
};

#endif