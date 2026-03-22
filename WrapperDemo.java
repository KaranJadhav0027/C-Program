
class WrapperDemo
{
    public static void main(String Arg[])
    {
        int no1 = 11;

        Integer no2 = 11;

        System.out.println(no1);
        System.out.println(no2);

        int x = no2;        // Auto Unboxing
        System.out.println(x);
        
        Integer y = no1;    // Auto Boxing
        System.out.println(y);
    }
}

/*
    Premitive Data type         Wrapper class

1       boolean                 Boolean
2       byte                    Byte
3       char                    Character
4       short                   Short
5       int                     Integeer
6       float                   Float
7       double                  Double
8       long                    Long


*/