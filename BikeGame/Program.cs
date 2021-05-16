using System;
using System.Collections.Generic;

namespace BikeGame
{
    class Program
    {
        private static Board _board;
        private static int _boardExtent = 25;

        static void Main(string[] args)
        {
            var player = new Player(10, 9);
            var bikes = GenerateBikes();
            _board = new Board(player, _boardExtent, bikes);

            //TODO: Print Instructions

            while (true)
            {
                ConsoleKeyInfo keyInfo = Console.ReadKey();
                HandleKeyEvent(keyInfo.Key);

                //Re-Evaluate the board
                _board.SetTiles();
                //Redraw the board
                _board.Draw();
            }

        }

        private static ConsoleKey[] _consoleKeys = { ConsoleKey.UpArrow, ConsoleKey.DownArrow, ConsoleKey.LeftArrow, ConsoleKey.RightArrow, ConsoleKey.W, ConsoleKey.S, ConsoleKey.A, ConsoleKey.D };

        private static void HandleKeyEvent(ConsoleKey pressedKey)
        {
            //Reject keystroke if not valid
            if (!_consoleKeys.Contains(pressedKey))
                return;

            MoveDirection direction;

            switch (pressedKey)
            {
                case ConsoleKey.W:
                case ConsoleKey.UpArrow:
                    direction = MoveDirection.UP;
                    break;
                case ConsoleKey.S:
                case ConsoleKey.DownArrow:
                    direction = MoveDirection.DOWN;
                    break;
                case ConsoleKey.A:
                case ConsoleKey.LeftArrow:
                    direction = MoveDirection.LEFT;
                    break;
                case ConsoleKey.D:
                case ConsoleKey.RightArrow:
                    direction = MoveDirection.RIGHT;
                    break;
                default:
                    return;
            }

            MovePlayer(direction);
        }

        private enum MoveDirection { LEFT, RIGHT, DOWN, UP }

        private static void MovePlayer(MoveDirection direction)
        {
            switch (direction)
            {
                case MoveDirection.LEFT:
                    if (_board.Player.Position.Column == 0)
                        return;

                    _board.Player.Position.Column = _board.Player.Position.Column - 1;
                    break;
                case MoveDirection.RIGHT:
                    if (_board.Player.Position.Column == _boardExtent - 1)
                        return;

                    _board.Player.Position.Column = _board.Player.Position.Column + 1;
                    break;
                case MoveDirection.DOWN:
                    if (_board.Player.Position.Row == _boardExtent - 1)
                        return;

                    _board.Player.Position.Row = _board.Player.Position.Row + 1;
                    break;
                case MoveDirection.UP:
                    if (_board.Player.Position.Row == 0)
                        return;

                    _board.Player.Position.Row = _board.Player.Position.Row - 1;
                    break;
                default:
                    break;
            }
        }

        private static List<Bike> GenerateBikes()
        {
            var bikes = new List<Bike>();
            var rnd = new Random();

            for (int i = 0; i < 5; i++)
            {
                bikes.Add(new Bike(rnd.Next(0, 25), rnd.Next(0, 25)));
            }

            return bikes;
        }
    }


    class Board
    {
        public Player Player { get; set; }

        public List<Bike> Bikes { get; set; }

        public int TileExtent { get; set; }

        public Tile[][] Tiles { get; private set; }

        public Board(Player player, int extent, List<Bike> bikes)
        {
            this.Player = player;
            this.TileExtent = extent;
            this.Bikes = bikes;

            Setup();
        }

        private void Setup()
        {
            Console.BackgroundColor = ConsoleColor.Black;
            Console.Title = "BikeGame";

            SetupTiles();
        }

        /// <summary>
        /// Inits the Tile Arrays
        /// </summary>
        private void SetupTiles()
        {
            //Create Top Level 2D Array
            Tiles = new Tile[TileExtent][];

            //Create Each Array within the Array
            for (int i = 0; i < Tiles.Length; i++)
            {
                Tiles[i] = new Tile[TileExtent];
            }

            //Init each Tile
            foreach (Tile[] tiles in Tiles)
            {
                for (int i = 0; i < tiles.Length; i++)
                {
                    tiles[i] = new Tile();
                }
            }
        }

        /// <summary>
        /// Resets Tiles to Default and adjusts appropriate Tiles with Bikes/Players in them
        /// </summary>
        public void SetTiles()
        {
            foreach (Tile[] tiles in Tiles)
            {
                for (int i = 0; i < tiles.Length; i++)
                {
                    tiles[i] = new Tile();
                }
            }

            Tiles[Player.Position.Row][Player.Position.Column].Color = ConsoleColor.Blue;
            Tiles[Player.Position.Row][Player.Position.Column].TextColor = ConsoleColor.White;
            Tiles[Player.Position.Row][Player.Position.Column].Symbol = "p";

            foreach (Bike bike in Bikes)
            {
                Tiles[bike.Position.Row][bike.Position.Column].Color = ConsoleColor.Green;
                Tiles[bike.Position.Row][bike.Position.Column].TextColor = ConsoleColor.White;
                Tiles[bike.Position.Row][bike.Position.Column].Symbol = "b";
            }
        }

        public void Draw()
        {
            Console.Clear();

            Console.Write(Environment.NewLine);

            foreach (Tile[] tiles in Tiles)
            {
                Console.Write(Environment.NewLine);

                foreach (Tile tile in tiles)
                {
                    tile.Draw();
                }
            }

            Console.BackgroundColor = ConsoleColor.Black;

            Console.Write(Environment.NewLine);
        }
    }

    class Tile
    {
        public string Symbol { get; set; }
        public ConsoleColor Color { get; set; }
        public ConsoleColor TextColor { get; set; }

        /// <summary>
        /// Default => Empty Tile
        /// </summary>
        public Tile()
        {
            Symbol = "O";
            Color = ConsoleColor.DarkGray;
            TextColor = ConsoleColor.DarkGray;
        }

        public Tile(string symbol, ConsoleColor color, ConsoleColor textColor)
        {
            this.Symbol = symbol;
            this.Color = color;
            this.TextColor = textColor;
        }

        public void Draw()
        {
            Console.ForegroundColor = TextColor;
            Console.BackgroundColor = Color;
            Console.Write(Symbol);
            Console.Write(Symbol);
        }
    }

    class Bike
    {
        public Position Position { get; set; }

        public Bike(int row, int col)
        {
            this.Position = new Position(row, col);
        }
    }

    class Player
    {
        public Position Position { get; set; }

        public Player(int row, int col)
        {
            this.Position = new Position(row, col);
        }
    }

    class Position
    {
        public int Row { get; set; }
        public int Column { get; set; }

        public Position(int row, int col)
        {
            this.Row = row;
            this.Column = col;
        }
    }

    static class Extensions
    {

        /// <summary>
        /// ConsoleKey[] Contains Extension-Method
        /// </summary>
        /// <param name="keys"></param>
        /// <param name="key"></param>
        /// <returns></returns>
        public static bool Contains(this ConsoleKey[] keys, ConsoleKey key)
        {
            foreach (ConsoleKey k in keys)
            {
                if (k == key)
                    return true;
            }

            return false;
        }
    }
}
