# Heap-of-Students-Part-1
-Mermaid-
'''classDiagram
    class Address {
        -string street
        -string city
        -string state
        -string zip
        +Address()
        +init(street, city, state, zip)
        +printAddress()
    
    class Date {
        -int month
        -int day
        -int year
        +Date()
        +init(dateString)
        +printDate()
    }

    class Student {
        -string firstName
        -string lastName
        -Address address
        -Date birthdate
        -Date gradDate
        -int credits
        +Student()
        +init(studentString)
        +printStudent()
        +getLastFirst()
    }

    Student --> Address : has
    Student --> Date : birthdate
    Student --> Date : gradDate
```
