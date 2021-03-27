using System;
using System.Collections.Generic;


namespace CSProject
{
    class Program
    {
        private static int _bikeCount = 50;
        private static BikeList _bikes;

        static void Main(string[] args)
        {
            Init();
            RunBikeInput();
        }

        private static void RunBikeInput()
        {
            while (true)
            {
                Position position = GetPositionInput();
                Bike closestBike = _bikes.GetClosestBikeTo(position);

                Console.WriteLine(String.Format("Bitte buchen Sie das Rad mit der ID: {0} in {1} Metern Entfernung", closestBike.Id, closestBike.BikePosition.DistanceTo(position).ToString("0.##")));
                Console.WriteLine(Environment.NewLine + Environment.NewLine);
            }
        }

        private static Position GetPositionInput()
        {
            try
            {
                Console.WriteLine("Bitte geben Sie Ihre X Position ein");
                int x = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Bitte geben Sie Ihre Y Position ein");
                int y = Convert.ToInt32(Console.ReadLine());

                return new Position(x, y);
            }
            catch (Exception)
            {
                Console.WriteLine("Positionen können nur durch Zahlen angegeben werden");
                Console.WriteLine(Environment.NewLine);
                //Bad Input => Rerun recursively
                return GetPositionInput();
            }

        }

        private static void Init()
        {
            _bikes = new BikeList();

            for (int i = 0; i < _bikeCount; i++)
            {
                _bikes.Add(new Bike(i + 1));
            }
        }
    }

    public class BikeList : List<Bike>
    {
        public Bike GetClosestBikeTo(Position position)
        {
            //Can't use Linq because of required Bike by Bike output
            Bike closestBike = this[0];
            double closestDistance = closestBike.BikePosition.DistanceTo(position);

            foreach (Bike bike in this)
            {
                double currentDistance = bike.BikePosition.DistanceTo(position);

                if (currentDistance < closestDistance)
                {
                    closestBike = bike;
                    closestDistance = currentDistance;
                    Console.WriteLine("Besseres Rad gefunden: ID = " + bike.Id + " Distanz = " + currentDistance.ToString("0.##"));
                }
            }

            Console.WriteLine(Environment.NewLine);

            return closestBike;
        }
    }

    public class Bike
    {
        public int Id { get; private set; }
        public Position BikePosition { get; private set; }

        public Bike(int id)
        {
            this.Id = id;
            this.BikePosition = new Position();
        }

    }

    public class Position
    {
        public int X { get; set; }
        public int Y { get; set; }

        /// <summary>
        /// Random Constructor => Generates Random position
        /// </summary>
        public Position()
        {
            var rnd = new Random();
            X = rnd.Next(0, 1000);
            Y = rnd.Next(0, 1000);
        }

        public Position(int x, int y)
        {
            this.X = x;
            this.Y = y;
        }

        public double DistanceTo(Position pos)
        {
            int xDelta = pos.X - this.X;
            int yDelta = pos.Y - this.Y;
            
            double distance = Math.Sqrt(Math.Pow(xDelta, 2) + Math.Pow(yDelta, 2));
            return distance;
        }
    }


}
