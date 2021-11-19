//
// Created by liorlevy on 17/11/2021.
//

//#include "Trainer.h"
//
// Created by ellabeeri on 10/11/2021.
//

#include "Trainer.h"
#include "Studio.h"

int Trainer::getCapacity() const {
    return capacity;
}

void Trainer::addCustomer(Customer *customer) {
    customersList.push_back(customer);

}

void Trainer::removeCustomer(int id) {
    customersList.pop_back();
}

Customer *Trainer::getCustomer(int id) {
    for (int i = 0; i < customersList.size(); ++i) {
        if (customersList[i]->getId() == id)
            return customersList[i];
    }
    return nullptr;
}

std::vector<Customer *> &Trainer::getCustomers() {
    return customersList;

}

std::vector<OrderPair> &Trainer::getOrders() {
    return orderList;
}
//std::vector<OrderPair> output;
//  for (int i = 0; i < getCustomers().size(); i++)//run on all customers
// {
//  for (int j = 0; j < getCustomers()[i]->order(Studio().getWorkoutOptions()).size(); j++) {
//    int workoutID = getCustomers()[i]->order(Studio().getWorkoutOptions())[j];

//output.push_back( );
//  OrderPair a = new OrderPair <>;



void Trainer::order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout> &workout_options) {

    getCustomer(customer_id)->order(workout_options);
}

void Trainer::openTrainer() {
    open = true;


}

void Trainer::closeTrainer() {

}

int Trainer::getSalary() {
    return;
}

bool Trainer::isOpen() {

    return open;
}

Trainer::Trainer(int t_capacity) {

}

Workout workoutFromID(int id) {
    for (int k = 0; k < Studio().getWorkoutOptions().size(); k++) {
        //running on workout option and compare it to customers workout number.

        if (Studio().getWorkoutOptions()[k].getId() == id)
            return Studio().getWorkoutOptions()[k];
    }

}
