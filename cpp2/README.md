# cpp2

## Makefile

Used to help with compilation.

Build: (no arguments means the first target is used by default)

```
make
```

This is equivalent to:

```
make test
```

Clean (here, remove compilation artifacts and executables):

```
make clean
```

> NOTE: Makefiles don't do spaces. Use tabs everywhere.

## Function overloading

A function can be defined multiple times, provided its arguments do not have the same types.

Here's an example of defining multiple constructors:

```cpp
Figure::Figure() {
  area = 1
}

Figure::Figure(area) {
  this->area = area;
}
```

Associated header file:

```cpp
class Figure {
  private:
    double area;
  public:
    Figure();
    Figure(double);
}
```

## Operator overloading

This is the process of redefining operators (such as +, /, >, ...), which is not specific to classes but also works for them.

Syntax:

```cpp
bool operator>(Figure const&, Figure const&);
```

Caution! Since we pass figures as constants here, any methods called in the operators needs to be declared as const too, e.g.:

```cpp
double Figure::get_area() const {
  // TODO
}
```

## Copy vs reference

By default, arguments are passed by copy (a copy is made at runtime).

We can also pass a reference with `&`:

```cpp
void describe(char& name) {
  cout << name << endl;
}
```

This must only be done in the .cc file.

Passing by reference automatically resolves links, resulting in passing pointers useless. It also uses less memory.
