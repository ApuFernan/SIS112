namespace mi_primera_programa_en_c_;

class Program
{
    static void Main(string[] args)
    {
        //Primer metodo, mostrar un Hola Mundo
        HelloWorld();

        //Segundo metodo, mostrar la edad ingresada por el usuario
        GetAge();

        CalculateAge();
    }

    public static void HelloWorld()
    {
        Console.WriteLine("Hello, World!");
    }

    public static void GetAge()
    {
        Console.WriteLine("Enter your age:");
        string? ageInput = Console.ReadLine();
        if(string.IsNullOrEmpty(ageInput))
        {
            Console.WriteLine("Enter a value");
        }
        else
        {
        int ageInteger = Int32.Parse(ageInput);
        Console.WriteLine("Your age is: " + ageInteger);
        }
    }

    public static void CalculateAge()
    {
        Console.WriteLine("Enter your birth year:");
        string? birthYearInput = Console.ReadLine();

        if(string.IsNullOrEmpty(birthYearInput))
        {
            Console.WriteLine("Enter a valid value");
        }
        else
        {
            int birthYear = Int32.Parse(birthYearInput);
            Console.WriteLine("Your calculated Age is: " + (2024 - birthYear));
        }
    }
}