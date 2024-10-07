#pragma once

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <vector>

#ifdef NUMBERLIST_EXPORTS // NUMBERLIST_EXPORTS is defined by Visual Studio. See projects proberties and in the pane Configurations  Properties > C/C++ > Preprocessor Defininations
#define NUMBERLIST_API    __declspec(dllexport)
#else
#define NUMBERLIST_API    __declspec(dllimport)
#endif

class NumberList
{
public:
    //Constructor
    NUMBERLIST_API NumberList(void);
    //Destructor
    virtual ~NumberList() {}

    //Methods
    NUMBERLIST_API void addToList(int value);
    NUMBERLIST_API std::vector<int> getNumbers() const;

private:
    //Attributes
    std::vector<int> mNumberList;

    //Methods
    void initAttributes() {}
};

#endif // NUMBERLIST_H