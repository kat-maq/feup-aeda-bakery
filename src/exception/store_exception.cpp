//
// Created by up201906166 on 23/10/2020.
//

#include "store_exception.h"

StoreDoesNotExist::StoreDoesNotExist(const std::string& name) :
    std::invalid_argument(name + " Store does not exist!"){
}

StoreAlreadyExists::StoreAlreadyExists(const std::string &name) :
    logic_error(name + " Store already exists!") {
}
