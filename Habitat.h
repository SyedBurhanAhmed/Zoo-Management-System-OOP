/*#ifndef HABITAT_H
#define HABITAT_H
#include <string>
#include <Animal.h>
#include "Animal_health.h"
#include "date.h"

class Habitat
{
    private:
    std::string habitat_history;
    std::string species;
    date birth_date;
    std::string cell_area;
    std::string cell_location;
    Animal_health* animal_data;
    protected:
    void set_history(std::string);
    void set_species(std::string);
    void set_area(std::string);
    void set_location(std::string);
    std::string get_history();
    std::string get_species();
    std::string get_area();
    std::string get_location();
    public:
       // Habitat();
        ~Habitat();
    Habitat(std::string= "",std::string= "",const date& birth_date = date(),std::string="", std::string = "", Animal_health* animal_data = nullptr);
        Habitat(Habitat& other);
        void display_animal();
        void display_animal(std::string);
        void sick_wrt_cat(std::string);
        void sick_wrt_age(int);
        void sick_wrt_gender(char);
        void sick_wrt_location(std::string);
        void sick_wrt_date(date&,date&);
        int animal_born(date&);
        int sick_frequency();
};

#endif // HABITAT_H
*/
