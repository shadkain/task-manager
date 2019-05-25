#include <iostream>
#include "Controller.h"
#include "user/User.h"

int main() {
    Controller controller;
    Request request = {
            .OPTIONS={
        {"name", "vasya"},
        {"surname", "pupkin"},
        {"birth_date", "now()"},
        {"avatar", "//beautiful"}
    }};

    std::cout << controller.createUser(request) << std::endl;

    return 0;
}