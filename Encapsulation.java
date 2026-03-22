class Arithematic
{
    public int No1;
    public int No2;

    public Arithematic()
    {
        System.out.println("Inside default constructor");
        No1 = 0;
        No2 = 0;
    }

    public Arithematic(int A, int B)
    {
        System.out.println("Inside parametrised constructor");
        No1 = A;
        No2 = B;
    }
    
    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
}

class Encapsulation
{
    public static void main(String Arr[])
    {
        System.out.println("Inside main function");

        Arithematic aobj1 = new Arithematic();  // Arithematic *aobj1 = new Arithematic();
        Arithematic aobj2 = new Arithematic(11,10);

        int Ret = 0;

        Ret = aobj2.Addition();
        System.out.println("Addition is : "+Ret);

        Ret = aobj2.Substraction();
        System.out.println("Substraction is : "+Ret);
    }
}
