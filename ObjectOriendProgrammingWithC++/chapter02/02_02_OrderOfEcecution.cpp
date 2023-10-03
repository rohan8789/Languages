/*
Case 1:-
    Class B : public A
    {
        Order of ececution of constructor:- first A(), then B()
    };
Case 2:-
    class A : public B, public C
    {
        Order of execution of constructor:- first B(), then C(), then A()
    }
Case 3:-
    class A : public B, virtual public C
    {
        Order of execution:- first C(), then B(), then C()
    }
*/