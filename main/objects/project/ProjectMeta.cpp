//
// Created by Святослав Кряжев on 20.05.2019.
//

#include "Meta.h"
#include "Project.h"


template <>
Meta<Project>::Meta() :
        fieldsNames {
                "id",
                "owner_id",
                "title",
                "description",
                "creation_date"
        } {}

template <>
const char* Meta<Project>::tableName() const {
    return "projects";
}

template <>
bool Meta<Project>::hasField(const std::string& fieldName) const {
    return fieldsNames.find(fieldName) != fieldsNames.end();
}