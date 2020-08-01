/** 
 * File:   Title.h
 * Author: Pierre Abraham Mulamba
 * Created (modified) on 20200629, 22:22
 */

#ifndef TITLE_H
#define TITLE_H

#include <string>
#include <iostream>


class Title {
public:
    Title(const std::string& program, const std::string& release);
    const std::string& getProgram()const;
    const std::string& getRelease()const;
    void setProgram(const std::string& program);
    void setRelease(const std::string& release);
    
    virtual ~Title() = default;
private:
    std::string program_;
    std::string release_;
};

#endif /* TITLE_H */

