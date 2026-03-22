// 1 : One class can inherite other class
class A
{}
class B extends A
{}

// 2 : One class can implement one interface
interface A
{}
class B implements A
{}

// 3 : One class can implement more than one interfaces
interface A
{}
interface B
{}
class Demo implements A, B
{}

// 4 : One class can inherite one class and implements any number of interfacces
class A
{}
interface B
{}
class Demo extends A implements B
{}

// 5 : 
interface A
{}
interface B
{}