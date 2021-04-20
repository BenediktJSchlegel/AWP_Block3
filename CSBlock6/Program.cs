using System;

namespace CSBlock6
{
    class Bike
    {
        public int Id { get; set; }
        public Position Position { get; set; }

        public Bike(int id, Position position)
        {
            this.Id = id;
            this.Position = position;
        }

        public Bike(int id)
        {
            this.Id = id;
            this.Position = new Position();
        }

        public override string ToString()
        {
            return String.Format("Bike: ID:{0} Position:{1}", Id, Position.ToString());
        }
    }

    class Position
    {
        public int X { get; set; }
        public int Y { get; set; }

        public Position()
        {
            var rnd = new Random();

            this.X = rnd.Next(0, 1000);
            this.Y = rnd.Next(0, 1000);
        }

        public Position(int x, int y)
        {
            this.X = x;
            this.Y = y;
        }

        public override string ToString()
        {
            return String.Format("Position: X:{0} Y:{1}", X, Y);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            var bike = new Bike(1, new Position(100,255));
            var bike2 = new Bike(2);
            var bike3 = new Bike(3);

            Console.WriteLine(bike.ToString());
            Console.WriteLine(bike2.ToString());
            Console.WriteLine(bike3.ToString());

        }
    }
}
