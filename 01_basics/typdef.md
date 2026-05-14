Tydef is a reserved keyword used to create an additional name (alias) for another data type
New identifier for an existing type
Helps with reaadability and reduce typos

Example:
```
#include<iostream>
#include<vector>
    typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main(){

    pairlist_t pairlist;

    return 0;
}

```
One naming conviction --> typedef ends with '_t'


Largerly replaced with 'using' --> works better with templates:
```

using text_t = std::strng

```