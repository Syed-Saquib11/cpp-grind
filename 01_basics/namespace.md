Namespaces provides solution for preventing name conflicts in larger projects. Each Entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.

Now, we can either just have mention our entity with the namespace:
```
std::cout << first::x;
std::cout << second::x;

```

Or we can mention namespace with "using":
```
int main(){
    using namespace second;
    std :: cout << x; //---> this will print the value of x from namespace 2
    std::cout<< first::x; // while this one from namespace 2
}


```

:: are scope resolution

we keep typing std:: over and over again we can replace it with "using namespace std" but std, is a namespace on its own so it have hundereds of predefined entities so its bound to have a naming conflict in larger project

we can replace common std usage at the top as "using std::cout;" tho