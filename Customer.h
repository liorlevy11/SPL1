//
// Created by liorlevy on 17/11/2021.
//

//#ifndef UNTITLED_CUSTOMER_H
//#define UNTITLED_CUSTOMER_H

//#endif //UNTITLED_CUSTOMER_H
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <vector>
#include <string>
#include "Workout.h"


class Customer{
public:
    Customer(std::string c_name, int c_id);
    virtual std::vector<int> order(const std::vector<Workout> &workout_options)=0;
    virtual std::string toString() const = 0;
    std::string getName() const;
    int getId() const;
private:
    const std::string name;
    const int id;
};


class SweatyCustomer : public Customer {
public:
    SweatyCustomer(std::string name, int id);
    virtual std::vector<int> order(const std::vector<Workout> &workout_options);
    virtual std::string toString() const;
private:
};


class CheapCustomer : public Customer {
public:
    CheapCustomer(std::string name, int id);
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
private:
    int cheapestWOIdByType(WorkoutType type, const std::vector<Workout> &vector);
};


class HeavyMuscleCustomer : public Customer {
public:
    HeavyMuscleCustomer(std::string name, int id);
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
private:
};


class FullBodyCustomer : public Customer {
public:
    FullBodyCustomer(std::string name, int id);
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
private:
    int cheapestWOIdByType(WorkoutType type, const std::vector<Workout> &vector);
    int expensiveWOIdByType(WorkoutType type, const std::vector<Workout> &vector);

};


#endif