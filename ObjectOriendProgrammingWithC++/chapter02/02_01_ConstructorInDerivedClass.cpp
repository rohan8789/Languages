/*
1. We can use Constructor in derived class

2. If base class constructor does not have any argument, 
   there is no need of any constructor in derived class

3. If there are one or more argument in base class constructor,
   Derived class need to pass argument i base class constructor

4. If both base and derived class have constructors, base 
   class constructor is eecuted first
*/


/*
CONSTRUCTOR IN MULTIPLE INHERITANCE
1. In Multiple inheritance, base classes are constructed in order in 
   which they appear in the class declaration


2. In multi-level Inheritance, the constructor are executed inthe order 
   of inheritance.
   A------>B------>C
*/

/*
SPECIAL SYNTAX
let A(a1, a2), B(b1, b2), C(c1, c2);
then, 

Derived_const(a1, a2, b1, b2, c1, c2) : base1-Const(a1, a2), base2-const(b1, b2)
{

};
*/


/*
SPECIAL CASE OF VIRTUAL BASE CLASS
1. The constructor of virtual base class is invoked before an non virtual base class.
2. If there are multiple virtual base classes, there are invoked in the order of declaration.
3. Any non-virtual base class are then constructed before the derived class constructor is executed 
*/