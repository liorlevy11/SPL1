//
// Created by liorlevy on 17/11/2021.
//

//#include "Action.h"
//
// Created by ellabeeri on 10/11/2021.
//
#include <string>
#include <iostream>
#include "Action.h"
#include "Studio.h"

ActionStatus BaseAction::getStatus() const {
    return status;
}

void BaseAction::complete() {

}

void BaseAction::error(std::string errorMsg) {
    status = ERROR;
    this->errorMsg = errorMsg;
    std::cout << "ERROR:" << errorMsg << std:: endl;
}

std::string BaseAction::getErrorMsg() const {
    return errorMsg;
}

BaseAction::BaseAction() {

}

OpenTrainer::OpenTrainer(int id, std::vector<Customer *> &customersList):trainerId(id),customers(customersList) {


}

void OpenTrainer::act(Studio &studio) {
    if((studio.getTrainer(trainerId)== nullptr)||(studio.getTrainer(trainerId)->isOpen()== true))
        std::cout<<"Workout session does not exist or is already open";
    if(studio.getTrainer(trainerId)->getCapacity()>=4)
    {
        studio.getTrainer(trainerId)->openTrainer();
        for(int i=0;i<customers.size();i++)
        {
            studio.getTrainer(trainerId)->addCustomer(customers[i]);

        }


    }



}

std::string OpenTrainer::toString() const {
    return std::string();
}

void Order::act(Studio &studio) {
    std::cout <<"order"<<trainerId;
    for(int i=0;i<studio.getTrainer(trainerId)->getCustomers().size();i++)//run on all customers
    {
        for(int j=0;studio.getTrainer(trainerId)->getCustomers()[i]->order(studio.getWorkoutOptions()).size();j++) //run on customers order(workouts by int)-int vector
        {
            for (int k = 0; k < studio.getWorkoutOptions().size(); k++)//running on the workout option and comper it to the customers workout num
            {
                if (studio.getWorkoutOptions()[k].getId() ==
                    studio.getTrainer(trainerId)->getCustomers()[i]->order(studio.getWorkoutOptions())[j]) {
                    std::cout << studio.getTrainer(trainerId)->getCustomers()[i]->getName() << "Is Doing"
                              << studio.getWorkoutOptions()[k].getName();//print customer name and his workout
                }
            }
        }


    }
}



std::string Order::toString() const {
    return std::string();
}

Order::Order(int id):trainerId(id) {

}

MoveCustomer::MoveCustomer(int src, int dst, int customerId) {


}

void MoveCustomer::act(Studio &studio) {

}

std::string MoveCustomer::toString() const {
    return std::string();
}

void Close::act(Studio &studio) {

}

std::string Close::toString() const {
    return std::string();
}

Close::Close(int id) {

}

void CloseAll::act(Studio &studio) {

}

std::string CloseAll::toString() const {
    return std::string();
}

CloseAll::CloseAll() {

}

PrintWorkoutOptions::PrintWorkoutOptions() {

}

void PrintWorkoutOptions::act(Studio &studio) {

}

std::string PrintWorkoutOptions::toString() const {
    return std::string();
}

void PrintTrainerStatus::act(Studio &studio) {

}

std::string PrintTrainerStatus::toString() const {
    return std::string();
}

PrintTrainerStatus::PrintTrainerStatus(int id) {

}

PrintActionsLog::PrintActionsLog() {

}

void PrintActionsLog::act(Studio &studio) {

}

std::string PrintActionsLog::toString() const {
    return std::string();
}

BackupStudio::BackupStudio() {

}

RestoreStudio::RestoreStudio() {

}
