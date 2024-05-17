# Hobby Recommendation System

Welcome to the Hobby Recommendation System! Our project is an Object-Oriented Programming (OOP) implementation in C++ designed to help users select and manage hobbies such as Cooking, Drawing, and Singing. The system utilizes various OOP principles and smart pointers for efficient memory management.

![image-20240513224905684](./2.png)



- Our system for building hobbies in college facilitates connections between individuals who share common interests. It enables people to become members of different groups and participate in discussions that are related to their hobbies. 

- The system also includes features that allow community members to buy, sell, and trade items related to their hobbies. An event calendar is included that highlights events that are connected to hobbies and interests. 

- Additionally, there is a mentorship program and hobby classes that helps individuals improve their knowledges about their hobbies. And there is also a network for hobby meetups to promote social networking on campus.



## Project Overview

The Hobby Recommendation System allows users to:

- Select a hobby from a list of options.
- Enter their name and be grouped into their chosen hobby category.
- View and manage the list of users within each hobby group.

This project demonstrates the use of classes, inheritance, polymorphism, exception handling, and smart pointers in C++.



## Features

- **OOP Design:** The system is designed using Object-Oriented Programming principles.
- **Smart Pointers:** Utilizes `unique_ptr` for automatic memory management.
- **Exception Handling:** Robust error handling to prevent abnormal program termination.
- **File Management:** Reads and writes user data to text files for persistent storage.



## UML Diagram 

![image-20240513224905684](../images/ReadMe/1-1715963438741-2.png)



## Hierarchy

```
HobbyProject
├── Header Files
│   ├── CookingGroup.h
│   ├── DrawingGroup.h
│   ├── Handler.h
│   ├── HobbyGroup.h
│   ├── Item.h
│   ├── resource.h
│   ├── SingingGroup.h
│   ├── User.h
├── Resource Files
│   └── Hobby.rc
├── Source Files
    ├── 1main.cpp
    ├── 2Handler.cpp
    ├── 3DrawingGroup.cpp
    ├── 5Item.cpp
    ├── 5User.cpp
    ├── CookingGroup.cpp
    ├── HobbyGroup.cpp
    └── SingingGroup.cpp
```

