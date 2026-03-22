
class Base
{
    public int A,B;

    public void Fun()
    {   System.out.println("Inside Base Fun");  }
    public void Gun()
    {   System.out.println("Inside Base Gun");  }
    public void Sun()
    {   System.out.println("Inside Base Sun");  }
    public void Run()
    {   System.out.println("Inside Base Run");  }
}

class Derived extends Base
{
    public int X,Y;
    public void Fun()
    {   System.out.println("Inside Derived Fun");   }
    public void Sun()
    {   System.out.println("Inside Derived Sun");   }
    public void Mun()
    {   System.out.println("Inside Derived Mun");   }
    public void Bun()
    {   System.out.println("Inside Derived Bun");   }
}

class RMD
{
    public static void main(String A[])
    {
        Base bobj = new Derived();  // Upcasting

        bobj.Fun();     // Dervied Fun
        bobj.Gun();     // Base Gun
        bobj.Sun();     // Derived Sun
        bobj.Run();     // Base Run
        // bobj.Mun();     // Error
        // bobj.Bun();     // Error
    }
}

// Base bobj = new Base()           No casting
// Derived dobj = new Derived()     No casting
// Base bobj = new Derived();       Upcasting
// Derived dobj = new Base()        Downcasiting    (Not allowed)