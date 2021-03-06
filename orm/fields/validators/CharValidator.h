//
// Created by Святослав Кряжев on 26.04.2019.
//

#ifndef ORM_CHARVALIDATOR_H
#define ORM_CHARVALIDATOR_H

#include "BaseValidator.h"
#include "CharField.h"

class CharValidator : public BaseValidator {
public:
    void pass(const std::string& string, BaseField* _field) const override {
        if (string.length() > maxLength) {
            throw "Exceeds max length";
        }

        // Writing data to field
        if (_field) {
            auto field = dynamic_cast<CharField*>(_field);
            field->data.data = string;
        }
    }

private:
    unsigned long maxLength = 128;
};

#endif //ORM_CHARVALIDATOR_H
