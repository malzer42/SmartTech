/** 
 * File:   Title.cpp
 * Author: Pierre Abraham Mulamba
 * Created (modified) on 20200629, 22:22
 */

#include "Title.h"

Title::Title(const std::string& program, const std::string& release) : program_(program), release_(release) {
    std::cout << '\n' << getProgram() << '\t' << getRelease() << '\n';
}

const std::string& Title::getProgram()const{
    return program_;
}

const std::string& Title::getRelease()const{
    return release_;
}

void Title::setProgram(const std::string& program){
    program_ = program;
}

void Title::setRelease(const std::string& release){
    release_ = release;
}