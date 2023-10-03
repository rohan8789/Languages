/*
1. Inheritance is important feature of oops
2. It saves us from repetition.
3. Resuability is very important feature of oops.
4. Reusing classes saves time and money.
5. Reusing already tested and debugged class will save a lot of time
   and effort of developing and debugging the same thing again
*/

/*
WHAT IS INHERITANCE IN C++???
1. The concept of reusability in c++ is supported using inheritsnce
2. we can reuse the properties of exisiting class by inheriting from it.
3. The existing class is known as base class and the new class is known as 
   derived class.
4. there can be more than one base cass
5. Different  types of inheritance:-
      1. Multiple Inheritance
      2. Hierarchical Inheritance
      3. Multilevel Inheritance 
      4. Hybrid Inheritance
      and obv a single Inheritance
   
*/

/*
1. SIngle Inheritance:-
   A -----> B

2. Multiple Inheritance:-
   more than one base class.
   A----->                 Employee-------
         -------C                        -------- Programmer
   B----->                 Assistant------

3. Hierarchical Inheritance:-
   Several derived class from single base class.
            ---------B
   A-------->
            ---------C

4. Multi-level Inheritance:-
   Deriving from already derived class.


   Animal-----> Carnivorous------> lion
   Ainmal-----> mammal------> cow
   here, 
   Mammal = Animal + more

5. Hybrid Inheritance:-
   It is a combination of multiple Inheritance and multi-level Inheritance.
   Derived from two base class as in multiple inheritance
   However, one of the parent class is not base class

          -------->B                          ----->mammal
   A------>          --------->D    Animal---->           ------>bat
          -------->C                          ----->bird

              ------->batsman
    player---->             ------>allrounder
              ------->keeper
*/