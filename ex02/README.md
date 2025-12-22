*This project has been created as part of the 42 curriculum by anagarri.*

# CPP_Module02

**Resources**

[GEEKSFORGEEKS: Ad-hoc, Inclusion, Parametric & Coercion Polymorphisms](https://www.geeksforgeeks.org/dsa/ad-hoc-inclusion-parametric-coercion-polymorphisms/)

## Ad-hoc Polymorphism (Overloading)
Ad-hoc polymorphism allows functions with the same name act differently for each type. For example, given two ints and the + operator, it adds them together. Given two std::strings it concatenates them together. This is called overloading.
s
Here is a concrete example that implements function add for ints and strings,

```cpp
#include <iostream>
#include <string>

int add(int a, int b) {
 return a + b;
}

std::string add(const char *a, const char *b) {
 std::string result(a);
 result += b;
 return result;
}

int main() {
 std::cout << add(5, 9) << std::endl;
 std::cout << add("hello ", "world") << std::endl;
}
```



## Copy Constructor vs Copy Assignment Operator (C++)

This document explains the difference between the **copy constructor** and the **copy assignment operator** in C++, when each one is called, and how to implement them step by step.

---

## 1. Core Idea (Short Version)

* **Copy constructor** → creates a **new object** from an existing one
* **Copy assignment operator** → **replaces the contents** of an existing object

**Rule to remember:**

* Object does **not** exist yet → **constructor**
* Object **already exists** → **assignment operator**

---

## 2. Copy Constructor

### What it is

A special constructor that initializes a new object using another object of the same type.

### Signature

```cpp
ClassName(const ClassName& other);
```

### When it is called

```cpp
ClassName a;
ClassName b(a);     // copy constructor
ClassName c = a;    // copy constructor
```

### What it does

* Allocates resources for the new object
* Copies data from `other`
* Runs only once, at object creation

---

## 3. Copy Assignment Operator

### What it is

A special operator that copies data into an already existing object.

### Signatures

```cpp
ClassName& operator=(const ClassName& other);
```
```cpp
Fixed& Fixed::operator=(const Fixed& original) {}
    ✅ Return type: Fixed&
    ✅ Scope: Fixed::
    ✅ Operator name: operator=
```

### When it is called

```cpp
ClassName a;
ClassName b;

a = b;   // copy assignment operator
```

### What it does

* Cleans up existing resources
* Copies data from `other`
* Returns `*this`
* Can be called many times

---

## 4. Side-by-Side Comparison

| Feature                     | Copy Constructor      | Copy Assignment Operator |
| --------------------------- | --------------------- | ------------------------ |
| Creates object              | Yes                   | No                       |
| Object already exists       | No                    | Yes                      |
| Called at initialization    | Yes                   | No                       |
| Called with `=`             | Sometimes (`A a = b`) | Yes (`a = b`)            |
| Needs self-assignment check | No                    | Yes                      |
| Returns value               | No                    | Yes (`*this`)            |

---

## 5. Step-by-Step Implementation Guide

### Step 1: Identify owned resources

If your class owns:

* Dynamic memory (`new`)
* File handles
* Mutexes
* Any resource needing cleanup

You must implement both copy operations.

---

### Step 2: Implement the destructor

Always start with the destructor.

```cpp
class MyClass {
    int* data;
public:
    ~MyClass() {
        delete data;
    }
};
```

---

### Step 3: Implement the copy constructor

```cpp
MyClass(const MyClass& other) {
    data = new int(*other.data);  // deep copy
}
```

**Purpose:**

* Create independent resources
* Copy the contents of `other`

---

### Step 4: Implement the copy assignment operator

```cpp
MyClass& operator=(const MyClass& other) {
    if (this != &other) {         // self-assignment check
        delete data;              // cleanup old resource
        data = new int(*other.data);
    }
    return *this;
}
```

**Purpose:**

* Avoid memory leaks
* Handle self-assignment safely
* Replace existing data

---

## 6. Complete Example

```cpp
class MyClass {
    int* data;

public:
    MyClass(int value) {
        data = new int(value);
    }

    ~MyClass() {
        delete data;
    }

    MyClass(const MyClass& other) {
        data = new int(*other.data);
    }

    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }
};
```

---

## 7. Common Beginner Mistakes

* Forgetting the self-assignment check
* Shallow copying pointers
* Freeing memory twice
* Confusing `A a = b` with `a = b`

---

## 8. Rule of Three

If your class defines any of these:

* Destructor
* Copy constructor
* Copy assignment operator

It probably needs **all three**.

---

## 9. One-Sentence Summary

The copy constructor creates a new object from another object, while the copy assignment operator copies data into an already existing object.


## STATIC vs. NON-STATIC member functions

A member function should be static if it does not need a particular object of the class to work.

**Non-static (regular) member functions:**

* Operate on a specific object (this)

* Can access non-static members of that object

**Static member functions:**

* Belong to the class itself, not any object

* Cannot use this

* Can only access static members or what’s passed in as arguments

