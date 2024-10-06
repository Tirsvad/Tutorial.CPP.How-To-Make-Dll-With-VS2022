#pragma once

#ifdef MAKEDLL_EXPORT
#define MYDLL_API   __declspec(dllexport)
#else
#define MYDLL_API   __declspec(dllimport)
#endif

#include <vector>

class NumberList
{
public:
    //Constructor
    MYDLL_API NumberList(void);
    //Destructor
    virtual ~NumberList() {}

    //Methods
    MYDLL_API void addToList(int value);
    MYDLL_API std::vector<int> getList();

private:
    //Attributes
    std::vector<int> numberList;

    //Methods
    void initAttributes() {}
};

