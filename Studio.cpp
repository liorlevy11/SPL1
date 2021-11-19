//
// Created by liorlevy on 17/11/2021.
//

//#include "Studio.h"
//
// Created by ellabeeri on 10/11/2021.
//
#include "Studio.h"

Studio::Studio() {

}


void Studio::start() {

}

int Studio::getNumOfTrainers() const {
    return trainers.size();
}

Trainer *Studio::getTrainer(int tid) {
    return nullptr;
}

const std::vector<BaseAction *> &Studio::getActionsLog() const {
    return <#initializer#>;
}

std::vector<Workout> &Studio::getWorkoutOptions() {
    return <#initializer#>;
}
