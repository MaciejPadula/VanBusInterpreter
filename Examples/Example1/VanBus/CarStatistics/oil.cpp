#include "oil.h"

void Oil::setTemperature(int temp){
    this->temp = temp;
}
void Oil::setLevel(int level){
    this->level = level;
}
int Oil::getTemperature(){
    return temp;
}
int Oil::getLevel(){
    return level;
}
